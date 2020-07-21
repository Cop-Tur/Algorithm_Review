%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "parser.tab.h"

int yylineno;
%}

%option noyywrap

%%
"if"                          { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return If; }
"else"                        { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Else; }
"while"                       { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return While; }
"extends"                     { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Extends; }
"class"                       { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Class; }
"public"                      { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Public; }
"static"                      { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Static; }
"void"                        { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Void; }
"main"                        { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Main; }
"int"                         { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Integer; }
"boolean"                     { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Boolean; }
"String"                      { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return String; }
"true"                        { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return True; }
"false"                       { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return False; }
"this"                        { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return This; }
"new"                         { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return New; }
"System.out.println"          { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Println; }
"return"                      { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Return; }
"super"						  { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return Super; }
[a-zA-Z]([a-zA-Z]|[0-9]|"_")* { 
                                char *val = (char*)malloc(strlen("ID: ")+strlen(yytext)+10);
                                sprintf(val,"ID: %s", yytext);
                                yylval.node = new_node(val, 0);
                                yylval.node->line = yylineno;
                                return Id;
                              }
[0-9]([0-9])*                 { 
                                char *val = (char*)malloc(strlen("Int: ")+strlen(yytext)+10);
                                sprintf(val, "Int: %s", yytext);
                                yylval.node = new_node(val, 0); 
                                yylval.node->line = yylineno;
                                return IntegerIteral;
                              }
\"[a-zA-Z]*\"				  {
								char *val = (char*)malloc(strlen("String: ")+strlen(yytext)+10);
                                sprintf(val, "String: %s", yytext);
                                yylval.node = new_node(val, 0); 
                                yylval.node->line = yylineno;
                                return Char;
							  }

"&&"  { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return And; }
"."   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '.'; }
"="   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '='; }
"+"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '+'; }
"-"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '-'; }
"*"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '*'; }
"<"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '<'; }
">"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '>'; }
"!"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '!'; }
"?"	  { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '?'; }
":"	  { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return ':'; }

"{"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '{'; }
"}"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '}'; }
"["   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '['; }
"]"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return ']'; }
"("   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return '('; }
")"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return ')'; }
";"   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return ';'; }
","   { yylval.node = new_node(yytext, 0); yylval.node->line = yylineno; return ','; }

"//".*"\n"         { yylineno++; }
"/*"(.|"\n")*"*\\" { yylineno++; }
" "|"\t"|"\r"      { /*do nothing*/ }
"\n"               { yylineno++; }
.                  { fprintf(stderr, "Unkown word."); }

%%
