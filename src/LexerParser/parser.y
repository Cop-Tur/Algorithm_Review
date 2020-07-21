%{
#include <stdio.h>
#include "node.h"

extern int yylineno;

int yylex();
void yyerror(char *s);
%}

%union {
    struct Node* node;
    double d;
}

%token <node> ';' ',' '}' ']' '(' ')' '[' '{' '>' '<' '?' ':'
%token <node> "&&" '.' '=' '+' '-' '*' '!'
%token <node> Super Class Public Static Void Main If Else While Extends
%token <node> Integer Boolean String True False Id IntegerIteral Char
%token <node> And This New Println Return  

%type <node> Start PublicClass ExtendStatement Identifier Type
%type <node> OtherClass ClassDefinition 
%type <node> VarDefinitions VarDefinition
%type <node> MethodDeclarations MethodDeclaration
%type <node> Params ParamList ParamDefinition
%type <node> Statements StatementList Statement
%type <node> Expressions Expression

%left '[' '{' '(' ']' '}' ')'
%right '=' ':' '?'
%left '.'
%left '*'
%left '+' '-'
%left And '<' '>'
%right '!'

%start Start

%%
Start
	:	OtherClass PublicClass OtherClass
							{
								$$ = new_node("Start", 3, $1, $2, $3);
								$$->line = yylineno;
								{
									printf("Syntax tree:\n");
									Print($$, 0);
								}
							}

    ;

	
PublicClass
	:	Public Class Identifier ExtendStatement '{' VarDefinitions MethodDeclarations '}'
							{
								$$ = new_node("PublicClass", 8, $1, $2, $3, $4, $5, $6, $7, $8);
								$$->line = yylineno;
							}
	
	|	Public Class Identifier '<' Type ExtendStatement '<' '?' Super Type '>' '>' '{' VarDefinitions MethodDeclarations '}'
							{
								$$ = new_node("PublicClass", 16, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10,
																	$11, $12, $13, $14, $15, $16);
								$$->line = yylineno;
							}
    ;


OtherClass
	:
		 //empty 
		{
			$$ = NULL;
		}
	|   ClassDefinition OtherClass
		{
			$$ = new_node("OtherClass", 2, $1, $2);
			$$->line = yylineno;
		}
    ;

ClassDefinition
	:   Class Identifier ExtendStatement '{' VarDefinitions MethodDeclarations '}'
		{
			$$ = new_node("ClassDefinition", 7, $1, $2, $3, $4,
												 $5, $6, $7);
			$$->line = yylineno;
		}
    ;

ExtendStatement
	:
		/* empty */
		{
			$$ = NULL;
		}
	|   Extends Identifier
		{
			$$ = new_node("ExtendStatement", 2, $1, $2);
			$$->line = yylineno;
		}
    ;

VarDefinitions
	:	/* empty */
		{
			$$ = NULL;
		}
		
	|  VarDefinitions VarDefinition  
		{
			$$ = new_node("VarDefinitions", 2, $1, $2);
			$$->line = yylineno;
		}
    ;

VarDefinition
	:	Type Identifier ';'
		{
			$$ = new_node("VarDefinition", 3, $1, $2, $3);
			$$->line = yylineno;
		}
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	|	Type Identifier '=' Expression ';'
		{
			$$ = new_node("VarDefinition", 5, $1, $2, $3, $4, $5);
			$$->line = yylineno;
		}
    ;

MethodDeclarations
	:	/* empty */
		{
			$$ = NULL;
		}
    
	|   MethodDeclaration MethodDeclarations
		{
			$$ = new_node("MethodDeclarations", 2, $1, $2);
			$$->line = yylineno;
		}
    ;


MethodDeclaration
	:	Public Type Identifier '(' Params ')' '{' VarDefinitions Statements  '}'
								{
									$$ = new_node("MethodDeclaration", 10, $1, $2, $3, $4,
																		   $5, $6, $7,
																		   $8, $9, $10);
									$$->line = yylineno;
								}
	|	Public Identifier '(' Params ')' '{' VarDefinitions Statements  '}'
								{
									$$ = new_node("ConstructionMethod", 9, $1, $2, $3, $4,
																		   $5, $6, $7,
																		   $8, $9);
									$$->line = yylineno;
								}

    |	Public Static Void Main '(' String '[' ']' Identifier ')' '{' Statements '}'
								{//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
									$$ = new_node("Main", 13, $1, $2, $3, $4, $5,
															   $6, $7, $8, $9, $10, $11,
															   $12, $13);
									$$->line = yylineno;
								}
	|  Public Static '<' Type ExtendStatement '<' '?' Super Type '>' '>' Type Identifier '(' Params ')' '{' VarDefinitions Statements  '}'
								{
									$$ = new_node("GenericsMethod", 20, $1, $2, $3, $4,
																		   $5, $6, $7,
																		   $8, $9, $10, $11,
																		   $12, $13, $14, $15, $16, $17, $18, $19, $20 );
									$$->line = yylineno;
								
								}
	;

Params
	:	/* empty */
		{
			$$ = NULL;
		}
    
	|   ParamList
		{
			$$ = new_node("ParamList", 1, $1 );
			$$->line = yylineno;
		}
	;
	
ParamList
	: ParamDefinition
		{
			$$ = new_node("ParamDefinition", 1, $1 );
			$$->line = yylineno;
		}

	| ParamDefinition ',' ParamList
		{
			$$ = new_node("ParamDefinition", 3, $1, $2, $3 );
			$$->line = yylineno;
		}
	;


