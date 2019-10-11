/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     IMPORT = 260,
     CLASS = 261,
     EXTENDS = 262,
     PRIVATE = 263,
     PUBLIC = 264,
     STATIC = 265,
     VOID = 266,
     IF = 267,
     ELSE = 268,
     WHILE = 269,
     LOOP = 270,
     RETURN = 271,
     PRINT = 272,
     NULL = 273,
     NEW = 274,
     INT = 275,
     REAL = 276,
     LBRACE = 277,
     RBRACE = 278,
     LPAREN = 279,
     RPAREN = 280,
     LBRACKET = 281,
     RBRACKET = 282,
     COMMA = 283,
     DOT = 284,
     SEMICOLON = 285,
     ASSIGN = 286,
     LESS = 287,
     GREATER = 288,
     EQUAL = 289,
     NOT_EQUAL = 290,
     PLUS = 291,
     MINUS = 292,
     MULTIPLY = 293,
     DIVIDE = 294
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define IMPORT 260
#define CLASS 261
#define EXTENDS 262
#define PRIVATE 263
#define PUBLIC 264
#define STATIC 265
#define VOID 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define LOOP 270
#define RETURN 271
#define PRINT 272
#define NULL 273
#define NEW 274
#define INT 275
#define REAL 276
#define LBRACE 277
#define RBRACE 278
#define LPAREN 279
#define RPAREN 280
#define LBRACKET 281
#define RBRACKET 282
#define COMMA 283
#define DOT 284
#define SEMICOLON 285
#define ASSIGN 286
#define LESS 287
#define GREATER 288
#define EQUAL 289
#define NOT_EQUAL 290
#define PLUS 291
#define MINUS 292
#define MULTIPLY 293
#define DIVIDE 294




