%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int var=0,lab=0;
char *code1()
{
      	char a[15];
     	char b[15];
	char *str = (char *) malloc(sizeof(char) * 15);
	a[0]='t';
	a[1]=0;
	var++;
	snprintf(b, sizeof(b), "%d", var);
    	strcat(a,b);
    	strcpy(str,a);
        return str;
}
char *level()
{
      	char a[15];
     	char b[15];
	char *str; /*= (char *) malloc(sizeof(char) * 15);*/
	a[0]='l'; a[1]='a'; a[2]='b';a[3]='e';
	a[4]='l';a[5]='_';
	a[6]=0;
	lab++;
	snprintf(b, sizeof(b), "%d", lab);
    	strcat(a,b);
    	//strcpy(str,a);
	str=strdup(a);
	strcat(str,":");
        return str;
}
%}
%union { 
     struct {
     char *place;
     char *code[100];
  }node;
}
%token <node> ID WHILE IF ELSE NUMBER TRUE FALSE NU THIS NEW READ WRITE WRITELN VOID CLASS INT BOOLEAN
%type <node> Boolean PrimitiveType Type ArrayType QualifiedType SelectorSeq1 SelectorSeq FieldSelector ElemSelector nosignfactor factor factor1 
%type <node> term RefType term1 simple_expression expression IdentAccess Assignment MethodCall ActualParam statment if_stmt while_stmt stat  
%type <node> statment_block IdentList FormalParam MethodDecl MethodHeading MethodBody VarDecl  DeclSeq1 DeclSeq ClassDecl Unit
%nonassoc UMINUS
%%
start: Unit  { int i; for(i=0;$<node.code[i]>1!=NULL;i++) printf("%s \n",$<node.code[i]>1);return 0; }
;
Unit : ClassDecl  { $<node>$=$<node>1; }
	| Unit  ClassDecl 		{ int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
					  for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>2;
				 	  $<node.code[i+j]>$=NULL;
			  		} 
;
ClassDecl : CLASS ID  '{' '\n' DeclSeq  '}' '\n'  	{ $<node.code[0]>$=strdup("class ");  strcat($<node.code[0]>$,$<node.place>2);
							  strcat($<node.code[0]>$,"{\n");
							  int i; for(i=0;$<node.code[i]>5!=NULL;i++) $<node.code[i+1]>$=$<node.code[i]>5; 
							   $<node.code[i+1]>$=strdup("\n}\n"); $<node.code[i+2]>$=NULL;
							}
;
DeclSeq : DeclSeq1      { $<node>$=$<node>1; }
	| DeclSeq DeclSeq1  				{ int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			  for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>2;
							  $<node.code[i+j]>$=NULL; }
;
DeclSeq1 :  VarDecl 	{ $<node>$=$<node>1; }
	| MethodDecl  	{ $<node>$=$<node>1; }
;
VarDecl : Type IdentList ';' '\n'      { $<node.place>$=$<node.place>1;  strcat($<node.place>$,$<node.place>2); /*printf("%s\n",$<node.place>$);*/ }
;

MethodDecl : MethodHeading MethodBody  	      { $<node.code[0]>$=$<node.place>1;  
						int i; for(i=0;$<node.code[i]>2!=NULL;i++) $<node.code[i+1]>$=$<node.code[i]>2; 
						$<node.code[i+1]>$=NULL; 
						}
;
MethodBody : '{' '\n' DeclSeq  stat  '}' '\n' { int i=0,j=0; for(i=0;$<node.code[i]>3!=NULL;i++) $<node.code[i]>$=$<node.code[i]>3;
				 			  for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
							  $<node.code[i+j]>$=NULL; }
	| '{' '\n' DeclSeq   '}' '\n' 		{ int i=0,j=0; for(i=0;$<node.code[i]>3!=NULL;i++) $<node.code[i]>$=$<node.code[i]>3;
							  $<node.code[i]>$=NULL; }
	| '{' '\n' stat   '}' '\n' 		{ int i=0,j=0; for(i=0;$<node.code[i]>3!=NULL;i++) $<node.code[i]>$=$<node.code[i]>3;
							  $<node.code[i]>$=NULL; }
;
MethodHeading : VOID ID '('  FormalParam  ')' { $<node.place>$=$<node.place>1; strcat($<node.place>$,$<node.place>2); 
						strcat($<node.place>$,strdup("("));	strcat($<node.place>$,$<node.place>4);  
						strcat($<node.place>$,")");
					       }
	| VOID ID '('    ')' 		      { $<node.place>$=$<node.place>1; strcat($<node.place>$,$<node.place>2); 
						strcat($<node.place>$,strdup("("));  strcat($<node.place>$,")");
					       }
