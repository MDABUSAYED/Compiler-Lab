/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yyy.y" /* yacc.c:339  */

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

#line 102 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    ID = 258,
    WHILE = 259,
    IF = 260,
    ELSE = 261,
    NUMBER = 262,
    TRUE = 263,
    FALSE = 264,
    NU = 265,
    THIS = 266,
    NEW = 267,
    READ = 268,
    WRITE = 269,
    WRITELN = 270,
    VOID = 271,
    CLASS = 272,
    INT = 273,
    BOOLEAN = 274,
    UMINUS = 275
  };
#endif
/* Tokens.  */
#define ID 258
#define WHILE 259
#define IF 260
#define ELSE 261
#define NUMBER 262
#define TRUE 263
#define FALSE 264
#define NU 265
#define THIS 266
#define NEW 267
#define READ 268
#define WRITE 269
#define WRITELN 270
#define VOID 271
#define CLASS 272
#define INT 273
#define BOOLEAN 274
#define UMINUS 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 36 "yyy.y" /* yacc.c:355  */
 
     struct {
     char *place;
     char *code[300];
  }node;

#line 189 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   483

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      22,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,     2,     2,    40,    39,     2,
      25,    26,    37,    32,    27,    33,    41,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
      31,    28,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,    34,    23,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    50,    51,    56,    61,    63,    65,    67,
      70,    71,    75,    76,    79,    80,    83,    87,    91,    93,
      95,    98,   100,   103,   107,   114,   115,   119,   120,   122,
     124,   125,   130,   131,   132,   133,   134,   136,   147,   154,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   218,   223,   228,   234,   238,
     243,   247,   251,   253,   255,   257,   261,   263,   265,   267,
     269,   271,   273,   279,   284,   290,   293,   295,   297,   299,
     300,   317,   334,   351,   368,   385,   404,   405,   414,   422,
     432,   433,   441,   449,   458,   459,   460,   462,   463,   471,
     479,   487,   496,   497,   505,   513,   521,   530,   531,   539,
     540,   541,   542,   543,   544,   546,   551,   554,   556,   559,
     563,   564,   568,   569,   571,   574,   575,   577,   578,   579,
     581,   582,   584,   585
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "WHILE", "IF", "ELSE", "NUMBER",
  "TRUE", "FALSE", "NU", "THIS", "NEW", "READ", "WRITE", "WRITELN", "VOID",
  "CLASS", "INT", "BOOLEAN", "UMINUS", "'{'", "'\\n'", "'}'", "';'", "'('",
  "')'", "','", "'='", "'!'", "'>'", "'<'", "'+'", "'-'", "'|'", "'['",
  "']'", "'*'", "'/'", "'&'", "'%'", "'.'", "$accept", "start", "Unit",
  "ClassDecl", "DeclSeq", "DeclSeq1", "VarDecl", "MethodDecl",
  "MethodBody", "MethodHeading", "FormalParam", "IdentList",
  "statment_block", "stat", "statment", "while_stmt", "if_stmt",
  "ActualParam", "MethodCall", "Assignment", "IdentAccess", "expression",
  "simple_expression", "term1", "RefType", "term", "factor1", "factor",
  "nosignfactor", "ElemSelector", "FieldSelector", "SelectorSeq",
  "SelectorSeq1", "QualifiedType", "ArrayType", "Type", "PrimitiveType",
  "Boolean", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   123,    10,   125,    59,    40,    41,    44,    61,    33,
      62,    60,    43,    45,   124,    91,    93,    42,    47,    38,
      37,    46
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -139

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    19,    32,    29,    25,  -194,    12,    33,   141,  -194,
    -194,  -194,    46,  -194,    63,  -194,  -194,   117,    78,    72,
     107,  -194,  -194,    85,  -194,  -194,  -194,    92,  -194,   131,
      96,   105,   101,   119,   164,  -194,   191,  -194,   196,  -194,
       7,   185,  -194,  -194,    40,  -194,   464,  -194,   202,   227,
    -194,   229,   150,   251,   181,    11,   231,   258,    -3,   250,
     254,   407,   428,  -194,  -194,  -194,  -194,  -194,    62,  -194,
    -194,  -194,   236,   111,  -194,  -194,    64,   281,  -194,  -194,
      -3,  -194,   259,    -3,  -194,  -194,  -194,  -194,  -194,   142,
     395,    16,  -194,   272,   163,   108,   206,  -194,  -194,   276,
    -194,   171,   297,   395,    -3,   285,   296,   295,   433,   314,
     315,  -194,   323,   198,  -194,   335,   332,   308,  -194,  -194,
     207,    70,    22,   310,   311,   144,   321,  -194,  -194,   214,
     325,   326,   359,   368,   395,   395,   324,   395,   395,   316,
     395,   241,   147,   162,   256,   333,   336,   255,  -194,   337,
     340,   263,  -194,   350,  -194,   347,   356,   274,   352,   120,
     357,   361,  -194,   355,  -194,   364,  -194,   367,  -194,   287,
      73,   354,   358,   369,  -194,   291,    16,   373,  -194,   395,
     395,   395,  -194,   395,  -194,  -194,   114,  -194,   395,  -194,
     210,  -194,   395,  -194,   377,  -194,   378,  -194,   294,   385,
    -194,   298,   387,  -194,   173,   391,   195,   395,   233,   392,
     248,  -194,   249,   393,   252,  -194,    44,   403,   348,   390,
     397,  -194,  -194,  -194,   413,  -194,  -194,  -194,  -194,  -194,
     418,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   395,
     395,   383,  -194,   395,   395,   402,   395,  -194,  -194,  -194,
     423,  -194,  -194,  -194,   440,  -194,  -194,   427,  -194,  -194,
     435,  -194,  -194,   436,  -194,  -194,   437,  -194,   439,  -194,
    -194,   444,   429,  -194,   448,  -194,   438,  -194,  -194,   211,
    -194,  -194,   395,  -194,  -194,   395,  -194,  -194,   306,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,   451,   449,  -194,
    -194,  -194,  -194,  -194,   452,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,     9,
       1,     4,     0,     7,     0,     8,     6,     0,     0,   138,
       0,   140,   141,     0,    10,    13,    12,     0,   139,     0,
     137,     0,     0,     0,     0,    11,     0,    16,     0,    27,
       0,     0,    17,   135,     0,     5,     0,    15,     0,     0,
     136,    24,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    30,    33,    34,    35,    32,     0,    14,
      28,    19,    23,     0,    25,    36,     0,     0,   131,   130,
      86,   128,     0,    88,   120,   142,   143,   121,    56,     0,
       0,     0,   122,     0,    89,    96,   107,   117,   123,     0,
      44,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    18,     0,     0,     0,   127,   129,
       0,     0,    88,     0,     0,     0,     0,   124,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,    21,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    26,     0,   126,     0,    63,     0,    64,     0,
       0,     0,     0,     0,    60,   119,     0,     0,    59,     0,
       0,     0,    92,     0,    93,    97,   100,    98,     0,   108,
     112,   109,     0,   111,     0,    51,     0,    52,     0,     0,
      48,   119,     0,    47,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,    85,     0,     0,     0,     0,
       0,   119,    61,    62,     0,    53,   104,   105,   106,    58,
       0,    55,    37,   125,    57,    90,    91,    95,    94,     0,
       0,     0,    99,     0,     0,     0,     0,   110,    49,    50,
       0,    41,    46,    42,    38,    45,    76,     0,    71,    78,
       0,    65,    79,     0,    72,    81,     0,    73,     0,    68,
      75,     0,     0,   133,     0,   134,     0,    82,    54,     0,
     101,   102,     0,   113,   114,     0,   116,    40,     0,    77,
      69,    80,    70,    74,    67,   132,    83,     0,     0,   103,
     115,    43,    39,    84,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,   467,   430,    -5,  -194,  -194,  -194,  -194,
    -194,  -194,  -193,   -59,   -61,  -194,  -194,   -76,  -194,  -194,
     -46,   -52,   -55,  -118,  -194,  -128,  -127,   -87,   -82,   -31,
    -194,   419,   -60,  -194,  -194,   -34,   322,  -194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    23,    24,    25,    26,    37,    27,
      52,    40,   232,    62,    63,    64,    65,   147,    66,    67,
      92,   148,    94,   185,   126,    95,   189,    96,    97,    78,
      79,    80,    81,   217,    28,    29,    30,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,   111,   108,   127,    93,   102,   186,   186,   254,   128,
      53,   191,  -138,   193,  -138,    68,    68,   187,    35,    83,
     119,   117,     6,    84,    85,    86,    87,    58,     1,    10,
     151,    48,   103,    12,    49,     8,   157,   125,    77,   115,
       7,   116,     2,    19,   119,    90,    76,   111,   117,   143,
     190,   190,    77,   190,     9,    13,    35,   170,    21,    22,
     186,   161,    68,    77,   163,   247,    51,    83,    16,   272,
     242,    84,    85,    86,    87,    58,    83,   182,   184,   103,
      84,    85,    86,    87,    58,    17,    18,   112,    19,   116,
     113,   167,   168,    90,   233,   302,   169,    91,   116,    31,
      43,    20,    90,    21,    22,   190,    91,    32,    34,   226,
      33,   186,   186,    36,    19,   117,   283,   284,    18,   286,
      19,   280,   281,   216,   235,   236,   237,    42,   238,    21,
      22,    41,    38,    20,    39,    21,    22,    43,    21,    22,
     134,   135,   136,   121,    44,   122,   239,   240,   241,    84,
      85,    86,    87,    58,   186,   261,   190,   190,   300,   190,
     123,   124,    14,    15,   299,   173,   174,   116,   196,   197,
     175,    90,   142,   198,   122,    91,    72,    73,    84,    85,
      86,    87,    58,   199,   200,   273,    45,   275,   201,   123,
     124,   130,   131,   132,   133,   256,   116,   257,   190,   158,
      90,    83,    31,    75,    91,    84,    85,    86,    87,    58,
     159,   160,   109,    46,    83,    56,    57,   259,    47,   260,
     298,    50,    58,   116,    69,    59,    60,    90,   165,   166,
      70,    91,    82,    68,    83,   177,   178,   111,    84,    85,
      86,    87,    58,   137,   138,   139,   140,   243,   244,   245,
     246,    71,    68,    88,    74,   262,    89,   263,   114,    99,
      90,    83,   194,   195,    91,    84,    85,    86,    87,    58,
     265,   267,   266,   268,   270,   105,   271,   202,   203,   106,
     100,   206,   207,   101,   118,   120,   145,    90,    83,   210,
     207,    91,    84,    85,    86,    87,    58,   149,   129,    83,
     214,   207,   141,    84,    85,    86,    87,    58,   224,   225,
     116,   146,   230,   231,    90,   250,   251,   152,    91,   230,
     253,   116,   150,   144,   155,    90,    83,   230,   301,    91,
      84,    85,    86,    87,    58,   122,    75,   154,   162,    84,
      85,    86,    87,    58,   164,   171,   172,   176,   116,   156,
     123,   124,    90,   179,   180,   192,    91,   116,   188,   204,
     205,    90,    83,   208,   209,    91,    84,    85,    86,    87,
      58,    83,   211,   212,   215,    84,    85,    86,    87,    58,
     213,   221,   219,   103,   116,   220,   222,   181,    90,   223,
     227,   229,    91,   116,   228,   234,   183,    90,    83,   248,
     249,    91,    84,    85,    86,    87,    58,   252,    54,   255,
      55,    56,    57,   258,   264,   269,   276,   282,    58,   277,
     116,    59,    60,    20,    90,    21,    22,   274,    91,   109,
     107,    83,    56,    57,   109,   278,    83,    56,    57,    58,
     279,   285,    59,    60,    58,   287,   288,    59,    60,   289,
     109,   110,    83,    56,    57,   295,   153,   290,   291,   292,
      58,   293,   297,    59,    60,    54,   294,    55,    56,    57,
     296,    11,   304,   303,   305,    58,    61,   104,    59,    60,
      20,   218,    21,    22
};

