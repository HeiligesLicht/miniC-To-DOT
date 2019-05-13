#define TRUE 0
#define FALSE 1
/*
typedef struct _program {
	char* name;
	int value;
	struct _node_dot *code;
	struct _func_list *func_dot;
	struct _param *param;
	struct _dim *dim;
} program;
*/

/* DOT parsing related */

typedef struct _node_dot {
	int id;
	char *label;
	struct _node_dot *child, *sibling;
} node_dot;

typedef struct _func_list {
	node_dot *current;
	struct _func_list *next;
} func_list;

node_dot* create_node(char* label);
void free_node(node_dot* root);
void free_all_nodes(func_list* root);
void print_graph(node_dot* root);
void print_compilation(func_list* root);
func_list* add_func(node_dot* node, func_list* list);

/* error-check related */

typedef enum types {INT, VOID} types;

/* FUNCTIONS */

typedef struct _param {
	types type;
	char* name;
	struct _param *next;
} param;

typedef struct _function {
	types type;
	char* name;
	int value;
	struct _param *params;
	struct _scope *clojure;
} function;

typedef struct _functions {
	function* f;
	struct _functions *next;
} functions;


/* VARIABLES */


typedef struct _dim {
	int size;
	struct _dim *next;
} dim;

typedef struct _variable {
	types type;
	char* name;
	dim* dim;
	int value;
	int is_defined;
	struct _variable *next;
} variable;

typedef struct _scope {
	struct _variable* var;
	struct _scope *next;
} scope;

param* create_param(types type, char* name);
param* add_param(param* first, param* rest);

function* create_function(types type, char* name, param* pars);
functions* add_function(function* func, functions* func_list);
function* search_function(char* name, functions* func_list);
void print_function(function* f);
void print_functions(functions* fs);
void print_all_functions_scopes(functions* fs);

variable* create_variable(types type, char* name, int is_defined, char* value);
scope* add_variable(variable* var, scope* scope);
variable* search_variable(char* name, scope* scope);
dim* add_dim(dim* first, dim* rest);
dim* create_dim(int size);
void print_variable(variable* var);
void print_all_variables(variable* var);

scope* init_scope();
scope* push_scope(scope* to_push, scope* scopes);
scope* pop_scope(scope* scopes);
scope* head_scope(scope* scopes);
void print_scope(function* f);
void print_global_scope(scope* scope);