%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int i=0;
char *code(char *first,char op,char *second)
{	char a[10];
	char b[10];
	char *str = (char *) malloc(sizeof(char) * 10);
	a[0]='t';
	a[1]=0;
	i++;
	snprintf(b, sizeof(b), "%d", i);
    	strcat(a,b);
    	strcpy(str,a);
        printf("%s = %s %c %s\n",a,first,op,second);
        return str;
}
char *code1()
{
      	char a[10];
     	char b[10];
	char *str = (char *) malloc(sizeof(char) * 10);
	a[0]='t';
	a[1]=0;
	i++;
	snprintf(b, sizeof(b), "%d", i);
    	strcat(a,b);
    	strcpy(str,a);
        return str;
}
char *code2(char *first,char op,char op1,char *second)
{	char a[10];
	char b[10];
	char *str = (char *) malloc(sizeof(char) * 10);
	a[0]='t';
	a[1]=0;
	i++;
	snprintf(b, sizeof(b), "%d", i);
    	strcat(a,b);
    	strcpy(str,a);
        printf("%s = %s %c %c %s\n",a,first,op,op1,second);
        return str;
}
%}
%union
{
    char *dval;
}
%token <dval> NUMBER
%token <dval> ID
%token <dval> WHILE
%type <dval> nosignfactor
%type <dval> factor
%type <dval> factor1
%type <dval> term
%type <dval> term1
%type <dval> expression
%type <dval> whilestmt
%type <dval> simple_expression
%type <dval> statment
%left '-' '+'
%left '*' '/'
%nonassoc UMINUS
%%

/*sbb :        '{'  s_b  '}'
|              statment_block
|             '{'  stat  sbb '}' 
|             '{'  sbb stat '}'
|	      '{'  stat sbb stat '}'
;
s_b         : statment_block
|            s_b statment_block*/
statment_block: '{'  stat '}' 
	;
stat: statment
|  	stat  statment 
	;

statment:  ID '=' expression ';'  { printf("%s = %s\n",$1,$3);}
|          whilestmt
	;
whilestmt : 	WHILE '(' expression ')' statment_block {$$=$3;}
;
expression: simple_expression			             
	|simple_expression '=' '=' simple_expression         {  $$ = code2($1,'=','=',$4);    }
	|   simple_expression '!' '=' simple_expression         {  $$ = code2($1,'!','=',$4);    }
	|   simple_expression '<' '=' simple_expression         {  $$ = code2($1,'<','=',$4);    }
	;
simple_expression: term           { $$ = $1;    }
	|   term  '+' term1    { $$ = code($1,'+',$3); }
	|   term  '-' term1    { $$ = code($1,'-',$3); }
	|   term '|' '|' term1 { $$ = code2($1,'|','|',$4); }	
	;

term1: term       		   { $$ = $1;    }
	|  term '+' term1      { $$ = code($1,'+',$3); }
	|  term '-' term1      { $$ = code($1,'-',$3); }
	|   term '|' '|' term1 { $$ = code2($1,'|','|',$4); }
	;

term: factor               { $$ = $1;    }
	|  factor '*' factor1  { $$ = code($1,'*',$3); }
	|  factor '/' factor1  { $$ = code($1,'/',$3); }
	|  factor '&' '&' factor1  { $$ = code2($1,'&','&',$4); }	
;
factor1: factor              { $$ = $1;    }
	|  factor '*' factor1  { $$ = code($1,'*',$3); }
	|  factor '/' factor1  { $$ = code($1,'/',$3); }
	|  factor '&' '&' factor1 { $$ = code2($1,'&','&',$4); }	
;
factor:  nosignfactor      { $$ = $1;    }	
	|   '-' nosignfactor %prec UMINUS {  $$=code1(); printf("%s = -%s\n",$$,$2);  }
	;
nosignfactor: '(' expression ')' { $$=$2; }
	|  ID                    
	|  NUMBER 
	;
%%
int main(void)
{
   yyparse();   
}
int yyerror(void)
{
    printf("Error\n");
    //exit(1);
}
