flex lex.l && yacc -d -v yacc.y && gcc -lfl lex.yy.c y.tab.c -o mongcc.out
rm -rf compiled