/* Copy the first part of user declarations.  */
#line 1 "toy_lang_grammar.y"

       #include "node.h"
       CompilationUnit* root;

       extern int yylex();
       void yyerror(const char *s) { printf("ERROR: %sn", s); }


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "toy_lang_grammar.y"
{
       CompilationUnit* cpunit;
       ClassDeclarations* cldcls;
       ClassDeclaration* cldcl;
       Imports* imps;
       LocalDeclarations* lcdcls;
       LocalDeclaration* lcdcl;
       FieldDeclaration* fld;
       MethodDeclaration* mtd;
       Statements* stms;
       Statement* stm;
       ClassMembers* clsmbs;
       ClassMember* clsmb;
       ParameterList* plist;
       Parameter* par;
       ArgumentList* arglist;
       Expression* exp;
       CompoundNames* cpnames;
       CompoundName* cpname;
       Terms* trms;
       Term* trm;
       Factor* fctr;
       Factors* fctrs;
       MultSign* mlsn;
       AddSign* adsn;
       Extension* extns;
       Body* bd;
       Visibility* vsblt;
       Staticness* stcs;
       Type* tp;
       NewType* ntp;
       ArrayTail* arrt;
       LeftPart* lfpt;
       Block* blck;
       Relation* rlt;
       RelationalOperator* rltop;
       MethodType* mtp;
       Import* imp;

       std::string *string;
}
/* Line 193 of yacc.c.  */
#line 224 "parcer.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 237 "parcer.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    14,    15,    18,    24,
      31,    32,    35,    38,    42,    44,    47,    49,    51,    57,
      58,    60,    62,    63,    65,    72,    75,    79,    81,    85,
      88,    90,    92,    97,    99,   102,   106,   108,   111,   113,
     115,   117,   119,   121,   123,   125,   130,   132,   137,   139,
     143,   149,   157,   163,   166,   170,   175,   181,   183,   187,
     191,   194,   198,   200,   204,   206,   208,   210,   212,   215,
     219,   221,   223,   224,   228,   231,   232,   236,   238,   240,
     242,   244,   246,   249,   255,   257,   259,   261,   264,   267,
     270,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    44,    -1,    -1,    43,    42,    -1,
       5,     3,    30,    -1,    -1,    45,    44,    -1,     6,    65,
      46,    30,    47,    -1,     9,     6,    65,    46,    30,    47,
      -1,    -1,     7,     3,    -1,    22,    23,    -1,    22,    48,
      23,    -1,    49,    -1,    48,    49,    -1,    50,    -1,    53,
      -1,    51,    52,    83,     3,    30,    -1,    -1,     8,    -1,
       9,    -1,    -1,    10,    -1,    51,    52,    57,     3,    54,
      58,    -1,    24,    25,    -1,    24,    55,    25,    -1,    56,
      -1,    55,    28,    56,    -1,    83,     3,    -1,    83,    -1,
      11,    -1,    22,    59,    61,    23,    -1,    60,    -1,    59,
      60,    -1,    83,     3,    30,    -1,    62,    -1,    61,    62,
      -1,    63,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    71,    -1,    72,    -1,    64,    31,    75,    30,    -1,
      65,    -1,    65,    26,    75,    27,    -1,     3,    -1,    65,
      29,     3,    -1,    12,    24,    73,    25,    62,    -1,    12,
      24,    73,    25,    62,    13,    62,    -1,    14,    73,    15,
      62,    30,    -1,    16,    30,    -1,    16,    75,    30,    -1,
      65,    24,    25,    30,    -1,    65,    24,    70,    25,    30,
      -1,    75,    -1,    70,    28,    75,    -1,    17,    75,    30,
      -1,    22,    23,    -1,    22,    61,    23,    -1,    75,    -1,
      75,    74,    75,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    78,    77,    -1,    76,    78,    77,    -1,    36,
      -1,    37,    -1,    -1,    76,    78,    77,    -1,    81,    79,
      -1,    -1,    80,    81,    79,    -1,    38,    -1,    39,    -1,
       4,    -1,    64,    -1,    18,    -1,    19,    82,    -1,    19,
      82,    26,    75,    27,    -1,    20,    -1,    21,    -1,     3,
      -1,    20,    84,    -1,    21,    84,    -1,     3,    84,    -1,
      -1,    26,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   141,   142,   146,   150,   151,   155,   156,
     160,   161,   165,   166,   170,   171,   175,   176,   180,   184,
     185,   186,   190,   191,   195,   200,   201,   205,   206,   210,
     214,   215,   219,   223,   224,   228,   232,   233,   237,   238,
     239,   240,   241,   242,   243,   247,   251,   252,   256,   257,
     261,   262,   266,   270,   271,   275,   276,   280,   281,   285,
     289,   290,   294,   295,   299,   300,   301,   302,   306,   307,
     311,   312,   316,   317,   321,   325,   326,   330,   331,   335,
     336,   337,   338,   339,   343,   344,   345,   349,   350,   351,
     355,   356
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "IMPORT",
  "CLASS", "EXTENDS", "PRIVATE", "PUBLIC", "STATIC", "VOID", "IF", "ELSE",
  "WHILE", "LOOP", "RETURN", "PRINT", "NULL", "NEW", "INT", "REAL",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "COMMA",
  "DOT", "SEMICOLON", "ASSIGN", "LESS", "GREATER", "EQUAL", "NOT_EQUAL",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "$accept", "CompilationUnit",
  "Imports", "Import", "ClassDeclarations", "ClassDeclaration",
  "Extension", "ClassBody", "ClassMembers", "ClassMember",
  "FieldDeclaration", "Visibility", "Staticness", "MethodDeclaration",
  "Parameters", "ParameterList", "Parameter", "MethodType", "Body",
  "LocalDeclarations", "LocalDeclaration", "Statements", "Statement",
  "Assignment", "LeftPart", "CompoundName", "IfStatement",
  "WhileStatement", "ReturnStatement", "CallStatement", "ArgumentList",
  "PrintStatement", "Block", "Relation", "RelationalOperator",
  "Expression", "AddSign", "Terms", "Term", "Factors", "MultSign",
  "Factor", "NewType", "Type", "ArrayTail", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    44,    44,    45,    45,
      46,    46,    47,    47,    48,    48,    49,    49,    50,    51,
      51,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      57,    57,    58,    59,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    63,    64,    64,    65,    65,
      66,    66,    67,    68,    68,    69,    69,    70,    70,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    83,
      84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     3,     0,     2,     5,     6,
       0,     2,     2,     3,     1,     2,     1,     1,     5,     0,
       1,     1,     0,     1,     6,     2,     3,     1,     3,     2,
       1,     1,     4,     1,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     1,     3,
       5,     7,     5,     2,     3,     4,     5,     1,     3,     3,
       2,     3,     1,     3,     1,     1,     1,     1,     2,     3,
       1,     1,     0,     3,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     5,     1,     1,     1,     2,     2,     2,
       0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     6,     3,     0,     1,     0,     0,     2,
       6,     4,     5,    48,    10,     0,     7,     0,     0,     0,
      10,    11,    49,     0,     0,    19,     8,     0,    20,    21,
      12,    19,    14,    16,    22,    17,     9,    13,    15,    23,
       0,    90,    31,    90,    90,     0,     0,     0,    89,    87,
      88,     0,     0,    91,     0,     0,    18,    25,     0,    27,
       0,     0,    24,    26,     0,    29,     0,    33,     0,    28,
      48,     0,     0,     0,     0,     0,    34,     0,    36,    38,
       0,    46,    39,    40,    41,    42,    43,    44,     0,     0,
      79,    81,     0,    70,    71,    80,    46,     0,    62,     0,
      72,    75,    53,     0,     0,    60,     0,    32,    37,     0,
       0,     0,    35,     0,    86,    84,    85,    82,     0,    64,
      65,    66,    67,     0,    72,     0,    68,    77,    78,    74,
       0,    54,    59,    61,     0,     0,     0,    57,     0,     0,
       0,     0,    63,    69,    72,    75,    45,    55,     0,     0,
      47,    50,     0,    52,    73,    76,    56,    58,     0,    83,
      51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     9,    10,    19,    26,    31,    32,
      33,    34,    40,    35,    55,    58,    59,    45,    62,    66,
      67,    77,    78,    79,    95,    96,    82,    83,    84,    85,
     136,    86,    87,    97,   123,    98,    99,   126,   100,   129,
     130,   101,   117,    60,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
      12,    21,    28,    10,    12,   -15,  -116,    39,    38,  -116,
      10,  -116,  -116,  -116,    19,    39,  -116,    49,    53,    41,
      19,  -116,  -116,    60,    58,   134,  -116,    60,  -116,  -116,
    -116,   146,  -116,  -116,    76,  -116,  -116,  -116,  -116,  -116,
      74,    71,  -116,    71,    71,    99,   105,    86,  -116,  -116,
    -116,    94,    91,  -116,    15,   103,  -116,  -116,    37,  -116,
     130,    34,  -116,  -116,    34,  -116,   124,  -116,   144,  -116,
       8,   113,    54,     2,    54,    84,  -116,   100,  -116,  -116,
     118,   135,  -116,  -116,  -116,  -116,  -116,  -116,   126,    54,
    -116,  -116,    89,  -116,  -116,  -116,    40,   145,   133,   101,
     -14,    92,  -116,   132,   140,  -116,   112,  -116,  -116,    54,
      42,    54,  -116,   138,  -116,  -116,  -116,   147,   136,  -116,
    -116,  -116,  -116,    54,   -14,   101,  -116,  -116,  -116,  -116,
     101,  -116,  -116,  -116,   141,   142,    56,  -116,   148,   136,
      54,   149,  -116,  -116,   -14,    92,  -116,  -116,   150,    54,
    -116,   161,   151,  -116,  -116,  -116,  -116,  -116,   136,  -116,
    -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,   172,  -116,   167,  -116,   162,   154,  -116,   152,
    -116,  -116,  -116,  -116,  -116,  -116,   120,  -116,  -116,  -116,
     119,   111,   -75,  -116,   -65,    -7,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,    98,  -116,   -60,   -97,  -115,   -92,    43,
    -116,    59,  -116,   -36,    32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -91
