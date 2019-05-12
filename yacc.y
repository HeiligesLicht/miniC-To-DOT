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

functions* all_functions;
scope* all_scopes;

%}

%union {
	char* name;
	node_dot* node;
	func_list* functions;
	param* param;
}

%locations

%token <name> C_INT C_VOID C_IF C_ELSE C_SWITCH C_CASE C_BREAK C_EXTERN C_DEFAULT C_FOR C_WHILE C_RETURN EQUALS GTE LTE NOT_EQUALS LEFT_SHIFT RIGHT_SHIFT LOGICAL_AND LOGICAL_OR C_PLUS C_MINUS C_MULT C_DIV C_BIN_AND C_BIN_OR C_NOT C_LT C_GT identificateur constante

%type <name> type
%type <node> programme fonction liste_instructions instruction bloc expression affectation variable var_tab saut appel liste_expressions l_expressions condition selection switch_body iteration  
%type <functions> liste_fonctions
%type <param> liste_parms l_parms parm

%left C_PLUS C_MINUS
%left C_MULT C_DIV
%left LEFT_SHIFT RIGHT_SHIFT
%left C_BIN_OR C_BIN_AND
%left LOGICAL_AND LOGICAL_OR
%nonassoc UNARY_MINUS
%nonassoc THEN
%nonassoc C_ELSE

%start programme

%%
programme : liste_declarations liste_fonctions { root = $2; }

liste_declarations : liste_declarations declaration
		    		|

liste_fonctions : fonction liste_fonctions { $$ = add_func($1, $2); }
		| fonction { $$ = add_func($1, NULL); }

declaration	: type liste_declarateurs ';'

liste_declarateurs	: liste_declarateurs ',' declarateur
					|	declarateur

declarateur : identificateur 
	    | identificateur dec_tab

dec_tab : '[' constante ']' dec_tab
		| '[' constante ']'

fonction : type identificateur  '(' liste_parms  ')'  bloc { char* s = NULL;
															 asprintf(&s, "[label=\"%s, %s\" shape=invtrapezium color=blue]", $2, $1);
															 $$ = create_node( s);
															 $$->child = $6;

															 function* f = add_function(create_function(strcmp($1, "int") == 0? INT : VOID, $2, $4), all_functions);
															 f->clojure = head_scope(scopes); } 
	    | C_EXTERN type identificateur  '(' liste_parms  ')' ';' {
			$$ = NULL;
			all_functions = add_function(create_function(strcmp($2, "int") == 0? INT : VOID, $3, $5), all_functions);
}

type :  C_VOID { $$ = "void"; }
		| C_INT { $$ = "int"; }

liste_parms : 	l_parms { $$ = $1; }
				| {$$ = NULL;}

l_parms : parm {$$ = add_param($1, NULL);}
		| parm ',' l_parms {$$ = add_param($1, $3);}

parm : C_INT identificateur { $$ = create_param(INT, $2); }

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
	    | C_IF  '(' condition  ')' instruction C_ELSE instruction {
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
	$$->child = $3;
}

saut : C_BREAK ';' { $$ = create_node("[label=\"BREAK\" shape=box]"); }
	| C_RETURN ';' { $$ = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); }
	| C_RETURN expression ';' { $$ = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); $$->child = $2; }

affectation : variable '=' expression { $$ = create_node("[label=\":=\"]"); $$->child = $1; $$->child->sibling = $3; }

bloc :  '{' {scopes = push_scope(init_scope(), scopes);} liste_declarations liste_instructions '}' { $$ = create_node("[label=\"BLOC\"]"); $$->child = $4; scopes = pop_scope(scopes) }

appel : identificateur '(' liste_expressions ')' ';' {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", $1);
	$$ = create_node(s);
	$$->child = $3;

	if (search_function($1, all_functions) == NULL) {
		char* s = NULL;
		asprintf(&s, "function : %s is not defined.\n", $1);
		yyerror(s);
	}
}

variable : 	identificateur {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", $1);
	$$ = create_node(s);
}
	|	identificateur var_tab {
		$$ = create_node("[label=\"TAB\"]");
		char* s = NULL;
		asprintf(&s, "[label=\"%s\" shape=septagon]", $1);
		$$->child = create_node(s);
		$$->child->sibling = $2;
}

var_tab	: '[' expression ']' var_tab { $2->sibling = $4; $$ = $2; }
		| '[' expression ']' { $$ = $2; }


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
		// print_functions(all_functions);
	} else {
		free_all_nodes(root);
	}
}

int yyerror(char* s) {
	fprintf(stderr, "%s", s);
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

void free_all_nodes(func_list* root) {
	func_list* explore = root;
	while (explore != NULL) {
		free_node(explore->current);
		explore = explore->next;
	}
}

func_list* add_func(node_dot* node, func_list* prevlist) {
	func_list* newfunclist = (func_list*) malloc(sizeof(func_list));
	newfunclist->current = node;
	newfunclist->next = prevlist;
	return newfunclist;
};


param* create_param(types type, char* name) {
	param* p = (param*) malloc(sizeof(param));
	p->type = type;
	p->name = name;
	p->next = NULL;
	return p;
};

param* add_param(param* first, param* rest) {
	first->next = rest;
	return first;
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

function* create_function(types type, char* name, param* pars) {
	function* f = (function*) malloc(sizeof(function));
	f->type = type;
	f->name = strdup(name);	
	f->params = pars;
	return f;
}

functions* add_function(function* func, functions* func_list) {
	functions* newfunclist = (functions*) malloc(sizeof(functions));
	newfunclist->f = func;
	newfunclist->next = func_list;
	return newfunclist;
}

function* search_function(char* name, functions* func_list) {
	for(function* f = func_list->f; f != NULL && func_list->next != NULL; f = func_list->next->f) {
		if (strcmp(name, f->name) == 0) return f;
	}
	return NULL;
}

variable* create_variable(types type, char* name, int value) {
	variable* var = (variable*) malloc(sizeof(variable));
	var->type = type;
	var->name = strdup(name);
	var->value = value;
	return var;
}

scope* add_variable(variable* var, scope* scope) {
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

scope* init_scope() {
	scope* s = (scope*) malloc(sizeof(scope));
	s->var = NULL;
	s->next = NULL;
	return s;
}

scope* push_scope(scope* to_push, scope* scopes) {
	to_push->next = scopes;
	return to_push;
}

scope* pop_scope(scope* scopes) {
	scope* s = scopes->next;
	scopes->next = NULL;
	return s;
}

scope* head_scope(scope* scopes) {
	scope* s = scopes;
	scopes->next = NULL;
	return s;
}

void print_functions(functions* fs) {
	functions* explore = fs;
	while (explore != NULL) {
		print_function(explore->f);
		explore = explore->next;
	}
}

void print_function(function* f) {
	fprintf(stdout, "%s (", f->name);
	for(param* p = f->params; p != NULL; p = p->next) {
		fprintf(stdout, " %s ", p->name);
	}
	fprintf(stdout, ");\n");
}