static const yytype_uint16 yycheck[] =
{
      46,    62,    61,    90,    56,    57,   134,   135,   201,    91,
      44,   138,     1,   140,     3,    61,    62,   135,    23,     3,
      80,    76,     3,     7,     8,     9,    10,    11,     3,     0,
     106,    24,    35,    21,    27,     3,   112,    89,    41,    73,
      21,    25,    17,     3,   104,    29,    35,   108,   103,   101,
     137,   138,    41,   140,    22,    22,    61,    35,    18,    19,
     188,   113,   108,    41,   116,   192,    26,     3,    22,    25,
     188,     7,     8,     9,    10,    11,     3,   132,   133,    35,
       7,     8,     9,    10,    11,    22,     1,    25,     3,    25,
      28,    21,    22,    29,   176,   288,    26,    33,    25,    21,
      36,    16,    29,    18,    19,   192,    33,    35,    23,    36,
       3,   239,   240,    21,     3,   170,   243,   244,     1,   246,
       3,   239,   240,     3,   179,   180,   181,    22,   183,    18,
      19,    35,     1,    16,     3,    18,    19,    36,    18,    19,
      32,    33,    34,     1,    25,     3,    32,    33,    34,     7,
       8,     9,    10,    11,   282,   207,   243,   244,   285,   246,
      18,    19,    21,    22,   282,    21,    22,    25,    21,    22,
      26,    29,     1,    26,     3,    33,    26,    27,     7,     8,
       9,    10,    11,    21,    22,   216,    22,   218,    26,    18,
      19,    28,    29,    30,    31,    22,    25,    24,   285,     1,
      29,     3,    21,    22,    33,     7,     8,     9,    10,    11,
      12,    13,     1,    22,     3,     4,     5,    22,    22,    24,
     279,    36,    11,    25,    22,    14,    15,    29,    21,    22,
       3,    33,     1,   279,     3,    21,    22,   298,     7,     8,
       9,    10,    11,    37,    38,    39,    40,    37,    38,    39,
      40,    22,   298,    22,     3,    22,    25,    24,    22,     1,
      29,     3,    21,    22,    33,     7,     8,     9,    10,    11,
      22,    22,    24,    24,    22,    25,    24,    21,    22,    25,
      22,    26,    27,    25,     3,    26,     1,    29,     3,    26,
      27,    33,     7,     8,     9,    10,    11,     1,    26,     3,
      26,    27,    26,     7,     8,     9,    10,    11,    21,    22,
      25,    26,    21,    22,    29,    21,    22,    22,    33,    21,
      22,    25,    26,    26,     1,    29,     3,    21,    22,    33,
       7,     8,     9,    10,    11,     3,    22,    22,     3,     7,
       8,     9,    10,    11,    36,    35,    35,    26,    25,    26,
      18,    19,    29,    28,    28,    39,    33,    25,    34,    26,
      24,    29,     3,    26,    24,    33,     7,     8,     9,    10,
      11,     3,    22,    26,    22,     7,     8,     9,    10,    11,
      24,    26,    25,    35,    25,    24,    22,    28,    29,    22,
      36,    22,    33,    25,    36,    22,    28,    29,     3,    22,
      22,    33,     7,     8,     9,    10,    11,    22,     1,    22,
       3,     4,     5,    22,    22,    22,    26,    34,    11,    22,
      25,    14,    15,    16,    29,    18,    19,    24,    33,     1,
      23,     3,     4,     5,     1,    22,     3,     4,     5,    11,
      22,    39,    14,    15,    11,    22,     6,    14,    15,    22,
       1,    23,     3,     4,     5,    26,    23,    22,    22,    22,
      11,    22,    24,    14,    15,     1,    22,     3,     4,     5,
      22,     4,    23,    22,    22,    11,    46,    58,    14,    15,
      16,   159,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    43,    44,    45,     3,    21,     3,    22,
       0,    45,    21,    22,    21,    22,    22,    22,     1,     3,
      16,    18,    19,    46,    47,    48,    49,    51,    76,    77,
      78,    21,    35,     3,    23,    47,    21,    50,     1,     3,
      53,    35,    22,    36,    25,    22,    22,    22,    24,    27,
      36,    26,    52,    77,     1,     3,     4,     5,    11,    14,
      15,    46,    55,    56,    57,    58,    60,    61,    62,    22,
       3,    22,    26,    27,     3,    22,    35,    41,    71,    72,
      73,    74,     1,     3,     7,     8,     9,    10,    22,    25,
      29,    33,    62,    63,    64,    67,    69,    70,    79,     1,
      22,    25,    63,    35,    73,    25,    25,    23,    55,     1,
      23,    56,    25,    28,    22,    77,    25,    64,     3,    74,
      26,     1,     3,    18,    19,    63,    66,    69,    70,    26,
      28,    29,    30,    31,    32,    33,    34,    37,    38,    39,
      40,    26,     1,    63,    26,     1,    26,    59,    63,     1,
      26,    59,    22,    23,    22,     1,    26,    59,     1,    12,
      13,    63,     3,    63,    36,    21,    22,    21,    22,    26,
      35,    35,    35,    21,    22,    26,    26,    21,    22,    28,
      28,    28,    64,    28,    64,    65,    67,    65,    34,    68,
      69,    68,    39,    68,    21,    22,    21,    22,    26,    21,
      22,    26,    21,    22,    26,    24,    26,    27,    26,    24,
      26,    22,    26,    24,    26,    22,     3,    75,    78,    25,
      24,    26,    22,    22,    21,    22,    36,    36,    36,    22,
      21,    22,    54,    70,    22,    64,    64,    64,    64,    32,
      33,    34,    65,    37,    38,    39,    40,    68,    22,    22,
      21,    22,    22,    22,    54,    22,    22,    24,    22,    22,
      24,    63,    22,    24,    22,    22,    24,    22,    24,    22,
      22,    24,    25,    71,    24,    71,    26,    22,    22,    22,
      65,    65,    34,    68,    68,    39,    68,    22,     6,    22,
      22,    22,    22,    22,    22,    26,    22,    24,    55,    65,
      68,    22,    54,    22,    23,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    46,    47,    47,    48,    48,    49,    49,    49,    49,
      50,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    56,    56,    56,    56,    56,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    71,    72,    73,    73,
      74,    74,    75,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     7,     4,     3,     3,     2,
       1,     2,     1,     1,     4,     3,     2,     3,     6,     5,
       6,     5,     5,     5,     4,     2,     4,     1,     3,     5,
       1,     2,     1,     1,     1,     1,     2,     5,     5,     7,
       6,     5,     5,     7,     2,     5,     5,     4,     4,     5,
       5,     4,     4,     5,     6,     5,     2,     5,     5,     4,
       4,     5,     5,     4,     4,     3,     1,     6,     5,     6,
       6,     5,     5,     5,     6,     5,     5,     6,     5,     5,
       6,     5,     5,     6,     7,     4,     2,     2,     1,     1,
       4,     4,     3,     3,     4,     4,     1,     3,     3,     4,
       1,     3,     3,     4,     3,     3,     3,     1,     3,     3,
       4,     3,     1,     3,     3,     4,     3,     1,     2,     3,
       1,     1,     1,     1,     2,     4,     3,     2,     1,     2,
       1,     1,     3,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 48 "yyy.y" /* yacc.c:1646  */
    { int i; for(i=0;(yyvsp[0].node.code[i])!=NULL;i++) printf("%s \n",(yyvsp[0].node.code[i])); return 0; }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-1].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-1].node.code[i]);
					  for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 	  (yyval.node.code[i+j])=NULL;
			  		}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.code[0])=strdup("class ");  strcat((yyval.node.code[0]),(yyvsp[-5].node.place));
							  strcat((yyval.node.code[0]),"{\n");
							  int i; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i+1])=(yyvsp[-2].node.code[i]); 
							   (yyval.node.code[i+1])=strdup("\n}\n"); (yyval.node.code[i+2])=NULL;
							}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong class declaration .try again \n"); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong class declaration .try again \n"); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '{' in class declaration .try again \n"); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ID in class declaration .try again \n"); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-1].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-1].node.code[i]);
				 			  for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							  (yyval.node.code[i+j])=NULL; }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 76 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 79 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-3].node.place);  strcat((yyval.node.place),(yyvsp[-2].node.place)); /*printf("%s\n",$<node.place>$);*/ }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 80 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid variable declaration\n"); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.code[0])=(yyvsp[-1].node.place);  
						int i; for(i=0;(yyvsp[0].node.code[i])!=NULL;i++) (yyval.node.code[i+1])=(yyvsp[0].node.code[i]); 
						(yyval.node.code[i+1])=NULL; 
						}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong method declaration \n"); }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong method declaration... \n"); }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong method declaration.. \n"); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 			  for(j=0;(yyvsp[-2].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[-2].node.code[j]);
							  (yyval.node.code[i+j])=NULL; }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
							  (yyval.node.code[i])=NULL; }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
							  (yyval.node.code[i])=NULL; }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 103 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-4].node.place); strcat((yyval.node.place),(yyvsp[-3].node.place)); 
						strcat((yyval.node.place),strdup("("));	strcat((yyval.node.place),(yyvsp[-1].node.place));  
						strcat((yyval.node.place),")");
					       }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-3].node.place); strcat((yyval.node.place),(yyvsp[-2].node.place)); 
						strcat((yyval.node.place),strdup("("));  strcat((yyval.node.place),")");
					       }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-1].node.place); strcat((yyval.node.place),(yyvsp[0].node.place)); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-3].node.place); strcat((yyval.node.place),","); strcat((yyval.node.place),(yyvsp[-1].node.place)); 
					strcat((yyval.node.place),(yyvsp[0].node.place)); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 119 "yyy.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-2].node.place); strcat((yyval.node.place),","); strcat((yyval.node.place),(yyvsp[0].node.place)); }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 122 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-2].node); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);  }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-1].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-1].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 (yyval.node.code[i+j])=NULL;
			  }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 130 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 131 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "yyy.y" /* yacc.c:1646  */
    { yyerror(" invlid if,while,Assignment or method_call \n"); }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "yyy.y" /* yacc.c:1646  */
    {(yyval.node.code[0])=level();
							 int i=0,j=0; for(i=1;(yyvsp[-2].node.code[j])!=NULL;j++,i++) (yyval.node.code[i])=(yyvsp[-2].node.code[j]);
							 char *str1; str1=level();
							 (yyval.node.code[i])=strdup("if ");strcat((yyval.node.code[i]),(yyvsp[-2].node.place));
							 strcat((yyval.node.code[i]),strdup(" == 0 goto ")); strcat((yyval.node.code[i]),str1);
							 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j+1])=(yyvsp[0].node.code[j]);
							 (yyval.node.code[i+j+1])=strdup("goto "); strcat((yyval.node.code[i+j+1]),(yyval.node.code[0]));
						   	 (yyval.node.code[i+j+2])=strdup(str1);
							 (yyval.node.code[i+j+3])=NULL;
						       }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 147 "yyy.y" /* yacc.c:1646  */
    {   int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) 
							 (yyval.node.code[i])=(yyvsp[-2].node.code[i]); char *str1; str1=level(); 
							 (yyval.node.code[i])=strdup("if "); strcat((yyval.node.code[i]),(yyvsp[-2].node.place)); 
							 strcat((yyval.node.code[i]),strdup(" == 0 goto ")); strcat((yyval.node.code[i]),str1);
							 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j+1])=(yyvsp[0].node.code[j]);
							 (yyval.node.code[i+j+1])=str1; (yyval.node.code[i+j+2])=NULL;
						     }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 154 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0,k=0; for(i=0;(yyvsp[-4].node.code[i])!=NULL;i++) 
								     (yyval.node.code[i])=(yyvsp[-4].node.code[i]);
							    	     char *str1,*str2; str1=level();str2=level();
							    	     (yyval.node.code[i])=strdup("if ");strcat((yyval.node.code[i]),(yyvsp[-4].node.place)); 
								     strcat((yyval.node.code[i]),strdup(" == 0 goto "));
							    	     strcat((yyval.node.code[i]),str1);
								     for(j=0;(yyvsp[-2].node.code[j])!=NULL;j++) (yyval.node.code[i+j+1])=(yyvsp[-2].node.code[j]);
								     (yyval.node.code[i+j+1])=strdup("goto "); strcat((yyval.node.code[i+j+1]),str2);
								     (yyval.node.code[i+j+2])=str1; 
							             for(k=0;(yyvsp[0].node.code[k])!=NULL;k++) (yyval.node.code[i+k+j+3])=(yyvsp[0].node.code[k]);
							    	     (yyval.node.code[i+j+k+3])=str2;
							    	     (yyval.node.code[i+j+k+4])=NULL;
								   }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 167 "yyy.y" /* yacc.c:1646  */
    { yyerror(" if expression is invalid \n"); }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 169 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid if statement for this grammar and error expression of if \n"); }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 171 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid if statement block(missing '{')  for this grammar\n"); }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 173 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid else statement block(missing '{')  for this grammar\n"); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 175 "yyy.y" /* yacc.c:1646  */
    { yyerror("if without any expression\n");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 177 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' \n"); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 179 "yyy.y" /* yacc.c:1646  */
    { yyerror(" missing ')'\n"); }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 181 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and '{' \n"); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ')' and '{' \n"); }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 185 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and wrong expression \n"); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 187 "yyy.y" /* yacc.c:1646  */
    { yyerror(" missing ')' and wrong expression \n"); }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and '{' and wrong expression\n"); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 191 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ')' and '{' and wrong expression \n"); }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 193 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid while statement for this grammar and error expression of while \n"); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 195 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid while expression \n"); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 197 "yyy.y" /* yacc.c:1646  */
    { yyerror("invalid while statement block(missing '{')  for this grammar\n"); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 199 "yyy.y" /* yacc.c:1646  */
    { yyerror("while without any expression\n");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 201 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' \n"); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "yyy.y" /* yacc.c:1646  */
    { yyerror(" missing ')'\n"); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 205 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and '{' \n"); }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 207 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ')' and '{' \n"); }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 209 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and wrong expression \n"); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 211 "yyy.y" /* yacc.c:1646  */
    { yyerror(" missing ')' and wrong expression \n"); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing '(' and '{' and wrong expression\n"); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 215 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ')' and '{' and wrong expression \n"); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 218 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 	   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]); 
					   (yyval.node.place)=(yyvsp[-2].node.place); strcat((yyval.node.place),strdup("param "));  
					   strcat((yyval.node.place),(yyvsp[0].node.place)); strcat((yyval.node.place),strdup("\n"));	
						}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 223 "yyy.y" /* yacc.c:1646  */
    { int i; for(i=0;(yyvsp[0].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[0].node.code[i]);
 			 (yyval.node.place)=strdup("param "); strcat((yyval.node.place),(yyvsp[0].node.place)); strcat((yyval.node.place),strdup("\n")); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 228 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0; for(i=0;(yyvsp[-5].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-5].node.code[i]);
				 	                 for(j=0;(yyvsp[-3].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[-3].node.code[j]); 
							 (yyval.node.code[i+j])=(yyvsp[-3].node.place); (yyval.node.code[i+j+1])=strdup("call ");
							 strcat((yyval.node.code[i+j+1]),(yyvsp[-5].node.place)); (yyval.node.code[i+j+2])=NULL;
					   		
						}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 234 "yyy.y" /* yacc.c:1646  */
    { 	 (yyval.node.code[0])=strdup("call ");
							 strcat((yyval.node.code[0]),(yyvsp[-4].node.place)); (yyval.node.code[1])=NULL;
					   		
						}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "yyy.y" /* yacc.c:1646  */
    { 	int i=0,j=0;for(j=0;(yyvsp[-3].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-3].node.code[j]); 
							 (yyval.node.code[j])=(yyvsp[-3].node.place); (yyval.node.code[j+1])=strdup("call ");
							 strcat((yyval.node.code[j+1]),(yyvsp[-5].node.place)); (yyval.node.code[j+2])=NULL;
					   		
						}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 243 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0;for(j=0;(yyvsp[-3].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-3].node.code[j]); 
							  (yyval.node.code[j])=(yyvsp[-3].node.place); (yyval.node.code[j+1])=strdup("call ");
							  strcat((yyval.node.code[j+1]),(yyvsp[-5].node.place)); (yyval.node.code[j+2])=NULL;
							}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 247 "yyy.y" /* yacc.c:1646  */
    { 		(yyval.node.code[0])=strdup("call ");
						strcat((yyval.node.code[0]),(yyvsp[-4].node.place)); (yyval.node.code[1])=NULL;
					   		
						}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 251 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.code[0])=strdup("call ");
						strcat((yyval.node.code[0]),(yyvsp[-4].node.place)); (yyval.node.code[1])=NULL;	}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' and wrong parameter in method_call \n"); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 255 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong parameter in method_call \n"); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' in method_call \n"); }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 261 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' and wrong parameter in method_call \n"); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 263 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong parameter in method_call \n"); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 265 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' in method_call \n"); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 267 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' and wrong parameter in method_call \n"); }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "yyy.y" /* yacc.c:1646  */
    { yyerror("wrong parameter in method_call \n"); }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 271 "yyy.y" /* yacc.c:1646  */
    { yyerror("missing ';' in method_call \n"); }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 273 "yyy.y" /* yacc.c:1646  */
    { int i=0,j=0;  for(j=0;(yyvsp[-4].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-4].node.code[j]);
							 for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i+j])=(yyvsp[-2].node.code[i]);
				    			char *str; str=strdup((yyvsp[-4].node.place)); strcat(str,strdup(" = "));   
							strcat(str,(yyvsp[-2].node.place));
                                    			(yyval.node.code[i+j])=strdup(str);  (yyval.node.code[i+j+1])=NULL;
				 		    }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 279 "yyy.y" /* yacc.c:1646  */
    { int j=0;  for(j=0;(yyvsp[-5].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-5].node.code[j]);
							char *str; str=strdup((yyvsp[-5].node.place));
				    			strcat(str," = ");   strcat(str,"new"); strcat(str,(yyvsp[-2].node.place));
                                    			(yyval.node.code[j])=strdup(str); (yyval.node.code[j+1])=NULL;
				 		      }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 284 "yyy.y" /* yacc.c:1646  */
    { int j=0;  for(j=0;(yyvsp[-6].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-6].node.code[j]);
					char *str; str=strdup((yyvsp[-6].node.place));
				    strcat(str," = ");   strcat(str,"read()");
                                    (yyval.node.code[j])=strdup(str); 
				    (yyval.node.code[j+1])=NULL;
				 }
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 290 "yyy.y" /* yacc.c:1646  */
    {yyerror("invalid assignment\n");}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 293 "yyy.y" /* yacc.c:1646  */
    { int j; (yyval.node.place)=(yyvsp[-1].node.place);strcat((yyval.node.place),(yyvsp[0].node.place)); 
				   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[0].node.code[j]);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 295 "yyy.y" /* yacc.c:1646  */
    {int j=0;  (yyval.node.place)=(yyvsp[-1].node.place);strcat((yyval.node.place),(yyvsp[0].node.place)); 
				    for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[0].node.code[j]);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 297 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 299 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 300 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-3].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" == ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 317 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-3].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" != ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 334 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-2].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" > ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 351 "yyy.y" /* yacc.c:1646  */
    {(yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-2].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" < ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 368 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-3].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" <= ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 385 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 			   int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 			   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
							   char *str1,*str2; str1=level(); str2=level();
							   (yyval.node.code[i+j])=strdup("if ");strcat((yyval.node.code[i+j]),(yyvsp[-3].node.place));
							   strcat((yyval.node.code[i+j]),strdup(" >= ")); strcat((yyval.node.code[i+j]),(yyvsp[0].node.place));
							   strcat((yyval.node.code[i+j])," goto ");  strcat((yyval.node.code[i+j]),str1);
							   (yyval.node.code[i+j+1])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+1])," = 0"); 
							   (yyval.node.code[i+j+2])=strdup("goto "); strcat((yyval.node.code[i+j+2]),str2);
							   (yyval.node.code[i+j+3])=str1;
							   (yyval.node.code[i+j+4])=strdup((yyval.node.place));strcat((yyval.node.code[i+j+4])," = 1"); 
						           (yyval.node.code[i+j+5])=str2;
				 			   /*char *str ;   str=strdup($<node.place>$);  strcat(str," = ");
                                                           strcat(str,$<node.place>1); strcat(str ,strdup(" == ")); strcat(str,$<node.place>4);
                                 			   $<node.code[i+j]>$=strdup(str); */
				 			   (yyval.node.code[i+j+6])=NULL;
							 }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 404 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 405 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]); 
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str ;
				 str=strdup((yyval.node.place));
				 strcat(str,strdup(" = ")); strcat(str,(yyvsp[-2].node.place)); strcat(str ," + "); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 414 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" - ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 422 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-3].node.place)); strcat(str ,strdup(" || ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 432 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 433 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str,strdup(" = ")); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" + ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 441 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" - ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 449 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-3].node.place)); strcat(str ,strdup(" || ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 458 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=(yyvsp[-2].node.place); strcat((yyval.node.place),"[]");}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 459 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node.place)=(yyvsp[-2].node.place); strcat((yyval.node.place),"[]");}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 460 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node.place)=(yyvsp[-2].node.place); strcat((yyval.node.place),"[]");}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 462 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 463 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str;str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" * ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
 			       }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 471 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" / ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 479 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-3].node.place)); strcat(str ,strdup(" && ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 487 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" % ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 496 "yyy.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);     }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 497 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" * ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
                               }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 505 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" / ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
                               }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 513 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-3].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-3].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-3].node.place)); strcat(str ,strdup(" && ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 521 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
				 int i=0,j=0; for(i=0;(yyvsp[-2].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-2].node.code[i]);
				 for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);
				 char *str; str=strdup((yyval.node.place));
				 strcat(str," = "); strcat(str,(yyvsp[-2].node.place)); strcat(str ,strdup(" % ")); strcat(str,(yyvsp[0].node.place));
                                 (yyval.node.code[i+j])=strdup(str); 
				 (yyval.node.code[i+j+1])=NULL;
			       }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 530 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node);     }
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 531 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=code1();
					    char *str; str=strdup((yyval.node.place)); int i=0;
					    if((yyvsp[0].node.code[0])!=NULL) { (yyval.node.code[0])=strdup((yyvsp[0].node.code[0]));  i=1; }
					    else i=0;
					    strcat(str," = ");strcat(str,strdup(" - ")); strcat(str,(yyvsp[0].node.place)); 
					    (yyval.node.code[i])=strdup(str); (yyval.node.code[i+1])=NULL;	 
                                           }
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 539 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[-1].node); }
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 540 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 541 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 542 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 543 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 544 "yyy.y" /* yacc.c:1646  */
    { int j=0; (yyval.node.place)=strdup("!"); strcat((yyval.node.place),(yyvsp[0].node.place)); 
				   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[0].node.code[j]); }
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 546 "yyy.y" /* yacc.c:1646  */
    {(yyval.node.place)=strdup("("); strcat((yyval.node.place),(yyvsp[-2].node.place)); (yyval.node.place)=strdup(")");
					strcat((yyval.node.place),(yyvsp[0].node.place));/*may write some code*/}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 551 "yyy.y" /* yacc.c:1646  */
    {(yyval.node.place)=strdup("["); strcat((yyval.node.place),(yyvsp[-1].node.place));strcat((yyval.node.place),"]"); 
				   int j=0; for(j=0;(yyvsp[-1].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[-1].node.code[j]);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 554 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node.place)=strdup("."); strcat((yyval.node.place),(yyvsp[0].node.place));}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 556 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=strdup((yyvsp[0].node.place));
				   int i=0; for(i=0;(yyvsp[0].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[0].node.code[i]);	
				 }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 559 "yyy.y" /* yacc.c:1646  */
    {(yyval.node.place)=strdup((yyvsp[-1].node.place)); strcat((yyval.node.place),(yyvsp[0].node.place));
				   int i=0,j=0; for(i=0;(yyvsp[-1].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[-1].node.code[i]);
				   for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[i+j])=(yyvsp[0].node.code[j]);(yyval.node.code[i+j])=NULL;}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 563 "yyy.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 564 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=strdup((yyvsp[0].node.place));
				   int i=0; for(i=0;(yyvsp[0].node.code[i])!=NULL;i++) (yyval.node.code[i])=(yyvsp[0].node.code[i]);	
				 }
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 568 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[-2].node); strcat((yyval.node.place),"()");}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 569 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=strdup((yyvsp[-1].node.place)); strcat((yyval.node.place),(yyvsp[0].node.place)); 
				   int j=0; for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[0].node.code[j]);  }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 571 "yyy.y" /* yacc.c:1646  */
    { (yyval.node.place)=strdup((yyvsp[-1].node.place)); strcat((yyval.node.place),(yyvsp[0].node.place)); 
				       int j=0;	for(j=0;(yyvsp[0].node.code[j])!=NULL;j++) (yyval.node.code[j])=(yyvsp[0].node.code[j]);}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 574 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[-2].node); /* may need to write code*/ }
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 575 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[-2].node); /* may need to write code*/ }
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 577 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 578 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 579 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 581 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 582 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 584 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 585 "yyy.y" /* yacc.c:1646  */
    {  (yyval.node)=(yyvsp[0].node); }
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2674 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 587 "yyy.y" /* yacc.c:1906  */

int main(void)
{
   yyparse();   
}
int yyerror(char *s)
{
    printf(": %s",s);
    //exit(1);
}