static const yytype_int16 yytable[] =
{
      14,    80,   108,   125,    46,    13,    90,   124,    20,   143,
      80,   -90,    80,   103,   104,    12,     7,     1,    41,     8,
      91,    92,    93,    94,     5,    68,    17,   125,     6,   154,
      68,   108,   102,   144,    47,    43,    44,    41,    93,    94,
      57,    80,    13,   141,    15,    13,    90,   125,    18,   134,
     137,   138,    21,    80,    43,    44,    22,    13,    90,    81,
      91,    92,    63,   142,   151,    64,   111,   135,    81,    18,
      81,    23,    91,    92,    80,    49,    50,    41,    93,    94,
     152,   148,    25,   160,   149,    42,    39,    13,    27,   157,
      93,    94,   114,    80,    43,    44,    71,    47,    72,    81,
      73,    74,    51,    13,    13,    90,    75,   105,    52,   115,
     116,    81,    71,    53,    72,    13,    73,    74,    54,    91,
      92,    56,    75,   107,    71,    61,    72,    70,    73,    74,
     127,   128,    81,    65,    75,   133,    71,    89,    72,    13,
      73,    74,    28,    29,    43,    44,    75,    88,    71,   109,
      72,    81,    73,    74,    28,    29,   112,    30,    75,   110,
     118,   111,   131,   139,    18,   119,   120,   121,   122,    37,
     132,   146,   147,   140,   158,   150,    11,    16,   159,   153,
     156,    36,    24,    38,    69,    76,   106,   113,   155,   145
};

