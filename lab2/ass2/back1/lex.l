%{
#include "y.tab.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

%}
%%
[0-9]+ |
0x[0-9a-fA-F]+ { yylval.dval=(char *)malloc(sizeof(char *)*10);strcpy(yylval.dval,yytext);  return NUMBER;  }
while          {yylval.dval=(char *)malloc(sizeof(char *)*10); strcpy(yylval.dval,yytext); printf("%s\n",yylval.dval); return WHILE; }
[a-zA-Z][a-zA-Z0-9]* {  yylval.dval=(char *)malloc(sizeof(char *)*10);strcpy(yylval.dval,yytext);  return ID;  }
[\t ]  {printf(" ");}

\n   {  return 0;         }
.    {  printf("%c \n",yytext[0]); return yytext[0];  }
%%