ParamDefinition
	:	Type Identifier
		{
			$$ = new_node("ParamDefinition", 2, $1, $2);
			$$->line = yylineno;
		}
   /** |	IntegerIteral
		{
			$$ = new_node("Num", 1, $1 );
			$$->line = yylineno;
		}

	|	Identifier
		{
			$$ = new_node("Identifier", 1, $1 );
			$$->line = yylineno;
		} **/
    ;

Statements
	:
		/* empty */
		{
			$$ = NULL;
		}
	|   StatementList
		{
			$$ = new_node("Statements", 1, $1);
			$$->line = yylineno;
		}
    ;

StatementList
	:
		Statement
		{
			$$ = new_node("StatementList", 1, $1);
			$$->line = yylineno;
		}
	|   StatementList Statement
		{
			$$ = new_node("StatementList", 2, $1, $2);
			$$->line = yylineno;
		}
    ;

Type
	:  /* Class*/
		Integer
		{
			$$ = new_node("Type", 1, $1);
			$$->line = yylineno;
		}
	|   Integer '[' ']'
		{
			$$ = new_node("Type", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Boolean
		{
			$$ = new_node("Type", 1, $1);
			$$->line = yylineno;
		}
	|	String
		{
			$$ = new_node("Type", 1, $1);
			$$->line = yylineno;
		}
	|   Identifier
		{
			$$ = new_node("Type", 1, $1);
			$$->line = yylineno;
		}
    ;

Statement
	:
		'{' Statements '}'
		{
			$$ = new_node("Statement", 3, $1, $2, $3);
			$$->line = yylineno;
		}	
	|	Type Identifier '=' New Type '(' Expressions ')' ';'
		{
			$$ = new_node("Statement", 9, $1, $2, $3, $4,
										  $5, $6, $7, $8,
										  $9);
			$$->line = yylineno;
		}
	|   Else Statement 
		{
			$$ = new_node("ElseStatement", 2, $1, $2);
			$$->line = yylineno;
		}
	|   If '(' Expression ')' Statement 
		{
			$$ = new_node("IfStatement", 5, $1, $2, $3, $4,
										  $5);
			$$->line = yylineno;
		}
	|   While '(' Expression ')' Statement
		{
			$$ = new_node("Statement", 5, $1, $2, $3, $4,
										  $5);
			$$->line = yylineno;
		}
	|   Println '(' Expression ')' ';'
		{
			$$ = new_node("Statement", 5, $1, $2, $3, $4,
										  $5);
			$$->line = yylineno;
		}
	|   Identifier '=' Expression ';'
		{
			$$ = new_node("Statement", 4, $1, $2, $3, $4);
			$$->line = yylineno;
		}
	|   Identifier '[' Expression ']' '=' Expression ';'
		{
			$$ = new_node("Statement", 7, $1, $2, $3, $4,
										  $5, $6, $7);
			$$->line = yylineno;
		}
	|   Return Expression ';'
		{
			$$ = new_node("Statement", 2, $1, $2);
			$$->line = yylineno;
		}
	|	This '.' Identifier '=' Identifier ';'
		{
			$$ = new_node("Statement", 6, $1, $2, $3, $4, $5, $6);
			$$->line = yylineno;
		}
    ;

Expressions
	:
		/* empty */
		{
			$$ = NULL;
		}
	|   Expression
		{
			$$ = new_node("Expressions", 1, $1);
			$$->line = yylineno;
		}
    ;


Expression
	:
		Expression And Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Expression '<' Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Expression '>' Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Expression '>' IntegerIteral '?' Expression ':' Expression
		{
			$$ = new_node("'?'Expression", 7, $1, $2, $3, $4, $5, $6, $7);
			$$->line = yylineno;
		}
	|   Expression '+' Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Expression '-' Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Expression '*' Expression
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}

	|   Expression '.' Identifier '(' Expressions ')'
		{
			$$ = new_node("MethodCall", 6, $1, $2, $3,
										   $4, $5, $6);
			$$->line = yylineno;
		}
	|   True
		{
			$$ = new_node("Boolean", 1, $1);
			$$->line = yylineno;
		}
	|   False
		{
			$$ = new_node("Boolean", 1, $1);
			$$->line = yylineno;
		}
	|   Identifier
		{
			$$ = new_node("Expression", 1, $1);
			$$->line = yylineno;
		}
/**	|   Identifier '.' Identifier
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
**/
	|   '!' Expression
		{
			$$ = new_node("Expression", 2, $1, $2);
			$$->line = yylineno;
		}
	|   '(' Expression ')'
		{
			$$ = new_node("Expression", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   IntegerIteral
		{
			$$ = new_node("Num", 1, $1);
			$$->line = yylineno;
		}
	|   IntegerIteral ',' IntegerIteral
		{
			$$ = new_node("Params", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|   Identifier ',' Identifier
		{
			$$ = new_node("Params", 3, $1, $2, $3);
			$$->line = yylineno;
		}
	|	Char
		{
			$$ = new_node("String", 1, $1);
			$$->line = yylineno;
		}
    ;

Identifier
	:	Id
		{
			$$ = new_node("ID", 1, $1);
			$$->line = yylineno;
		}
    ;

%%
void yyerror(char *s) {
    fprintf(stderr, "line %d: %s \n", yylineno, s);
}

int main(void) {
    yyparse();
    return 0;
}