static const yytype_uint8 yycheck[] =
{
       7,    66,    77,   100,    40,     3,     4,    99,    15,   124,
      75,     3,    77,    73,    74,    30,     6,     5,     3,     9,
      18,    19,    36,    37,     3,    61,     7,   124,     0,   144,
      66,   106,    30,   125,    26,    20,    21,     3,    36,    37,
      25,   106,     3,   118,     6,     3,     4,   144,    29,   109,
     110,   111,     3,   118,    20,    21,     3,     3,     4,    66,
      18,    19,    25,   123,   139,    28,    26,    25,    75,    29,
      77,    30,    18,    19,   139,    43,    44,     3,    36,    37,
     140,    25,    22,   158,    28,    11,    10,     3,    30,   149,
      36,    37,     3,   158,    20,    21,    12,    26,    14,   106,
      16,    17,     3,     3,     3,     4,    22,    23,     3,    20,
      21,   118,    12,    27,    14,     3,    16,    17,    24,    18,
      19,    30,    22,    23,    12,    22,    14,     3,    16,    17,
      38,    39,   139,     3,    22,    23,    12,    24,    14,     3,
      16,    17,     8,     9,    20,    21,    22,     3,    12,    31,
      14,   158,    16,    17,     8,     9,    30,    23,    22,    24,
      15,    26,    30,    25,    29,    32,    33,    34,    35,    23,
      30,    30,    30,    26,    13,    27,     4,    10,    27,    30,
      30,    27,    20,    31,    64,    66,    75,    89,   145,   130
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    41,    42,    43,     3,     0,     6,     9,    44,
      45,    42,    30,     3,    65,     6,    44,     7,    29,    46,
      65,     3,     3,    30,    46,    22,    47,    30,     8,     9,
      23,    48,    49,    50,    51,    53,    47,    23,    49,    10,
      52,     3,    11,    20,    21,    57,    83,    26,    84,    84,
      84,     3,     3,    27,    24,    54,    30,    25,    55,    56,
      83,    22,    58,    25,    28,     3,    59,    60,    83,    56,
       3,    12,    14,    16,    17,    22,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    72,     3,    24,
       4,    18,    19,    36,    37,    64,    65,    73,    75,    76,
      78,    81,    30,    75,    75,    23,    61,    23,    62,    31,
      24,    26,    30,    73,     3,    20,    21,    82,    15,    32,
      33,    34,    35,    74,    78,    76,    77,    38,    39,    79,
      80,    30,    30,    23,    75,    25,    70,    75,    75,    25,
      26,    62,    75,    77,    78,    81,    30,    30,    25,    28,
      27,    62,    75,    30,    77,    79,    30,    75,    13,    27,
      62
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 137 "toy_lang_grammar.y"
    { root = new CompilationUnit(*(yyvsp[(1) - (2)].imps), *(yyvsp[(2) - (2)].cldcls)); ;}
    break;

  case 3:
#line 141 "toy_lang_grammar.y"
    { (yyval.imps) = new Imports(); ;}
    break;

  case 4:
#line 142 "toy_lang_grammar.y"
    { (yyvsp[(2) - (2)].imps)->push_back((yyvsp[(1) - (2)].imp)); ;}
    break;

  case 5:
#line 146 "toy_lang_grammar.y"
    { (yyval.imp) = new Import(*(yyvsp[(2) - (3)].string)); ;}
    break;

  case 6:
#line 150 "toy_lang_grammar.y"
    { (yyval.cldcls) = new ClassDeclarations(); ;}
    break;

  case 7:
#line 151 "toy_lang_grammar.y"
    { (yyvsp[(2) - (2)].cldcls)->push_back((yyvsp[(1) - (2)].cldcl)); ;}
    break;

  case 8:
#line 155 "toy_lang_grammar.y"
    {(yyval.cldcl) = new ClassDeclaration(*(yyvsp[(2) - (5)].cpnames), (yyvsp[(3) - (5)].extns), *(yyvsp[(5) - (5)].clsmbs));;}
    break;

  case 9:
#line 156 "toy_lang_grammar.y"
    {(yyval.cldcl) = new ClassDeclaration(*(yyvsp[(3) - (6)].cpnames), (yyvsp[(4) - (6)].extns), *(yyvsp[(6) - (6)].clsmbs));;}
    break;

  case 10:
#line 160 "toy_lang_grammar.y"
    { (yyval.extns) = new Extension(); ;}
    break;

  case 11:
#line 161 "toy_lang_grammar.y"
    {(yyval.extns) = new Extension(*(yyvsp[(2) - (2)].string));;}
    break;

  case 12:
#line 165 "toy_lang_grammar.y"
    {(yyval.clsmbs) = new ClassMembers();;}
    break;

  case 13:
#line 166 "toy_lang_grammar.y"
    {(yyval.clsmbs) = (yyvsp[(2) - (3)].clsmbs);;}
    break;

  case 14:
#line 170 "toy_lang_grammar.y"
    { (yyval.clsmbs) = new ClassMembers(); (yyval.clsmbs)->push_back((yyvsp[(1) - (1)].clsmb)) ;}
    break;

  case 15:
#line 171 "toy_lang_grammar.y"
    { (yyvsp[(1) - (2)].clsmbs)->push_back((yyvsp[(2) - (2)].clsmb)); ;}
    break;

  case 16:
#line 175 "toy_lang_grammar.y"
    { (yyval.clsmb) = (yyvsp[(1) - (1)].fld); ;}
    break;

  case 17:
#line 176 "toy_lang_grammar.y"
    { (yyval.clsmb) = (yyvsp[(1) - (1)].mtd); ;}
    break;

  case 18:
#line 180 "toy_lang_grammar.y"
    { (yyval.fld) = new FieldDeclaration(*(yyvsp[(4) - (5)].string), (yyvsp[(1) - (5)].vsblt), (yyvsp[(2) - (5)].stcs), (yyvsp[(3) - (5)].tp)); ;}
    break;

  case 19:
#line 184 "toy_lang_grammar.y"
    { (yyval.vsblt) = new Visibility(); ;}
    break;

  case 20:
#line 185 "toy_lang_grammar.y"
    { (yyval.vsblt) = new Private(); ;}
    break;

  case 21:
#line 186 "toy_lang_grammar.y"
    { (yyval.vsblt) = new Public(); ;}
    break;

  case 22:
#line 190 "toy_lang_grammar.y"
    { (yyval.stcs) = new Staticness(); ;}
    break;

  case 23:
#line 191 "toy_lang_grammar.y"
    { (yyval.stcs) = new Static(); ;}
    break;

  case 24:
#line 196 "toy_lang_grammar.y"
    { (yyval.mtd) = new MethodDeclaration(*(yyvsp[(4) - (6)].string), (yyvsp[(1) - (6)].vsblt), (yyvsp[(2) - (6)].stcs), (yyvsp[(3) - (6)].mtp), *(yyvsp[(5) - (6)].plist), (yyvsp[(6) - (6)].bd)); ;}
    break;

  case 25:
#line 200 "toy_lang_grammar.y"
    { (yyval.plist) = new ParameterList(); ;}
    break;

  case 26:
#line 201 "toy_lang_grammar.y"
    { (yyval.plist) = (yyvsp[(2) - (3)].plist); ;}
    break;

  case 27:
#line 205 "toy_lang_grammar.y"
    { (yyval.plist) = new ParameterList(); (yyval.plist)->push_back((yyvsp[(1) - (1)].par)); ;}
    break;

  case 28:
#line 206 "toy_lang_grammar.y"
    { (yyvsp[(1) - (3)].plist)->push_back((yyvsp[(3) - (3)].par)); ;}
    break;

  case 29:
#line 210 "toy_lang_grammar.y"
    { (yyval.par) = new Parameter(*(yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].tp)); ;}
    break;

  case 30:
