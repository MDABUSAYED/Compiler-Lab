%{
#include "y.tab.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

%}
%%
while                { yylval.node.place=strdup(yytext); return WHILE; }
if                   { yylval.node.place=strdup(yytext); return IF;    }
else                 { yylval.node.place=strdup(yytext); return ELSE;  }
for                 { yylval.node.place=strdup(yytext); return  FOR;  }
[0-9]+ |
0x[0-9a-fA-F]+       {  yylval.node.place=strdup(yytext); return NUMBER;  }
[a-zA-Z][a-zA-Z0-9]* {  yylval.node.place=strdup(yytext); return ID;      }
[\t ]  {printf(" ");}
\n   |
.    {  return yytext[0];}
%%

