/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 20 "yacc.y" /* yacc.c:1909  */

	char* name;
	node_dot* node;
	func_list* func_dot;
	param* param;
	dim* dim;

#line 132 "y.tab.h" /* yacc.c:1909  */
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