#line 214 "toy_lang_grammar.y"
    { (yyval.mtp) = new CustomMethodType((yyvsp[(1) - (1)].tp)); ;}
    break;

  case 31:
#line 215 "toy_lang_grammar.y"
    { (yyval.mtp) = new VoidMethodType(); ;}
    break;

  case 32:
#line 219 "toy_lang_grammar.y"
    { (yyval.bd) = new Body(*(yyvsp[(2) - (4)].lcdcls), *(yyvsp[(3) - (4)].stms)); ;}
    break;

  case 33:
#line 223 "toy_lang_grammar.y"
    { (yyval.lcdcls) = new LocalDeclarations(); (yyval.lcdcls)->push_back((yyvsp[(1) - (1)].lcdcl)); ;}
    break;

  case 34:
#line 224 "toy_lang_grammar.y"
    { (yyvsp[(1) - (2)].lcdcls)->push_back((yyvsp[(2) - (2)].lcdcl)); ;}
    break;

  case 35:
#line 228 "toy_lang_grammar.y"
    { (yyval.lcdcl) = new LocalDeclaration(*(yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].tp)); ;}
    break;

  case 36:
#line 232 "toy_lang_grammar.y"
    { (yyval.stms) = new Statements(); (yyval.stms)->push_back((yyvsp[(1) - (1)].stm)); ;}
    break;

  case 37:
#line 233 "toy_lang_grammar.y"
    { (yyvsp[(1) - (2)].stms)->push_back((yyvsp[(2) - (2)].stm)); ;}
    break;

  case 38:
#line 237 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 39:
#line 238 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 40:
#line 239 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 41:
#line 240 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 42:
#line 241 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 43:
#line 242 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].stm); ;}
    break;

  case 44:
#line 243 "toy_lang_grammar.y"
    { (yyval.stm) = (yyvsp[(1) - (1)].blck); ;}
    break;

  case 45:
#line 247 "toy_lang_grammar.y"
    { (yyval.stm) = new Assignment((yyvsp[(1) - (4)].lfpt), (yyvsp[(3) - (4)].exp)); ;}
    break;

  case 46:
#line 251 "toy_lang_grammar.y"
    { (yyval.lfpt) = new LeftPart(*(yyvsp[(1) - (1)].cpnames)); ;}
    break;

  case 47:
#line 252 "toy_lang_grammar.y"
    { (yyval.lfpt) = new LeftPart(*(yyvsp[(1) - (4)].cpnames), (yyvsp[(3) - (4)].exp)); ;}
    break;

  case 48:
#line 256 "toy_lang_grammar.y"
    { (yyval.cpnames) = new CompoundNames(); (yyval.cpnames)->push_back(new CompoundName(*(yyvsp[(1) - (1)].string))); ;}
    break;

  case 49:
