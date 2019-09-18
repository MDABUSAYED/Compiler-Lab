%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i=0;
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
%}
%union { 
  struct {
     char *place;
     char *code[100];
  } node;
}
%token <node> NUMBER
%token <node> ID
%type <node> nosignfactor
%type <node> factor
%type <node> factor1
%type <node> term
%type <node> term1
%type <node> expression
%type <node> statment
%type <node> stat
%type <node> statment_block
%left '-' '+'
%left '*' '/'
%nonassoc UMINUS
%%
statment_block: '{' stat '}'   {int i; for(i=0;$<node.code[i]>2!=NULL;i++) printf("%s \n",$<node.code[i]>2);}
	;
stat: statment     { $<node>$=$<node>1;  /* printf(" %s \n",$<node.code[0]>1);*/  }
	| stat  statment  { int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>2;
				 $<node.code[i+j]>$=NULL;
			  }
	;
statment:  ID '=' expression ';' {  int i=0;
				    for(i=0;$<node.code[i]>3!=NULL;i++)   $<node.code[i]>$=$<node.code[i]>3; //printf("%s\n",$<node.code[i]>3);
				    char *str; str=strdup($<node.place>1);
				    strcat(str," = ");   strcat(str,$<node.place>3);
                                    $<node.code[i]>$=strdup(str); 
				    $<node.code[i+1]>$=NULL;
				    //printf("%s\n",str);
				 }
	;
expression: term               { $<node>$=$<node>1;     }
	|   term  '+' term1    { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str ;/*= (char *) malloc(sizeof(char) * 20); */
				 str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," + "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|   term  '-' term1    { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," - "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	;

term1: term       	       { $<node>$=$<node>1;     }
	|  term '+' term1      { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," + "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|  term '-' term1      { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," - "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	;

term: factor                   { $<node>$=$<node>1;     }
	|  factor '*' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str;str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," * "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
 			       }
	|  factor '/' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," / "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
;
factor1: factor                { $<node>$=$<node>1;     }
	|  factor '*' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," * "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
                               }
	|  factor '/' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ," / "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
                               }
	;
factor:  nosignfactor          {  $<node>$=$<node>1;     }	
	|   '-' nosignfactor %prec UMINUS { $<node.place>$=code1();
					    char *str; str=strdup($<node.place>$); int i=0;
					    if($<node.code[0]>2!=NULL) { $<node.code[0]>$=strdup($<node.code[0]>2);  i=1; }
					    else i=0;
					    strcat(str," = ");strcat(str," - "); strcat(str,$<node.place>2); 
					    $<node.code[i]>$=strdup(str); $<node.code[i+1]>$=NULL;	 
                                           }
	;
nosignfactor: '(' expression ')' {  $<node>$=$<node>2;  }
	|  ID                    {  $<node>$=$<node>1; }
	|  NUMBER 		 {  $<node>$=$<node>1; }
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
