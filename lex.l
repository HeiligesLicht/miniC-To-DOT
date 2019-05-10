%{
#define _GNU_SOURCE
#include "dec.h"
#include "y.tab.h"
#include <stdio.h>

%}

%option yylineno

D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*

%%
"break"                 {  return C_BREAK; }
"case"                  {  return C_CASE; }
"default"               {  return C_DEFAULT; }
"else"                  {  return C_ELSE; }
"extern"                {  return C_EXTERN; }
"for"                   {  return C_FOR; }
"if"                    {  return C_IF; }
"int"                   {  return C_INT; }
"return"                {  return C_RETURN; }
"switch"                {  return C_SWITCH; }
"void"                  {  return C_VOID; }
"while"                 {  return C_WHILE; }

{L}({L}|{D})*           { yylval.name = strdup(yytext); return identificateur; }

{D}+{IS}?               { yylval.name = strdup(yytext); return constante; } 

">>"                    {  return RIGHT_SHIFT; }
"<<"                    {  return LEFT_SHIFT; }
"&&"                    {  return LOGICAL_AND; }
"||"                    {  return LOGICAL_OR; }
"<="                    {  return LTE; }
">="                    {  return GTE; }
"=="                    {  return EQUALS; }
"!="                    {  return NOT_EQUALS; }

"+"                     {  return C_PLUS; }
"-"                     {  return C_MINUS; }
"*"                     {  return C_MULT; }
"/"                     {  return C_DIV; }
"&"                     {  return C_BIN_AND; }
"|"                     {  return C_BIN_OR; }
"!"                     {  return C_NOT; }
"<"                     {  return C_LT; }
">"                     {  return C_GT; }

[ \t\v\n\f]             ;
"/*"((\*+[^/*])|([^*]))*\**"*/"                ;
.                       { return yytext[0]; }
%%