#line 257 "toy_lang_grammar.y"
    { (yyvsp[(1) - (3)].cpnames)->push_back(new CompoundName(*(yyvsp[(3) - (3)].string))); ;}
    break;

  case 50:
#line 261 "toy_lang_grammar.y"
    { (yyval.stm) = new If((yyvsp[(3) - (5)].rlt), (yyvsp[(5) - (5)].stm)); ;}
    break;

  case 51:
#line 262 "toy_lang_grammar.y"
    { (yyval.stm) = new If((yyvsp[(3) - (7)].rlt), (yyvsp[(5) - (7)].stm), (yyvsp[(7) - (7)].stm)); ;}
    break;

  case 52:
#line 266 "toy_lang_grammar.y"
    { (yyval.stm) = new While((yyvsp[(2) - (5)].rlt), (yyvsp[(4) - (5)].stm)); ;}
    break;

  case 53:
#line 270 "toy_lang_grammar.y"
    { (yyval.stm) = new Return(); ;}
    break;

  case 54:
#line 271 "toy_lang_grammar.y"
    { (yyval.stm) = new Return((yyvsp[(2) - (3)].exp)); ;}
    break;

  case 55:
#line 275 "toy_lang_grammar.y"
    { (yyval.stm) = new Call(*(yyvsp[(1) - (4)].cpnames)); ;}
    break;

  case 56:
#line 276 "toy_lang_grammar.y"
    { (yyval.stm) = new Call(*(yyvsp[(1) - (5)].cpnames), *(yyvsp[(3) - (5)].arglist)); ;}
    break;

  case 57:
