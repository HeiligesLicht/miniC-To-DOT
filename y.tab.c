/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

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
scope* global_scope;

int current_scope = 0; // 0 is global scope, 1 is function scope.


#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    C_INT = 258,
    C_VOID = 259,
    C_IF = 260,
    C_ELSE = 261,
    C_SWITCH = 262,
    C_CASE = 263,
    C_BREAK = 264,
    C_EXTERN = 265,
    C_DEFAULT = 266,
    C_FOR = 267,
    C_WHILE = 268,
    C_RETURN = 269,
    EQUALS = 270,
    GTE = 271,
    LTE = 272,
    NOT_EQUALS = 273,
    LEFT_SHIFT = 274,
    RIGHT_SHIFT = 275,
    LOGICAL_AND = 276,
    LOGICAL_OR = 277,
    C_PLUS = 278,
    C_MINUS = 279,
    C_MULT = 280,
    C_DIV = 281,
    C_BIN_AND = 282,
    C_BIN_OR = 283,
    C_NOT = 284,
    C_LT = 285,
    C_GT = 286,
    identificateur = 287,
    constante = 288,
    UNARY_MINUS = 289,
    THEN = 290
  };
#endif
/* Tokens.  */
#define C_INT 258
#define C_VOID 259
#define C_IF 260
#define C_ELSE 261
#define C_SWITCH 262
#define C_CASE 263
#define C_BREAK 264
#define C_EXTERN 265
#define C_DEFAULT 266
#define C_FOR 267
#define C_WHILE 268
#define C_RETURN 269
#define EQUALS 270
#define GTE 271
#define LTE 272
#define NOT_EQUALS 273
#define LEFT_SHIFT 274
#define RIGHT_SHIFT 275
#define LOGICAL_AND 276
#define LOGICAL_OR 277
#define C_PLUS 278
#define C_MINUS 279
#define C_MULT 280
#define C_DIV 281
#define C_BIN_AND 282
#define C_BIN_OR 283
#define C_NOT 284
#define C_LT 285
#define C_GT 286
#define identificateur 287
#define constante 288
#define UNARY_MINUS 289
#define THEN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "yacc.y" /* yacc.c:355  */

	char* name;
	node_dot* node;
	func_list* func_dot;
	param* param;
	dim* dim;

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    36,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    52,    53,    55,    56,    58,    60,    61,
      63,    69,    77,    78,    80,    80,    91,    96,    97,    99,
     100,   102,   103,   105,   107,   109,   111,   112,   113,   114,
     115,   116,   118,   124,   128,   133,   139,   144,   151,   158,
     159,   160,   162,   167,   167,   169,   182,   193,   201,   202,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   220,   221,   228,   229,   231,   232,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "C_INT", "C_VOID", "C_IF", "C_ELSE",
  "C_SWITCH", "C_CASE", "C_BREAK", "C_EXTERN", "C_DEFAULT", "C_FOR",
  "C_WHILE", "C_RETURN", "EQUALS", "GTE", "LTE", "NOT_EQUALS",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LOGICAL_AND", "LOGICAL_OR", "C_PLUS",
  "C_MINUS", "C_MULT", "C_DIV", "C_BIN_AND", "C_BIN_OR", "C_NOT", "C_LT",
  "C_GT", "identificateur", "constante", "UNARY_MINUS", "THEN", "';'",
  "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "':'", "'='", "$accept",
  "programme", "liste_declarations", "liste_fonctions", "declaration",
  "liste_declarateurs", "declarateur", "dec_tab", "fonction", "$@1",
  "type", "liste_parms", "l_parms", "parm", "liste_instructions",
  "instruction", "iteration", "selection", "switch_body", "saut",
  "affectation", "bloc", "$@2", "appel", "variable", "var_tab",
  "expression", "liste_expressions", "l_expressions", "condition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    59,    44,    91,    93,
      40,    41,   123,   125,    58,    61
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -113,    13,   101,  -113,  -113,  -113,    57,  -113,  -113,   101,
     -15,    -7,  -113,    52,    17,    35,  -113,   -11,    63,    59,
      94,  -113,  -113,    80,    94,    75,    83,    65,  -113,    92,
      79,  -113,    95,    79,  -113,  -113,    94,    84,  -113,    97,
    -113,  -113,  -113,  -113,  -113,    27,   100,   102,   105,   103,
     104,   191,    18,    80,   114,    86,  -113,  -113,  -113,   111,
    -113,  -113,   113,   196,   202,  -113,   138,   196,   202,    30,
    -113,  -113,   202,  -113,   172,   202,   202,  -113,  -113,  -113,
    -113,   202,   131,   196,   186,    -3,    55,   145,   146,    67,
    -113,   202,   126,   202,   202,   202,   202,   202,   202,   202,
     202,  -113,   136,   153,   133,  -113,   220,   196,   107,   144,
     202,   202,   202,   202,   202,   202,   196,   196,    86,   142,
     196,    86,   148,  -113,    74,    74,   230,   230,    -5,    -5,
    -113,  -113,   145,   202,   150,   147,  -113,   220,   220,   220,
     220,   220,   220,  -113,  -113,   181,    -4,   -10,  -113,  -113,
    -113,  -113,  -113,  -113,    86,   160,   163,   151,   138,  -113,
     174,    86,  -113,   178,    86,  -113,    86,    -4,  -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    18,    17,     0,     2,     3,     6,
       0,     0,     5,     0,    10,     0,     9,     0,     0,     0,
      20,    11,     7,     0,    20,     0,     0,     0,    19,    21,
      10,     8,     0,    13,    23,    14,     0,     0,    12,     0,
      22,    16,    43,    15,     4,    25,     0,     0,     0,     0,
       0,     0,    46,     0,     0,    25,    26,    27,    28,     0,
      30,    31,     0,     0,     0,    39,     0,     0,     0,    46,
      60,    40,     0,    61,     0,     0,    64,    47,    44,    24,
      29,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      59,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    65,     0,    63,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    55,    56,    51,    52,    53,    54,
      57,    58,    49,     0,     0,     0,    68,    75,    73,    74,
      76,    71,    72,    69,    70,    34,     0,     0,    33,    62,
      48,    66,    45,    67,     0,     0,     0,     0,     0,    35,
       0,    25,    36,     0,    25,    38,     0,     0,    32,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,   177,   213,  -113,  -113,   207,   199,  -113,  -113,
      -1,   209,   201,  -113,   -54,  -112,  -113,  -113,    71,  -113,
     -64,   212,  -113,  -113,   -45,   109,   -48,   161,   120,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,    15,    16,    21,     9,    39,
      10,    27,    28,    29,    54,    55,    56,    57,   157,    58,
      59,    60,    44,    61,    73,    77,    84,   104,   105,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    79,    88,    74,   155,    11,   145,   156,    13,   148,
      62,   116,   117,     3,    93,    94,    86,    14,   116,   117,
      90,    62,    99,   100,    92,    17,   158,   102,   103,    24,
       4,     5,    46,   106,    47,   108,    48,    89,   118,    49,
      50,    51,   159,   103,    53,   124,   125,   126,   127,   128,
     129,   130,   131,   109,   168,    19,    75,    20,    76,    52,
       4,     5,   137,   138,   139,   140,   141,   142,    75,    42,
      91,    22,    23,    62,    93,    94,    62,   135,    95,    96,
      97,    98,    99,   100,    18,   103,   143,   144,   116,   117,
     147,    46,    25,    47,   163,    48,   119,    26,    49,    50,
      51,    99,   100,    20,     4,     5,    35,   165,   121,    62,
     167,     6,    30,    62,    33,    34,    62,    19,    52,    62,
      41,    62,   110,   111,   112,   113,    93,    94,    42,    36,
      95,    96,    97,    98,    99,   100,    37,   114,   115,    42,
      63,    65,    64,    66,    67,    93,    94,    80,   123,    95,
      96,    97,    98,    99,   100,    93,    94,    78,    81,    95,
      96,    97,    98,    99,   100,   116,   117,   123,   116,   117,
      87,   107,    93,    94,   134,   132,    95,    96,    97,    98,
      99,   100,   120,    75,   146,   136,   152,   154,   153,   149,
     133,    93,    94,   160,   162,    95,    96,    97,    98,    99,
     100,   110,   111,   112,   113,    93,    94,   161,   101,    95,
      96,    97,    98,    99,   100,    68,   114,   115,   164,   166,
      68,    45,    12,    69,    70,    82,    68,    71,    69,    70,
      31,    72,    38,    32,    69,    70,    83,    40,   169,    93,
      94,   150,    72,    95,    96,    97,    98,    99,   100,    93,
      94,    43,   122,   151,     0,    97,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
      45,    55,    66,    51,     8,     6,   118,    11,     9,   121,
      55,    21,    22,     0,    19,    20,    64,    32,    21,    22,
      68,    66,    27,    28,    72,    32,    36,    75,    76,    40,
       3,     4,     5,    81,     7,    83,     9,    67,    41,    12,
      13,    14,   154,    91,    45,    93,    94,    95,    96,    97,
      98,    99,   100,    83,   166,    38,    38,    40,    40,    32,
       3,     4,   110,   111,   112,   113,   114,   115,    38,    42,
      40,    36,    37,   118,    19,    20,   121,   107,    23,    24,
      25,    26,    27,    28,    32,   133,   116,   117,    21,    22,
     120,     5,    33,     7,   158,     9,    41,     3,    12,    13,
      14,    27,    28,    40,     3,     4,    41,   161,    41,   154,
     164,    10,    32,   158,    39,    32,   161,    38,    32,   164,
      36,   166,    15,    16,    17,    18,    19,    20,    42,    37,
      23,    24,    25,    26,    27,    28,    41,    30,    31,    42,
      40,    36,    40,    40,    40,    19,    20,    36,    41,    23,
      24,    25,    26,    27,    28,    19,    20,    43,    45,    23,
      24,    25,    26,    27,    28,    21,    22,    41,    21,    22,
      32,    40,    19,    20,    41,    39,    23,    24,    25,    26,
      27,    28,    36,    38,    42,    41,    36,     6,    41,    41,
      37,    19,    20,    33,    43,    23,    24,    25,    26,    27,
      28,    15,    16,    17,    18,    19,    20,    44,    36,    23,
      24,    25,    26,    27,    28,    24,    30,    31,    44,    41,
      24,    44,     9,    32,    33,    29,    24,    36,    32,    33,
      23,    40,    33,    24,    32,    33,    40,    36,   167,    19,
      20,   132,    40,    23,    24,    25,    26,    27,    28,    19,
      20,    39,    91,   133,    -1,    25,    26,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    48,     0,     3,     4,    10,    49,    50,    54,
      56,    56,    49,    56,    32,    51,    52,    32,    32,    38,
      40,    53,    36,    37,    40,    33,     3,    57,    58,    59,
      32,    52,    57,    39,    32,    41,    37,    41,    53,    55,
      58,    36,    42,    67,    68,    48,     5,     7,     9,    12,
      13,    14,    32,    56,    60,    61,    62,    63,    65,    66,
      67,    69,    70,    40,    40,    36,    40,    40,    24,    32,
      33,    36,    40,    70,    72,    38,    40,    71,    43,    60,
      36,    45,    29,    40,    72,    75,    72,    32,    66,    75,
      72,    40,    72,    19,    20,    23,    24,    25,    26,    27,
      28,    36,    72,    72,    73,    74,    72,    40,    72,    75,
      15,    16,    17,    18,    30,    31,    21,    22,    41,    41,
      36,    41,    73,    41,    72,    72,    72,    72,    72,    72,
      72,    72,    39,    37,    41,    75,    41,    72,    72,    72,
      72,    72,    72,    75,    75,    61,    42,    75,    61,    41,
      71,    74,    36,    41,     6,     8,    11,    64,    36,    61,
      33,    44,    43,    66,    44,    60,    41,    60,    61,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      52,    52,    53,    53,    55,    54,    54,    56,    56,    57,
      57,    58,    58,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    65,    66,    68,    67,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     1,     3,     3,     1,
       1,     2,     4,     3,     0,     7,     7,     1,     1,     1,
       0,     1,     3,     2,     2,     0,     1,     1,     1,     2,
       1,     1,     9,     5,     5,     7,     7,     5,     3,     2,
       2,     3,     3,     0,     5,     5,     1,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     4,     1,     0,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 50 "yacc.y" /* yacc.c:1646  */
    { root = (yyvsp[0].func_dot); }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 55 "yacc.y" /* yacc.c:1646  */
    { (yyval.func_dot) = add_func((yyvsp[-1].node), (yyvsp[0].func_dot)); }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 56 "yacc.y" /* yacc.c:1646  */
    { (yyval.func_dot) = add_func((yyvsp[0].node), NULL); }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "yacc.y" /* yacc.c:1646  */
    { 	variable* var = create_variable(INT, strdup((yyvsp[0].name)), FALSE, NULL);
								if (current_scope == 0)
									global_scope = add_variable(var, global_scope);
								else
									if (all_functions != NULL)
										all_functions->f->clojure = add_variable(var, all_functions->f->clojure); }
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 69 "yacc.y" /* yacc.c:1646  */
    {	variable* var = create_variable(INT, (yyvsp[-1].name), FALSE, NULL);
									var->dim = (yyvsp[0].dim);
									if (current_scope == 0)
										global_scope = add_variable(var, global_scope);
									else
										if (all_functions != NULL)
											all_functions->f->clojure = add_variable(var, all_functions->f->clojure); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "yacc.y" /* yacc.c:1646  */
    { (yyval.dim) = add_dim(create_dim(atoi((yyvsp[-2].name))), (yyvsp[0].dim));}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "yacc.y" /* yacc.c:1646  */
    { (yyval.dim) = create_dim(atoi((yyvsp[-1].name))); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 80 "yacc.y" /* yacc.c:1646  */
    {
	current_scope = 1;
	function* f = create_function(strcmp((yyvsp[-4].name), "int") == 0? INT : VOID, (yyvsp[-3].name), (yyvsp[-1].param));
	f->clojure = push_scope(head_scope(global_scope), f->clojure);
	all_functions = add_function(f, all_functions);
}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 85 "yacc.y" /* yacc.c:1646  */
    { 
	char* s = NULL;
	 asprintf(&s, "[label=\"%s, %s\" shape=invtrapezium color=blue]", (yyvsp[-5].name), (yyvsp[-6].name));
	 (yyval.node) = create_node( s);
	 (yyval.node)->child = (yyvsp[0].node);
	 current_scope = 0; }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "yacc.y" /* yacc.c:1646  */
    {
			(yyval.node) = NULL;
			all_functions = add_function(create_function(strcmp((yyvsp[-5].name), "int") == 0? INT : VOID, (yyvsp[-4].name), (yyvsp[-2].param)), all_functions);
}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "yacc.y" /* yacc.c:1646  */
    { (yyval.name) = "void"; }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "yacc.y" /* yacc.c:1646  */
    { (yyval.name) = "int"; }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "yacc.y" /* yacc.c:1646  */
    { (yyval.param) = (yyvsp[0].param); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "yacc.y" /* yacc.c:1646  */
    {(yyval.param) = NULL;}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 102 "yacc.y" /* yacc.c:1646  */
    {(yyval.param) = add_param((yyvsp[0].param), NULL);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "yacc.y" /* yacc.c:1646  */
    {(yyval.param) = add_param((yyvsp[-2].param), (yyvsp[0].param));}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "yacc.y" /* yacc.c:1646  */
    { (yyval.param) = create_param(INT, (yyvsp[0].name)); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node);
													  (yyval.node)->sibling = (yyvsp[0].node);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"FOR\"]");
			 (yyvsp[-6].node)->sibling = (yyvsp[-4].node);
			 (yyvsp[-4].node)->sibling = (yyvsp[-2].node);
			 (yyvsp[-2].node)->sibling = (yyvsp[0].node);
			 (yyval.node)->child = (yyvsp[-6].node);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 124 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"WHILE\"]");
												  (yyvsp[-2].node)->sibling = (yyvsp[0].node);
												  (yyval.node)->child = (yyvsp[-2].node);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 128 "yacc.y" /* yacc.c:1646  */
    {
	(yyval.node) = create_node("[label=\"IF\" shape=diamond]");
	(yyvsp[-2].node)->sibling = (yyvsp[0].node);
	(yyval.node)->child = (yyvsp[-2].node);
}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "yacc.y" /* yacc.c:1646  */
    {
	(yyval.node) = create_node("[label=\"IF\" shape=diamond]");
	(yyvsp[-4].node)->sibling = (yyvsp[-2].node);
	(yyvsp[-2].node)->sibling = (yyvsp[0].node);
	(yyval.node)->child = (yyvsp[-4].node);
}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "yacc.y" /* yacc.c:1646  */
    {
	(yyval.node) = create_node("[label=\"SWITCH\"]");
	(yyval.node)->child = (yyvsp[-1].node);
}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 144 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"CASE %s\"]", (yyvsp[-3].name));
	(yyval.node) = create_node(s);
	(yyval.node)->sibling = (yyvsp[0].node);
	(yyval.node)->child = (yyvsp[-1].node);
}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"DEFAULT\"]");
	(yyval.node) = create_node(s);
	(yyval.node)->child = (yyvsp[0].node);
}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 158 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = create_node("[label=\"BREAK\" shape=box]"); }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 159 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 160 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = create_node("[label=\"RETURN\" shape=trapezium color=blue]"); (yyval.node)->child = (yyvsp[-1].node); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 162 "yacc.y" /* yacc.c:1646  */
    { 
	(yyval.node) = create_node("[label=\":=\"]");
	(yyval.node)->child = (yyvsp[-2].node);
	(yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "yacc.y" /* yacc.c:1646  */
    {if (all_functions != NULL) all_functions->f->clojure = push_scope(init_scope(), all_functions->f->clojure);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 167 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = create_node("[label=\"BLOC\"]"); (yyval.node)->child = (yyvsp[-1].node); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", (yyvsp[-4].name));
	(yyval.node) = create_node(s);
	(yyval.node)->child = (yyvsp[-2].node);

	if (search_function((yyvsp[-4].name), all_functions) == NULL) {
		char* s = NULL;
		asprintf(&s, "function : %s is not defined.\n", (yyvsp[-4].name));
		yyerror(s);
	}
}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\" shape=septagon]", (yyvsp[0].name));
	(yyval.node) = create_node(s);

	if (search_variable((yyvsp[0].name), (current_scope == 0)? global_scope : all_functions->f->clojure) == NULL) {
		char* s = NULL;
		asprintf(&s, "variable : %s is not defined.\n", (yyvsp[0].name));
		yyerror(s);
	}
}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 193 "yacc.y" /* yacc.c:1646  */
    {
		(yyval.node) = create_node("[label=\"TAB\"]");
		char* s = NULL;
		asprintf(&s, "[label=\"%s\" shape=septagon]", (yyvsp[-1].name));
		(yyval.node)->child = create_node(s);
		(yyval.node)->child->sibling = (yyvsp[0].node);
}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 201 "yacc.y" /* yacc.c:1646  */
    { (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node) = (yyvsp[-2].node); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 202 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 205 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 206 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"+\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 207 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"-\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 208 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"*\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 209 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"/\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 210 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"<<\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\">>\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 212 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"&\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 213 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"|\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 214 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"-\"]"); (yyval.node)->child = (yyvsp[0].node);}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 215 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\"]", (yyvsp[0].name));
	(yyval.node) = create_node(s);
}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "yacc.y" /* yacc.c:1646  */
    {
	char* s = NULL;
	asprintf(&s, "[label=\"%s\"]", (yyvsp[-3].name));
	(yyval.node) = create_node(s);
	(yyval.node)->child = (yyvsp[-1].node);
}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 228 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 229 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 231 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 232 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); (yyval.node)->sibling = (yyvsp[0].node);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 235 "yacc.y" /* yacc.c:1646  */
    { (yyval.node) = create_node("[label=\"!\"]"); (yyval.node)->child = (yyvsp[-1].node); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 236 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 237 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"&&\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node); }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 238 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"||\"]"); (yyval.node)->child = (yyvsp[-2].node); (yyval.node)->child->sibling = (yyvsp[0].node); }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 239 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"<\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 240 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\">\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 241 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\">=\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 242 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"<=\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 243 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"==\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 244 "yacc.y" /* yacc.c:1646  */
    {(yyval.node) = create_node("[label=\"!=\"]"); (yyvsp[-2].node)->sibling = (yyvsp[0].node); (yyval.node)->child = (yyvsp[-2].node);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2047 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 246 "yacc.y" /* yacc.c:1906  */


int SEQ = 0;


int main() {
	global_scope = init_scope();
	if (yyparse() == 0) {
		// print_compilation(root);	
		print_functions(all_functions);
		print_all_functions_scopes(all_functions);
		print_global_scope(global_scope);
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
	for(function* f = func_list->f; f != NULL || func_list->next != NULL; f = func_list->next->f) {
		if (strcmp(name, f->name) == 0) return f;
	}
	return NULL;
}

variable* create_variable(types type, char* name, int is_defined, char* value) {
	variable* var = (variable*) malloc(sizeof(variable));
	var->type = type;
	var->name = name;
	if (value != NULL)
		var->value = atoi(strdup(value));
	var->is_defined = is_defined;
	var->dim = NULL;
	return var;
}

scope* add_variable(variable* var, scope* scope) {
	if (scope->var == NULL) {
		scope->var = var;
	} else {
		scope->var->next = var;
	}
	return scope;
}

variable* search_variable(char* name, scope* scopes) {
	for(scope* s = scopes; s != NULL; s = s->next)
		for(variable* v = s->var; v != NULL; v = v->next)
			if (strcmp(name, v->name) == 0) return v;
	return NULL;
}

dim* create_dim(int size) {
	dim* d = (dim*) malloc(sizeof(dim));
	d->size = size;
	d->next = NULL;
	return d;
}

dim* add_dim(dim* first, dim* rest) {
	first->next = rest;
	return first;
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

void print_variable(variable* var) {
	fprintf(stdout, "VARIABLE : %s, %s, %s, %d\n", 
	var->name, 
	(var->is_defined == FALSE)? "not assigned" : "assigned",
	(var->type == INT)? "int" : "not an int",
	(var->value));
	if (var->dim != NULL) {
		fprintf(stdout, "DIMENSIONS: ");
		for(dim* d = var->dim; d != NULL; d = d->next) {
			fprintf(stdout, "[%d]", d->size);
		}
		fprintf(stdout, "\n");
	}
}

void print_all_variables(variable* var) {
	for(variable* v = var; v != NULL; v = v->next) {
		print_variable(v);
	}
}

void print_all_functions_scopes(functions* fs) {
	functions* explore = fs;
	while (explore != NULL) {
		print_scope(explore->f);
		explore = explore->next;
	}
}

void print_scope(function* f) {
	for(scope* s = f->clojure; s != NULL; s = s->next) {
		fprintf(stdout, "------------ BEGIN SCOPE (%s) ------------\n", f->name);
		print_all_variables(s->var);
		fprintf(stdout, "------------- END SCOPE (%s) -------------\n", f->name);
	}
}

void print_global_scope(scope* scopes) {
	fprintf(stdout, "------------ BEGIN GLOBAL SCOPE ------------\n");
	for(scope* s = scopes; s != NULL; s = s->next) {
		print_all_variables(s->var);
	}
	fprintf(stdout, "------------- END GLOBAL SCOPE -------------\n");
}
