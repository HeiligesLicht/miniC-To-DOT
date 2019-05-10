%{
#define _GNU_SOURCE
#include "dec.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int yylex();
int yyerror(char *s);
int yylineno;

func_list* root;

%}

%union {
	char* name;
	node_dot* node;
	func_list* functions;
}

%locations

%token C_INT C_VOID C_IF C_ELSE C_SWITCH C_CASE C_BREAK C_EXTERN C_DEFAULT C_FOR C_WHILE C_RETURN EQUALS GTE LTE NOT_EQUALS LEFT_SHIFT RIGHT_SHIFT LOGICAL_AND LOGICAL_OR C_PLUS C_MINUS C_MULT C_DIV C_BIN_AND C_BIN_OR C_NOT C_LT C_GT 

%token <name> identificateur constante

%type <name> type
%type <node> programme fonction liste_instructions instruction bloc expression affectation variable var_tab binary_op saut appel liste_expressions l_expressions condition selection switch_body iteration binary_rel binary_comp
%type <functions> liste_fonctions


%left C_PLUS C_MINUS
%left C_MULT C_DIV
%left LEFT_SHIFT RIGHT_SHIFT
%left C_BIN_OR C_BIN_AND
%left LOGICAL_AND LOGICAL_OR
%left COMP
%left REL
%nonassoc UNARY_MINUS
%nonassoc THEN
%nonassoc ELSE

%%
programme : liste_declarations liste_fonctions { root = $2; }

liste_declarations : declaration liste_declarations
		    |

liste_fonctions : fonction liste_fonctions { $$ = add_func($1, $2); }
		| fonction { $$ = add_func($1, NULL); }

declaration : C_INT liste_declarateurs ';'

liste_declarateurs : declarateur ','  liste_declarateurs 
		    | declarateur

declarateur : identificateur 
	    | declarateur '[' constante ']'

fonction : type identificateur  '(' liste_parms  ')'  bloc { char* s = NULL;
															 asprintf(&s, "[label=\"%s, %s\" shape=invtrapezium color=blue]", $2, $1);
															 $$ = create_node( s);
															 $$->child = $6; } 
	    | C_EXTERN type identificateur  '(' liste_parms  ')' ';' {$$ = NULL;}

type :  C_VOID { $$ =  "void";}
		| C_INT { $$ = "int"; }

liste_parms : 	l_parms
				| 

l_parms : parm | parm ',' l_parms

parm : C_INT identificateur

liste_instructions : instruction liste_instructions { $$ = $1;
													  $$->sibling = $2;}
					| {$$ = NULL;}

instruction : iteration {$$ = $1;}
	    | selection {$$ = $1;}
	    | saut {$$ = $1;}
	    | affectation ';' {$$ = $1;} 
	    | bloc {$$ = $1;}
	    | appel {$$ = $1;}

iteration : C_FOR  '(' affectation ';' condition ';' affectation ')' instruction 
			{$$ = create_node("[label=\"FOR\"]");
			 $3->sibling = $5;
			 $5->sibling = $7;
			 $7->sibling = $9;
			 $$->child = $3;}
	    | C_WHILE  '(' condition ')' instruction {$$ = create_node("[label=\"WHILE\"]");
												  $3->sibling = $5;
												  $$->child = $3;}

selection : C_IF  '(' condition  ')' instruction %prec THEN {
	$$ = create_node("[label=\"IF\" shape=diamond]");
	$3->sibling = $5;
	$$->child = $3;
}
	    | C_IF  '(' condition  ')' instruction C_ELSE instruction %prec ELSE {
	$$ = create_node("[label=\"IF\" shape=diamond]");
	$3->sibling = $5;
	$5->sibling = $7;
	$$->child = $3;
}
	    | C_SWITCH  '(' expression  ')' '{' switch_body '}' {
	$$ = create_node("[label=\"SWITCH\"]");
	$$->child = $6;
}

switch_body : C_CASE constante ':' liste_instructions switch_body {
	char* s = NULL;
	asprintf(&s, "[label=\"CASE %s\"]", $2);
	$$ = create_node(s);
	$$->sibling = $5;
	$$->child = $4;
}
	    	| C_DEFAULT ':' liste_instructions {
	char* s = NULL;
	asprintf(&s, "[label=\"DEFAULT\"]");
	$$ = create_node(s);
	$$->sibling = $4;
	$$->child = $3;
}
			| { $$ = NULL; }

saut : C_BREAK ';' { $$ = create_node("[label=\"BREAK\" shape=box]"); }
	| C_RETURN ';' { $$ = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); }
	| C_RETURN expression ';' { $$ = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); $$->child = $2; }

affectation : variable '=' expression { $$ = create_node("[label=\":=\"]"); $$->child = $1; $$->child->sibling = $3; }

bloc :  '{' liste_declarations liste_instructions '}' { $$ = create_node("[label=\"BLOC\"]"); $$->child = $3; }

appel : identificateur '(' liste_expressions ')' ';' {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", $1);
	$$ = create_node(s);
	$$->child = $3;
}

variable : 	identificateur {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", $1);
	$$ = create_node(s);
}
			| variable var_tab {$$ = create_node("[label=\"TAB\"]"); $$->child = $1; $$->child->sibling = $2; }

var_tab : '[' expression ']' {$$ = $2;}
		| '[' expression ']' var_tab {$2->sibling = $4; $$ = $2;}