#line 280 "toy_lang_grammar.y"
    { (yyval.arglist) = new ArgumentList(); (yyval.arglist)->push_back((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 58:
#line 281 "toy_lang_grammar.y"
    { (yyvsp[(1) - (3)].arglist)->push_back((yyvsp[(3) - (3)].exp)); ;}
    break;

  case 59:
#line 285 "toy_lang_grammar.y"
    { (yyval.stm) = new Print((yyvsp[(2) - (3)].exp)); ;}
    break;

  case 60:
#line 289 "toy_lang_grammar.y"
    { (yyval.blck) = new Block(); ;}
    break;

  case 61:
#line 290 "toy_lang_grammar.y"
    { (yyval.blck) = new Block(*(yyvsp[(2) - (3)].stms)); ;}
    break;

  case 62:
#line 294 "toy_lang_grammar.y"
    { (yyval.rlt) = new Relation((yyvsp[(1) - (1)].exp)); ;}
    break;

  case 63:
#line 295 "toy_lang_grammar.y"
    { (yyval.rlt) = new Relation((yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].rltop), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 64:
#line 299 "toy_lang_grammar.y"
    { (yyval.rltop) = new Less(); ;}
    break;

  case 65:
#line 300 "toy_lang_grammar.y"
    { (yyval.rltop) = new Greater(); ;}
    break;

  case 66:
#line 301 "toy_lang_grammar.y"
    { (yyval.rltop) = new Equal(); ;}
    break;

  case 67:
#line 302 "toy_lang_grammar.y"
    { (yyval.rltop) = new NotEqual(); ;}
    break;

  case 68:
#line 306 "toy_lang_grammar.y"
    { (yyval.exp) = new Expression((yyvsp[(1) - (2)].trm), (yyvsp[(2) - (2)].trms)); ;}
    break;

  case 69:
#line 307 "toy_lang_grammar.y"
    { (yyval.exp) = new Expression((yyvsp[(2) - (3)].trm), (yyvsp[(3) - (3)].trms), (yyvsp[(1) - (3)].adsn)); ;}
    break;

  case 70:
#line 311 "toy_lang_grammar.y"
    { (yyval.adsn) = new Plus(); ;}
    break;

  case 71:
#line 312 "toy_lang_grammar.y"
    { (yyval.adsn) = new Minus(); ;}
    break;

  case 72:
#line 316 "toy_lang_grammar.y"
    { (yyval.trms) = new Terms(); ;}
    break;

  case 73:
#line 317 "toy_lang_grammar.y"
    { TermPair* tp = new TermPair((yyvsp[(1) - (3)].adsn), (yyvsp[(2) - (3)].trm)); (yyvsp[(3) - (3)].trms)->terms.push_back(*tp); ;}
    break;

  case 74:
#line 321 "toy_lang_grammar.y"
    { (yyval.trm) = new Term((yyvsp[(1) - (2)].fctr), (yyvsp[(2) - (2)].fctrs)); ;}
    break;

  case 75:
#line 325 "toy_lang_grammar.y"
    { (yyval.fctrs) = new Factors(); ;}
    break;

  case 76:
#line 326 "toy_lang_grammar.y"
    { FactorPair* fp = new FactorPair((yyvsp[(1) - (3)].mlsn), (yyvsp[(2) - (3)].fctr)); (yyvsp[(3) - (3)].fctrs)->factors.push_back(*fp); ;}
    break;

  case 77:
#line 330 "toy_lang_grammar.y"
    { (yyval.mlsn) = new Multiply(); ;}
    break;

  case 78:
#line 331 "toy_lang_grammar.y"
    { (yyval.mlsn) = new Divide(); ;}
    break;

  case 79:
#line 335 "toy_lang_grammar.y"
    { (yyval.fctr) = new Factor(*(yyvsp[(1) - (1)].string)); ;}
    break;

  case 80:
#line 336 "toy_lang_grammar.y"
    { (yyval.fctr) = new Factor((yyvsp[(1) - (1)].lfpt)); ;}
    break;

  case 81:
#line 337 "toy_lang_grammar.y"
    { (yyval.fctr) = new Factor(); ;}
    break;

  case 82:
#line 338 "toy_lang_grammar.y"
    { (yyval.fctr) = new Factor((yyvsp[(2) - (2)].ntp)); ;}
    break;

  case 83:
#line 339 "toy_lang_grammar.y"
    { (yyval.fctr) = new Factor((yyvsp[(2) - (5)].ntp), (yyvsp[(4) - (5)].exp)); ;}
    break;

  case 84:
#line 343 "toy_lang_grammar.y"
    { (yyval.ntp) = new NewInt(); ;}
    break;

  case 85:
#line 344 "toy_lang_grammar.y"
    { (yyval.ntp) = new NewReal(); ;}
    break;

  case 86:
#line 345 "toy_lang_grammar.y"
    { (yyval.ntp) = new NewCustom(*(yyvsp[(1) - (1)].string)); ;}
    break;

  case 87:
#line 349 "toy_lang_grammar.y"
    { (yyval.tp) = new Int(); ;}
    break;

  case 88:
#line 350 "toy_lang_grammar.y"
    { (yyval.tp) = new Real(); ;}
    break;

  case 89:
#line 351 "toy_lang_grammar.y"
    { (yyval.tp) = new Custom(*(yyvsp[(1) - (2)].string)); ;}
    break;

  case 90:
#line 355 "toy_lang_grammar.y"
    { (yyval.arrt) = new ArrayTail(); ;}
    break;

  case 91:
#line 356 "toy_lang_grammar.y"
    { (yyval.arrt) = new ArrayTail(); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2042 "parcer.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 359 "toy_lang_grammar.y"