;
FormalParam : Type ID { $<node.place>$=$<node.place>1; strcat($<node.place>$,$<node.place>2); }
	|  FormalParam ',' Type ID { $<node.place>$=$<node.place>1; strcat($<node.place>$,","); strcat($<node.place>$,$<node.place>3); 
					strcat($<node.place>$,$<node.place>4); }
;
IdentList : ID  {$<node>$=$<node>1;}
|        IdentList ',' ID { $<node.place>$=$<node.place>1; strcat($<node.place>$,","); strcat($<node.place>$,$<node.place>3); }
;
statment_block: '{' '\n' stat '}' '\n'  { $<node>$=$<node>3; }
	;
stat: statment     { $<node>$=$<node>1;  }
	| stat  statment  { int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>2;
				 $<node.code[i+j]>$=NULL;
			  }
	;
statment:  Assignment      { $<node>$=$<node>1; }
	|   while_stmt          { $<node>$=$<node>1; }
	|   if_stmt             { $<node>$=$<node>1; }
	|   MethodCall          { $<node>$=$<node>1; }
	;
while_stmt: WHILE '(' expression ')'  statment_block{$<node.code[0]>$=level();
							 int i=0,j=0; for(i=1;$<node.code[j]>3!=NULL;j++,i++) $<node.code[i]>$=$<node.code[j]>3;
							 char *str1; str1=level();
							 $<node.code[i]>$=strdup("if ");strcat($<node.code[i]>$,$<node.place>3);
							 strcat($<node.code[i]>$,strdup(" == 0 goto ")); strcat($<node.code[i]>$,str1);
							 for(j=0;$<node.code[j]>5!=NULL;j++) $<node.code[i+j+1]>$=$<node.code[j]>5;
							 $<node.code[i+j+1]>$=strdup("goto "); strcat($<node.code[i+j+1]>$,$<node.code[0]>$);
						   	 $<node.code[i+j+2]>$=strdup(str1);
							 $<node.code[i+j+3]>$=NULL;
						       }
;
if_stmt: IF '(' expression ')'  statment_block   {   int i=0,j=0; for(i=0;$<node.code[i]>3!=NULL;i++) 
							 $<node.code[i]>$=$<node.code[i]>3; char *str1; str1=level(); 
							 $<node.code[i]>$=strdup("if "); strcat($<node.code[i]>$,$<node.place>3); 
							 strcat($<node.code[i]>$,strdup(" == 0 goto ")); strcat($<node.code[i]>$,str1);
							 for(j=0;$<node.code[j]>5!=NULL;j++) $<node.code[i+j+1]>$=$<node.code[j]>5;
							 $<node.code[i+j+1]>$=str1; $<node.code[i+j+2]>$=NULL;
						     }
       | IF '(' expression ')'  statment_block ELSE  statment_block  { int i=0,j=0,k=0; for(i=0;$<node.code[i]>3!=NULL;i++) 
								     $<node.code[i]>$=$<node.code[i]>3;
							    	     char *str1,*str2; str1=level();str2=level();
							    	     $<node.code[i]>$=strdup("if ");strcat($<node.code[i]>$,$<node.place>3); 
								     strcat($<node.code[i]>$,strdup(" == 0 goto "));
							    	     strcat($<node.code[i]>$,str1);
								     for(j=0;$<node.code[j]>5!=NULL;j++) $<node.code[i+j+1]>$=$<node.code[j]>5;
								     $<node.code[i+j+1]>$=strdup("goto "); strcat($<node.code[i+j+1]>$,str2);
								     $<node.code[i+j+2]>$=str1; 
							             for(k=0;$<node.code[k]>7!=NULL;k++) $<node.code[i+k+j+3]>$=$<node.code[k]>7;
							    	     $<node.code[i+j+k+3]>$=str2;
							    	     $<node.code[i+j+k+4]>$=NULL;
								   }
;
ActualParam : ActualParam ',' expression { int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 	   for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3; 
					   $<node.place>$=$<node.place>1; strcat($<node.place>$,strdup("param "));  
					   strcat($<node.place>$,$<node.place>3); strcat($<node.place>$,strdup("\n"));	
						}
	| expression   { int i; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
 			 $<node.place>$=strdup("param "); strcat($<node.place>$,$<node.place>1); strcat($<node.place>$,strdup("\n")); }
;

