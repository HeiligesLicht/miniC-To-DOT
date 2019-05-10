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
void print_graph(node_dot* root);
void print_compilation(func_list* root);
func_list* add_func(node_dot* node, func_list* list);

/* error-check related */

typedef enum ftypes {INT, VOID} func_type;
typedef enum dtypes {INT} dec_type;

/* FUNCTIONS */

typedef struct _param {
	variable* var;
	char* name;
	struct _param *next;
} param;

typedef struct _function {
	func_type type;
	char* name;
	int value;
	struct _param *params;
} function;

typedef struct _functions {
	function f;
	struct _function *next;
} functions;


/* VARIABLES */

typedef struct _variable {
	dec_type type;
	char* name;
	struct _variable *next;
} variable;

typedef struct _scope {
	struct _variable* var;
	struct _scope *next;
} scope;

function* create_function(func_type type, char* name, param* pars);
function* add_function(function* func, functions* func_list);
function* search_function(char* name, functions* func_list);

variable* create_variable(dec_type type, char* name, int value);
variable* add_variable(variable* var, scope* scope);
variable* search_variable(char* name, scope* scope);

scope* init_scope();

assert_int(variable* var);
assert_int(function* f);