expression :  '(' expression ')' {$$ = $2;}
		| expression C_PLUS expression {$$ = create_node("[label=\"+\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression C_MINUS expression {$$ = create_node("[label=\"-\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression C_MULT expression {$$ = create_node("[label=\"*\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression C_DIV expression {$$ = create_node("[label=\"/\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression LEFT_SHIFT expression {$$ = create_node("[label=\"<<\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression RIGHT_SHIFT expression {$$ = create_node("[label=\">>\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression C_BIN_AND expression {$$ = create_node("[label=\"&\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | expression C_BIN_OR expression {$$ = create_node("[label=\"|\"]"); $$->child = $1; $$->child->sibling = $3;}
	    | C_MINUS expression %prec UNARY_MINUS {$$ = create_node("[label=\"-\"]"); $$->child = $2;}
	    | constante {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\"]", $1);
	$$ = create_node(s);
}
	    | variable { $$ = $1;}
	    | identificateur  '(' liste_expressions  ')' {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\"]", $1);
	$$ = create_node(s);
	$$->child = $3;
}

liste_expressions : l_expressions {$$ = $1;}
					| {$$ = NULL;}

l_expressions : expression {$$ = $1;}
				| expression ',' l_expressions {$$ = $1; $$->sibling = $3;}


condition : C_NOT '(' condition  ')' { $$ = create_node("[label=\"!\"]"); $$->child = $3; }
	    |  '(' condition  ')' {$$ = $2;}
		| condition LOGICAL_AND condition {$$ = create_node("[label=\"&&\"]"); $$->child = $1; $$->child->sibling = $3; }
	    | condition LOGICAL_OR condition {$$ = create_node("[label=\"||\"]"); $$->child = $1; $$->child->sibling = $3; }
		| expression C_LT expression {$$ = create_node("[label=\"<\"]"); $1->sibling = $3; $$->child = $1;}
	    | expression C_GT expression {$$ = create_node("[label=\">\"]"); $1->sibling = $3; $$->child = $1;}
	    | expression GTE expression {$$ = create_node("[label=\">=\"]"); $1->sibling = $3; $$->child = $1;}
	    | expression LTE expression {$$ = create_node("[label=\"<=\"]"); $1->sibling = $3; $$->child = $1;}
	    | expression EQUALS expression {$$ = create_node("[label=\"==\"]"); $1->sibling = $3; $$->child = $1;}
	    | expression NOT_EQUALS expression {$$ = create_node("[label=\"!=\"]"); $1->sibling = $3; $$->child = $1;}
	    ;
%%

int SEQ = 0;


int main() {
	if (yyparse() == 0) {
		print_compilation(root);	
	} else {
		free_node
	}
}

int yyerror(char* s) {
	fprintf(stderr, "%s at line: %d.\n", s, yylineno);
	exit(1);
}

node_dot* create_node(char* label)
{
    node_dot* newnode = (node_dot*) malloc(sizeof(node_dot));
    newnode->id = SEQ;
    newnode->label = strdup(label);
    newnode->child = NULL;
    newnode->sibling = NULL;
	SEQ++;
    return newnode;
};

void free_node(node_dot* root) {
	if (root == NULL) return;
	for(node_dot* c = root->child; c != NULL; c = c->sibling) {
		free_node(c);
		free(c);
	}
	free(root);
}

func_list* add_func(node_dot* node, func_list* prevlist) {
	func_list* newfunclist = (func_list*) malloc(sizeof(func_list));
	newfunclist->current = node;
	newfunclist->next = prevlist;
	return newfunclist;
};


void print_graph(node_dot* root) {
	if (root == NULL) return;

	printf("%d %s\n", root->id, root->label);
	
	for (node_dot* c = root->child; c != NULL; c = c->sibling) {
		print_graph(c);
		printf("%d -> %d\n", root->id, c->id);
	}
}

void print_compilation(func_list* root) {
	fprintf(stdout, "digraph MonProgramme {\n");
	func_list* explore = root;
	while (explore != NULL) {
		print_graph(explore->current);
		explore = explore->next;
	}
	fprintf(stdout, "}\n");
}

function* create_function(func_type type, char* name, param* pars) {
	function* f = (function*) malloc(sizeof(function));
	f->type = type;
	f->name = strdup(name);	
	f->params = pars;
	return f;
}

function* add_function(function* func, functions* func_list) {
	functions* newfunclist = (functions*) malloc(sizeof(functions));
	newfunclist->f = func;
	newfunclist->next = func_list;
	return newfunclist;
}

function* search_function(char* name, functions* func_list) {
	for(function* f = func_list->f; func_list != NULL; f = func_list->next) {
		if (strcmp(name, f->name) == 0) return f;
	}
	return NULL;
}

variable* create_variable(dec_type type, char* name, int value) {
	variable* var = (variable*) malloc(sizeof(variable));
	var->type = type;
	var->name = strdup(name);
	var->value = value;
	return var;
}

variable* add_variable(variable* var, scope* scope) {
	var->next = scope->var;
	scope->var = var;
	return scope;
}

variable* search_variable(char* name, scope* scope) {
	for(variable* v = scope->var; v != NULL; v = v->next) {
		if (strcmp(name, v->name) == 0) return v;
	}
	return NULL;
}