MethodCall :  IdentAccess   '('  ActualParam  ')' ';' '\n'  { int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 	                 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3; 
							 $<node.code[i+j]>$=$<node.place>3; $<node.code[i+j+1]>$=strdup("call ");
							 strcat($<node.code[i+j+1]>$,$<node.place>1); $<node.code[i+j+2]>$=NULL;
					   		
						}
	|  IdentAccess   '('    ')' ';' '\n'  { 	 $<node.code[0]>$=strdup("call ");
							 strcat($<node.code[0]>$,$<node.place>1); $<node.code[1]>$=NULL;
					   		
						}
	| WRITE  '('  ActualParam  ')' ';' '\n'  { 	int i=0,j=0;for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[j]>$=$<node.code[j]>3; 
							 $<node.code[j]>$=$<node.place>3; $<node.code[j+1]>$=strdup("call ");
							 strcat($<node.code[j+1]>$,$<node.place>1); $<node.code[j+2]>$=NULL;
					   		
						}
	| WRITELN  '('  ActualParam  ')' ';' '\n' 	{ int i=0,j=0;for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[j]>$=$<node.code[j]>3; 
							  $<node.code[j]>$=$<node.place>3; $<node.code[j+1]>$=strdup("call ");
							  strcat($<node.code[j+1]>$,$<node.place>1); $<node.code[j+2]>$=NULL;
							}
	| WRITE  '(' ')' ';' '\n'  { 		$<node.code[0]>$=strdup("call ");
						strcat($<node.code[0]>$,$<node.place>1); $<node.code[1]>$=NULL;
					   		
						}
	| WRITELN  '(' ')' ';' '\n' 	{ $<node.code[0]>$=strdup("call ");
						strcat($<node.code[0]>$,$<node.place>1); $<node.code[1]>$=NULL;
							}
;
Assignment : IdentAccess '='  expression ';'  '\n'  { int i=0,j=0;  for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[j]>$=$<node.code[j]>3;
				    			char *str; str=strdup($<node.place>1); strcat(str,strdup(" = "));   
							strcat(str,$<node.place>3);
                                    			$<node.code[j]>$=strdup(str);  $<node.code[j+1]>$=NULL;
				 		    }
	| IdentAccess '=' NEW QualifiedType  ';' '\n' { char *str; str=strdup($<node.place>1);
				    			strcat(str," = ");   strcat(str,"new"); strcat(str,$<node.place>4);
                                    			$<node.code[0]>$=strdup(str); $<node.code[1]>$=NULL;
				 		      }
	| IdentAccess '='  READ '(' ')' ';' '\n' { char *str; str=strdup($<node.place>1);
				    strcat(str," = ");   strcat(str,"read()");
                                    $<node.code[0]>$=strdup(str); 
				    $<node.code[1]>$=NULL;
				 }
;
IdentAccess :  ID  SelectorSeq      { int j; $<node.place>$=$<node.place>1;strcat($<node.place>$,$<node.place>2); 
				   for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2;}
	|  THIS  SelectorSeq       {int j=0;  $<node.place>$=$<node.place>1;strcat($<node.place>$,$<node.place>2); 
				    for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2;}
	|  ID 		 { $<node>$=$<node>1;     }
;
expression     : simple_expression  { $<node>$=$<node>1;     }
	|  simple_expression '=' '=' simple_expression   { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
	|  simple_expression '!' '=' simple_expression   { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" != ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
	|  simple_expression '>'  simple_expression	 { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ," > "); strcat(str,$<node.place>3);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
	|  simple_expression '<' simple_expression	 { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ," < "); strcat(str,$<node.place>3);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
	|  simple_expression '<' '=' simple_expression   { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ," <= "); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
	|  simple_expression '>' '=' simple_expression   { $<node.place>$=code1();
				 			   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 			   for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 			   char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ," >= "); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); 
				 			   $<node.code[i+j+1]>$=NULL;
							 }
;
simple_expression: term               { $<node>$=$<node>1;     }
	|   term  '+' term1    { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1; 
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str ;
				 str=strdup($<node.place>$);
				 strcat(str,strdup(" = ")); strcat(str,$<node.place>1); strcat(str ," + "); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|   term  '-' term1    { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" - ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|   term  '|' '|' term1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" || ")); strcat(str,$<node.place>4);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	;

term1: term       	       { $<node>$=$<node>1;     }
	|  term '+' term1      { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str,strdup(" = ")); strcat(str,$<node.place>1); strcat(str ,strdup(" + ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|  term '-' term1      { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" - ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|   term  '|' '|' term1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" || ")); strcat(str,$<node.place>4);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	;
RefType : ID '[' ']'           { $<node.place>$=$<node.place>1; strcat($<node.place>$,"[]");}
	| INT '[' ']'          {  $<node.place>$=$<node.place>1; strcat($<node.place>$,"[]");}
	| BOOLEAN '[' ']'      {  $<node.place>$=$<node.place>1; strcat($<node.place>$,"[]");} 
;
term: factor                   { $<node>$=$<node>1;     }
	|  factor '*' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str;str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" * ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
 			       }
	|  factor '/' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" / ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|  factor '&' '&' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" && ")); strcat(str,$<node.place>4);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|  factor '%' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" % ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
;
factor1: factor                { $<node>$=$<node>1;     }
	|  factor '*' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" * ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
                               }
	|  factor '/' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" / ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
                               }
	|  factor '&' '&' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>4!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>4;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" && ")); strcat(str,$<node.place>4);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	|  factor '%' factor1  { $<node.place>$=code1();
				 int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				 for(j=0;$<node.code[j]>3!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>3;
				 char *str; str=strdup($<node.place>$);
				 strcat(str," = "); strcat(str,$<node.place>1); strcat(str ,strdup(" % ")); strcat(str,$<node.place>3);
                                 $<node.code[i+j]>$=strdup(str); 
				 $<node.code[i+j+1]>$=NULL;
			       }
	;
factor:  nosignfactor          {  $<node>$=$<node>1;     }	
	|   '-' nosignfactor %prec UMINUS { $<node.place>$=code1();
					    char *str; str=strdup($<node.place>$); int i=0;
					    if($<node.code[0]>2!=NULL) { $<node.code[0]>$=strdup($<node.code[0]>2);  i=1; }
					    else i=0;
					    strcat(str," = ");strcat(str,strdup(" - ")); strcat(str,$<node.place>2); 
					    $<node.code[i]>$=strdup(str); $<node.code[i+1]>$=NULL;	 
                                           }
	;
nosignfactor: '(' expression ')' {  $<node>$=$<node>2; }
	|  NUMBER 		 {  $<node>$=$<node>1; }
	| NU			 {  $<node>$=$<node>1; }
	| IdentAccess		 {  $<node>$=$<node>1; }
	| Boolean		 {  $<node>$=$<node>1; }
	| '!' factor		 { int j=0; $<node.place>$=strdup("!"); strcat($<node.place>$,$<node.place>2); 
				   for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2; }
	| '(' RefType ')' nosignfactor {$<node.place>$=strdup("("); strcat($<node.place>$,$<node.place>2); $<node.place>$=strdup(")");
					strcat($<node.place>$,$<node.place>4);/*may write some code*/}
	/*| '(' ID ')' nosignfactor {$<node.place>$=strdup("("); strcat($<node.place>$,$<node.place>2); $<node.place>$=strdup(")");
					strcat($<node.place>$,$<node.place>4);may write some code}*/
	;
ElemSelector : '[' simple_expression ']' {$<node.place>$=strdup("["); strcat($<node.place>$,$<node.place>2);strcat($<node.place>$,"]"); 
				   int j=0; for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2;}
;
FieldSelector : '.' ID	 	 {  $<node.place>$=strdup("."); strcat($<node.place>$,$<node.place>2);}
;
SelectorSeq : SelectorSeq1       {$<node>$=$<node>1;}
	| SelectorSeq SelectorSeq1 {$<node.place>$=$<node.place>1; strcat($<node.place>$,$<node.place>2);
				   int i=0,j=0; for(i=0;$<node.code[i]>1!=NULL;i++) $<node.code[i]>$=$<node.code[i]>1;
				   for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[i+j]>$=$<node.code[j]>2;$<node.code[i+j]>$=NULL;}
;
SelectorSeq1: FieldSelector 	 {$<node>$=$<node>1;}
	| ElemSelector 		 {$<node>$=$<node>1;}
;
QualifiedType : ID '(' ')'    {  $<node>$=$<node>1; strcat($<node.place>$,"()");}
	| ID ElemSelector 	 { $<node.place>$=strdup($<node.place>1); strcat($<node.place>$,$<node.place>2); 
				   int j=0; for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2;  }
	| PrimitiveType ElemSelector  { $<node.place>$=strdup($<node.place>1); strcat($<node.place>$,$<node.place>2); 
				       int j=0;	for(j=0;$<node.code[j]>2!=NULL;j++) $<node.code[j]>$=$<node.code[j]>2;}
;
ArrayType : ID  '[' ']'	 {  $<node>$=$<node>1; /* may need to write code*/ }
	| PrimitiveType '[' ']'  {  $<node>$=$<node>1; /* may need to write code*/ }
;
Type : PrimitiveType 		 {  $<node>$=$<node>1; }
	| ID 		 	 {  $<node>$=$<node>1; }
	| ArrayType		 {  $<node>$=$<node>1; }
;
PrimitiveType: INT               {  $<node>$=$<node>1; } 
	| BOOLEAN                {  $<node>$=$<node>1; }
;
Boolean : TRUE 			 {  $<node>$=$<node>1; }
	| FALSE			 {  $<node>$=$<node>1; }
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
