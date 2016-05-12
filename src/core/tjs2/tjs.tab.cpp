#include "tjsCommHead.h"
/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax/tjs.y"

/*---------------------------------------------------------------------------*/
/*
	TJS2 Script Engine
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
/*---------------------------------------------------------------------------*/
/* tjs.y */
/* TJS2 bison input file */


#include <malloc.h>

#include "tjsInterCodeGen.h"
#include "tjsScriptBlock.h"
#include "tjsError.h"
#include "tjsArray.h"
#include "tjsDictionary.h"

#define YYMALLOC	::malloc
#define YYREALLOC	::realloc
#define YYFREE		::free

/* param */
#define YYPARSE_PARAM pm
#define YYLEX_PARAM pm

/* script block */
#define sb ((tTJSScriptBlock*)pm)

/* current context */
#define cc (sb->GetCurrentContext())

/* current node */
#define cn (cc->GetCurrentNode())

/* lexical analyzer */
#define lx (sb->GetLexicalAnalyzer())


namespace TJS {

/* yylex/yyerror prototype decl */
#define YYLEX_PROTO_DECL int yylex(YYSTYPE *yylex, void *pm);

int __yyerror(char * msg, void *pm);


#define yyerror(msg) __yyerror(msg, pm);



/* Line 189 of yacc.c  */
#line 127 "tjs.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_COMMA = 258,
     T_EQUAL = 259,
     T_AMPERSANDEQUAL = 260,
     T_VERTLINEEQUAL = 261,
     T_CHEVRONEQUAL = 262,
     T_MINUSEQUAL = 263,
     T_PLUSEQUAL = 264,
     T_PERCENTEQUAL = 265,
     T_SLASHEQUAL = 266,
     T_BACKSLASHEQUAL = 267,
     T_ASTERISKEQUAL = 268,
     T_LOGICALOREQUAL = 269,
     T_LOGICALANDEQUAL = 270,
     T_RBITSHIFTEQUAL = 271,
     T_LARITHSHIFTEQUAL = 272,
     T_RARITHSHIFTEQUAL = 273,
     T_QUESTION = 274,
     T_LOGICALOR = 275,
     T_LOGICALAND = 276,
     T_VERTLINE = 277,
     T_CHEVRON = 278,
     T_AMPERSAND = 279,
     T_NOTEQUAL = 280,
     T_EQUALEQUAL = 281,
     T_DISCNOTEQUAL = 282,
     T_DISCEQUAL = 283,
     T_SWAP = 284,
     T_LT = 285,
     T_GT = 286,
     T_LTOREQUAL = 287,
     T_GTOREQUAL = 288,
     T_RARITHSHIFT = 289,
     T_LARITHSHIFT = 290,
     T_RBITSHIFT = 291,
     T_PERCENT = 292,
     T_SLASH = 293,
     T_BACKSLASH = 294,
     T_ASTERISK = 295,
     T_EXCRAMATION = 296,
     T_TILDE = 297,
     T_DECREMENT = 298,
     T_INCREMENT = 299,
     T_NEW = 300,
     T_DELETE = 301,
     T_TYPEOF = 302,
     T_PLUS = 303,
     T_MINUS = 304,
     T_SHARP = 305,
     T_DOLLAR = 306,
     T_ISVALID = 307,
     T_INVALIDATE = 308,
     T_INSTANCEOF = 309,
     T_LPARENTHESIS = 310,
     T_DOT = 311,
     T_LBRACKET = 312,
     T_THIS = 313,
     T_SUPER = 314,
     T_GLOBAL = 315,
     T_RBRACKET = 316,
     T_CLASS = 317,
     T_RPARENTHESIS = 318,
     T_COLON = 319,
     T_SEMICOLON = 320,
     T_LBRACE = 321,
     T_RBRACE = 322,
     T_CONTINUE = 323,
     T_FUNCTION = 324,
     T_ARROW = 325,
     T_DEBUGGER = 326,
     T_DEFAULT = 327,
     T_CASE = 328,
     T_EXTENDS = 329,
     T_FINALLY = 330,
     T_PROPERTY = 331,
     T_PRIVATE = 332,
     T_PUBLIC = 333,
     T_PROTECTED = 334,
     T_STATIC = 335,
     T_RETURN = 336,
     T_BREAK = 337,
     T_EXPORT = 338,
     T_IMPORT = 339,
     T_SWITCH = 340,
     T_IN = 341,
     T_INCONTEXTOF = 342,
     T_FOREACH = 343,
     T_FOR = 344,
     T_WHILE = 345,
     T_UNTIL = 346,
     T_DO = 347,
     T_LOOP = 348,
     T_IF = 349,
     T_UNLESS = 350,
     T_VAR = 351,
     T_CONST = 352,
     T_ENUM = 353,
     T_GOTO = 354,
     T_THROW = 355,
     T_TRY = 356,
     T_SETTER = 357,
     T_GETTER = 358,
     T_ELSE = 359,
     T_CATCH = 360,
     T_OMIT = 361,
     T_SYNCHRONIZED = 362,
     T_WITH = 363,
     T_INT = 364,
     T_REAL = 365,
     T_STRING = 366,
     T_OCTET = 367,
     T_FALSE = 368,
     T_NULL = 369,
     T_TRUE = 370,
     T_VOID = 371,
     T_NAN = 372,
     T_INFINITY = 373,
     T_UPLUS = 374,
     T_UMINUS = 375,
     T_EVAL = 376,
     T_POSTDECREMENT = 377,
     T_POSTINCREMENT = 378,
     T_IGNOREPROP = 379,
     T_PROPACCESS = 380,
     T_ARG = 381,
     T_EXPANDARG = 382,
     T_INLINEARRAY = 383,
     T_ARRAYARG = 384,
     T_INLINEDIC = 385,
     T_DICELM = 386,
     T_WITHDOT = 387,
     T_THIS_PROXY = 388,
     T_WITHDOT_PROXY = 389,
     T_ITERATOR = 390,
     T_ITERNEXT = 391,
     T_ITERCURRENT = 392,
     T_ARRAYCOMP = 393,
     T_CONSTVAL = 394,
     T_SYMBOL = 395,
     T_REGEXP = 396,
     T_VARIANT = 397
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "syntax/tjs.y"

	tjs_int			num;
	tTJSExprNode *		np;
	tTJSVarDeclList	*	dp;
	tTJSVarDeclList::Node *	dn;
//	tTJSListCompExpr *	lp;



/* Line 214 of yacc.c  */
#line 315 "tjs.tab.cpp"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 327 "tjs.tab.cpp"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  311
/* YYNRULES -- Number of states.  */
#define YYNSTATES  536

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    17,    19,
      21,    23,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    47,    50,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    74,    79,    80,    81,    89,
      90,    91,    99,   100,   101,   102,   113,   116,   117,   122,
     124,   125,   126,   134,   135,   136,   144,   145,   150,   151,
     162,   165,   166,   167,   169,   171,   172,   174,   175,   177,
     178,   179,   189,   193,   197,   200,   203,   206,   209,   211,
     215,   218,   223,   224,   227,   230,   233,   236,   239,   242,
     243,   250,   251,   257,   258,   262,   266,   272,   273,   275,
     277,   281,   284,   289,   291,   295,   296,   302,   305,   307,
     310,   314,   316,   317,   324,   326,   328,   331,   334,   335,
     343,   344,   348,   353,   356,   357,   363,   364,   367,   368,
     374,   376,   380,   382,   385,   389,   390,   397,   398,   405,
     409,   412,   413,   419,   421,   425,   430,   434,   436,   438,
     442,   444,   448,   450,   454,   458,   462,   466,   470,   474,
     478,   482,   486,   490,   494,   498,   502,   506,   510,   514,
     516,   522,   524,   528,   530,   534,   536,   540,   542,   546,
     548,   552,   554,   558,   562,   566,   570,   572,   576,   580,
     584,   588,   590,   594,   598,   602,   604,   608,   612,   614,
     618,   622,   626,   629,   632,   634,   637,   640,   643,   646,
     649,   652,   655,   658,   661,   664,   667,   670,   673,   676,
     679,   682,   686,   691,   694,   699,   702,   707,   710,   712,
     716,   718,   722,   727,   729,   730,   735,   736,   741,   744,
     747,   750,   751,   755,   757,   759,   761,   763,   765,   767,
     769,   771,   773,   775,   777,   779,   780,   784,   785,   789,
     794,   796,   798,   802,   803,   805,   807,   809,   810,   815,
     817,   819,   821,   825,   826,   828,   834,   840,   846,   850,
     854,   855,   862,   863,   865,   869,   873,   877,   878,   880,
     881,   889,   890,   892,   894,   898,   901,   904,   906,   908,
     910,   912,   913,   922,   923,   925,   929,   934,   939,   943,
     947,   951
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     144,     0,    -1,   145,    -1,    -1,   146,   147,    -1,    -1,
     147,   148,    -1,   147,     1,    65,    -1,   149,    -1,   150,
      -1,    65,    -1,   227,    65,    -1,   165,    -1,   168,    -1,
     171,    -1,   152,    -1,   155,    -1,   158,    -1,   173,    -1,
     180,    -1,   162,    -1,    82,    65,    -1,    68,    65,    -1,
      71,    65,    -1,   184,    -1,   189,    -1,   202,    -1,   210,
      -1,   216,    -1,   217,    -1,   219,    -1,   221,    -1,   222,
      -1,   225,    -1,    -1,    66,   151,   147,    67,    -1,    -1,
      -1,    90,   153,    55,   227,    63,   154,   148,    -1,    -1,
      -1,    91,   156,    55,   227,    63,   157,   148,    -1,    -1,
      -1,    -1,    92,   159,   148,   160,    90,    55,   227,    63,
     161,    65,    -1,   164,   150,    -1,    -1,   164,   227,   163,
     150,    -1,    93,    -1,    -1,    -1,    94,    55,   166,   227,
     167,    63,   148,    -1,    -1,    -1,    95,    55,   169,   227,
     170,    63,   148,    -1,    -1,   165,   104,   172,   148,    -1,
      -1,   175,   177,    65,   174,   178,    65,   179,    63,   148,
     176,    -1,    89,    55,    -1,    -1,    -1,   185,    -1,   227,
      -1,    -1,   227,    -1,    -1,   227,    -1,    -1,    -1,   175,
     183,    86,   227,    63,   181,   148,   182,   176,    -1,    96,
     140,   188,    -1,    97,   140,   188,    -1,   140,   188,    -1,
     185,    65,    -1,    96,   186,    -1,    97,   186,    -1,   187,
      -1,   186,     3,   187,    -1,   140,   188,    -1,   140,   188,
       4,   226,    -1,    -1,    64,   140,    -1,    64,   116,    -1,
      64,   109,    -1,    64,   110,    -1,    64,   111,    -1,    64,
     112,    -1,    -1,    69,   140,   190,   193,   188,   150,    -1,
      -1,    69,   192,   193,   188,   150,    -1,    -1,    55,   197,
      63,    -1,    55,   194,    63,    -1,    55,   195,     3,   197,
      63,    -1,    -1,   195,    -1,   196,    -1,   195,     3,   196,
      -1,   140,   188,    -1,   140,   188,     4,   226,    -1,    40,
      -1,   140,   188,    40,    -1,    -1,    70,   199,   200,   188,
     201,    -1,   140,   188,    -1,   193,    -1,    57,    61,    -1,
      57,   227,    61,    -1,   150,    -1,    -1,    76,   140,    66,
     203,   204,    67,    -1,   205,    -1,   207,    -1,   205,   207,
      -1,   207,   205,    -1,    -1,   102,    55,   140,   188,    63,
     206,   150,    -1,    -1,   209,   208,   150,    -1,   103,    55,
      63,   188,    -1,   103,   188,    -1,    -1,    62,   140,   211,
     212,   150,    -1,    -1,    74,   226,    -1,    -1,    74,   226,
       3,   213,   214,    -1,   215,    -1,   214,     3,   215,    -1,
     226,    -1,    81,    65,    -1,    81,   227,    65,    -1,    -1,
      85,    55,   227,    63,   218,   150,    -1,    -1,   108,    55,
     227,    63,   220,   148,    -1,    73,   227,    64,    -1,    72,
      64,    -1,    -1,   101,   223,   148,   224,   148,    -1,   105,
      -1,   105,    55,    63,    -1,   105,    55,   140,    63,    -1,
     100,   227,    65,    -1,   229,    -1,   228,    -1,   228,    94,
     227,    -1,   229,    -1,   228,     3,   229,    -1,   230,    -1,
     230,    29,   229,    -1,   230,     4,   229,    -1,   230,     5,
     229,    -1,   230,     6,   229,    -1,   230,     7,   229,    -1,
     230,     8,   229,    -1,   230,     9,   229,    -1,   230,    10,
     229,    -1,   230,    11,   229,    -1,   230,    12,   229,    -1,
     230,    13,   229,    -1,   230,    14,   229,    -1,   230,    15,
     229,    -1,   230,    18,   229,    -1,   230,    17,   229,    -1,
     230,    16,   229,    -1,   231,    -1,   231,    19,   230,    64,
     230,    -1,   232,    -1,   231,    20,   232,    -1,   233,    -1,
     232,    21,   233,    -1,   234,    -1,   233,    22,   234,    -1,
     235,    -1,   234,    23,   235,    -1,   236,    -1,   235,    24,
     236,    -1,   237,    -1,   236,    25,   237,    -1,   236,    26,
     237,    -1,   236,    27,   237,    -1,   236,    28,   237,    -1,
     238,    -1,   237,    30,   238,    -1,   237,    31,   238,    -1,
     237,    32,   238,    -1,   237,    33,   238,    -1,   239,    -1,
     238,    34,   239,    -1,   238,    35,   239,    -1,   238,    36,
     239,    -1,   240,    -1,   239,    48,   240,    -1,   239,    49,
     240,    -1,   242,    -1,   240,    37,   242,    -1,   240,    38,
     242,    -1,   240,    39,   242,    -1,   241,   242,    -1,   240,
      40,    -1,   243,    -1,    41,   242,    -1,    42,   242,    -1,
      43,   242,    -1,    44,   242,    -1,    45,   251,    -1,    53,
     242,    -1,    52,   242,    -1,   243,    52,    -1,    46,   242,
      -1,    47,   242,    -1,    50,   242,    -1,    51,   242,    -1,
      48,   242,    -1,    49,   242,    -1,    24,   242,    -1,    40,
     242,    -1,   243,    54,   242,    -1,    55,   109,    63,   242,
      -1,   109,   242,    -1,    55,   110,    63,   242,    -1,   110,
     242,    -1,    55,   111,    63,   242,    -1,   111,   242,    -1,
     244,    -1,   244,    87,   243,    -1,   248,    -1,    55,   227,
      63,    -1,   244,    57,   227,    61,    -1,   251,    -1,    -1,
     244,    56,   245,   140,    -1,    -1,   244,    70,   246,   140,
      -1,   244,    44,    -1,   244,    43,    -1,   244,    41,    -1,
      -1,    56,   247,   140,    -1,   139,    -1,   140,    -1,    58,
      -1,    59,    -1,   191,    -1,   198,    -1,    60,    -1,   116,
      -1,   254,    -1,   260,    -1,   265,    -1,   270,    -1,    -1,
      11,   249,   141,    -1,    -1,    38,   250,   141,    -1,   244,
      55,   252,    63,    -1,   106,    -1,   253,    -1,   252,     3,
     253,    -1,    -1,    40,    -1,   241,    -1,   226,    -1,    -1,
      57,   255,   256,    61,    -1,   257,    -1,   259,    -1,   258,
      -1,   257,     3,   258,    -1,    -1,   226,    -1,   226,    89,
     140,    86,   226,    -1,   259,    89,   140,    86,   226,    -1,
     259,     3,   140,    86,   226,    -1,   259,     3,   226,    -1,
     259,    94,   226,    -1,    -1,    37,    57,   261,   262,   264,
      61,    -1,    -1,   263,    -1,   262,     3,   263,    -1,   226,
       3,   226,    -1,   140,    64,   226,    -1,    -1,     3,    -1,
      -1,    55,    97,    63,    57,   266,   267,    61,    -1,    -1,
     268,    -1,   269,    -1,   268,     3,   269,    -1,    49,   139,
      -1,    48,   139,    -1,   139,    -1,   116,    -1,   265,    -1,
     270,    -1,    -1,    55,    97,    63,    37,    57,   271,   272,
      61,    -1,    -1,   273,    -1,   272,     3,   273,    -1,   139,
       3,    49,   139,    -1,   139,     3,    48,   139,    -1,   139,
       3,   139,    -1,   139,     3,   116,    -1,   139,     3,   265,
      -1,   139,     3,   270,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   239,   239,   244,   244,   250,   252,   253,   260,   261,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   294,   294,   307,   308,   307,   321,
     322,   321,   343,   344,   346,   343,   360,   361,   361,   383,
     390,   391,   390,   404,   405,   404,   411,   411,   432,   431,
     440,   444,   449,   450,   451,   456,   457,   462,   463,   487,
     489,   486,   497,   499,   502,   509,   513,   514,   521,   522,
     532,   533,   538,   540,   541,   542,   543,   544,   545,   550,
     550,   560,   560,   573,   575,   576,   577,   581,   583,   587,
     588,   592,   594,   599,   601,   617,   617,   625,   626,   630,
     631,   632,   638,   637,   646,   647,   648,   649,   653,   653,
     664,   664,   673,   674,   680,   680,   687,   689,   690,   690,
     695,   696,   700,   705,   706,   713,   712,   720,   719,   726,
     727,   732,   732,   739,   740,   741,   747,   752,   756,   757,
     762,   763,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   789,
     790,   798,   799,   803,   804,   809,   810,   814,   815,   819,
     820,   824,   825,   826,   827,   828,   832,   833,   834,   835,
     836,   840,   841,   842,   843,   848,   849,   850,   854,   855,
     856,   857,   858,   862,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   893,   894,
     899,   900,   901,   902,   903,   903,   907,   907,   915,   916,
     917,   918,   918,   926,   928,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   941,   944,   944,   952,
     957,   958,   959,   963,   964,   965,   966,   972,   972,   981,
     982,   987,   988,   993,   994,   999,  1004,  1009,  1014,  1016,
    1022,  1022,  1032,  1034,  1035,  1040,  1041,  1048,  1050,  1057,
    1057,  1067,  1069,  1075,  1076,  1082,  1083,  1084,  1085,  1086,
    1087,  1092,  1092,  1104,  1106,  1107,  1112,  1113,  1114,  1115,
    1116,  1117
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\",\"", "\"=\"", "\"&=\"", "\"|=\"",
  "\"^=\"", "\"-=\"", "\"+=\"", "\"%=\"", "\"/=\"", "\"\\\\=\"", "\"*=\"",
  "\"||=\"", "\"&&=\"", "\">>>=\"", "\"<<=\"", "\">>=\"", "\"?\"",
  "\"||\"", "\"&&\"", "\"|\"", "\"^\"", "\"&\"", "\"!=\"", "\"==\"",
  "\"!==\"", "\"===\"", "\"<->\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"",
  "\">>\"", "\"<<\"", "\">>>\"", "\"%\"", "\"/\"", "\"\\\\\"", "\"*\"",
  "\"!\"", "\"~\"", "\"--\"", "\"++\"", "\"new\"", "\"delete\"",
  "\"typeof\"", "\"+\"", "\"-\"", "\"#\"", "\"$\"", "\"isvalid\"",
  "\"invalidate\"", "\"instanceof\"", "\"(\"", "\".\"", "\"[\"",
  "\"this\"", "\"super\"", "\"global\"", "\"]\"", "\"class\"", "\")\"",
  "\":\"", "\";\"", "\"{\"", "\"}\"", "\"continue\"", "\"function\"",
  "\"->\"", "\"debugger\"", "\"default\"", "\"case\"", "\"extends\"",
  "\"finally\"", "\"property\"", "\"private\"", "\"public\"",
  "\"protected\"", "\"static\"", "\"return\"", "\"break\"", "\"export\"",
  "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"", "\"foreach\"",
  "\"for\"", "\"while\"", "\"until\"", "\"do\"", "\"loop\"", "\"if\"",
  "\"unless\"", "\"var\"", "\"const\"", "\"enum\"", "\"goto\"",
  "\"throw\"", "\"try\"", "\"setter\"", "\"getter\"", "\"else\"",
  "\"catch\"", "\"...\"", "\"synchronized\"", "\"with\"", "\"int\"",
  "\"real\"", "\"string\"", "\"octet\"", "\"false\"", "\"null\"",
  "\"true\"", "\"void\"", "\"NaN\"", "\"Infinity\"", "T_UPLUS", "T_UMINUS",
  "T_EVAL", "T_POSTDECREMENT", "T_POSTINCREMENT", "T_IGNOREPROP",
  "T_PROPACCESS", "T_ARG", "T_EXPANDARG", "T_INLINEARRAY", "T_ARRAYARG",
  "T_INLINEDIC", "T_DICELM", "T_WITHDOT", "T_THIS_PROXY",
  "T_WITHDOT_PROXY", "T_ITERATOR", "T_ITERNEXT", "T_ITERCURRENT",
  "T_ARRAYCOMP", "T_CONSTVAL", "T_SYMBOL", "T_REGEXP", "T_VARIANT",
  "$accept", "program", "global_list", "$@1", "def_list",
  "block_or_statement", "statement", "block", "$@2", "while", "$@3", "$@4",
  "until", "$@5", "$@6", "do_while", "$@7", "$@8", "$@9", "loop", "$@10",
  "loop_init", "if", "$@11", "$@12", "unless", "$@13", "$@14", "if_else",
  "$@15", "for", "$@16", "for_head", "for_tail", "for_first_clause",
  "for_second_clause", "for_third_clause", "forin", "$@17", "$@18",
  "forin_decl", "variable_def", "variable_def_inner", "variable_id_list",
  "variable_id", "variable_type", "func_def", "$@19", "func_expr_def",
  "$@20", "func_decl_arg_opt", "func_decl_arg_list",
  "func_decl_arg_at_least_one", "func_decl_arg", "func_decl_arg_collapse",
  "arrow_expr_def", "$@21", "arrow_expr_arg_opt", "arrow_expr_body",
  "property_def", "$@22", "property_handler_def_list",
  "property_handler_setter", "$@23", "property_handler_getter", "$@24",
  "property_getter_handler_head", "class_def", "$@25", "class_extender",
  "$@26", "extends_list", "extends_name", "return", "switch", "$@27",
  "with", "$@28", "case", "try", "$@29", "catch", "throw", "expr_no_comma",
  "expr", "comma_expr", "assign_expr", "cond_expr", "logical_or_expr",
  "logical_and_expr", "inclusive_or_expr", "exclusive_or_expr", "and_expr",
  "identical_expr", "compare_expr", "shift_expr", "add_sub_expr",
  "mul_div_expr", "mul_div_expr_and_asterisk", "unary_expr",
  "incontextof_expr", "priority_expr", "$@30", "$@31", "$@32",
  "factor_expr", "$@33", "$@34", "func_call_expr", "call_arg_list",
  "call_arg", "inline_array", "$@35", "array_elm_list", "array_ext",
  "array_elm", "array_comp", "inline_dic", "$@36", "dic_elm_list",
  "dic_elm", "dic_dummy_elm_opt", "const_inline_array", "$@37",
  "const_array_elm_list_opt", "const_array_elm_list", "const_array_elm",
  "const_inline_dic", "$@38", "const_dic_elm_list", "const_dic_elm", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   146,   145,   147,   147,   147,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   151,   150,   153,   154,   152,   156,
     157,   155,   159,   160,   161,   158,   162,   163,   162,   164,
     166,   167,   165,   169,   170,   168,   172,   171,   174,   173,
     175,   176,   177,   177,   177,   178,   178,   179,   179,   181,
     182,   180,   183,   183,   183,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   188,   188,   188,   188,   188,   190,
     189,   192,   191,   193,   193,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   199,   198,   200,   200,   201,
     201,   201,   203,   202,   204,   204,   204,   204,   206,   205,
     208,   207,   209,   209,   211,   210,   212,   212,   213,   212,
     214,   214,   215,   216,   216,   218,   217,   220,   219,   221,
     221,   223,   222,   224,   224,   224,   225,   226,   227,   227,
     228,   228,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   236,   236,   236,   237,   237,   237,   237,
     237,   238,   238,   238,   238,   239,   239,   239,   240,   240,
     240,   240,   240,   241,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     244,   244,   244,   244,   245,   244,   246,   244,   244,   244,
     244,   247,   244,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   249,   248,   250,   248,   251,
     252,   252,   252,   253,   253,   253,   253,   255,   254,   256,
     256,   257,   257,   258,   258,   259,   259,   259,   259,   259,
     261,   260,   262,   262,   262,   263,   263,   264,   264,   266,
     265,   267,   267,   268,   268,   269,   269,   269,   269,   269,
     269,   271,   270,   272,   272,   272,   273,   273,   273,   273,
     273,   273
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     0,     7,     0,
       0,     7,     0,     0,     0,    10,     2,     0,     4,     1,
       0,     0,     7,     0,     0,     7,     0,     4,     0,    10,
       2,     0,     0,     1,     1,     0,     1,     0,     1,     0,
       0,     9,     3,     3,     2,     2,     2,     2,     1,     3,
       2,     4,     0,     2,     2,     2,     2,     2,     2,     0,
       6,     0,     5,     0,     3,     3,     5,     0,     1,     1,
       3,     2,     4,     1,     3,     0,     5,     2,     1,     2,
       3,     1,     0,     6,     1,     1,     2,     2,     0,     7,
       0,     3,     4,     2,     0,     5,     0,     2,     0,     5,
       1,     3,     1,     2,     3,     0,     6,     0,     6,     3,
       2,     0,     5,     1,     3,     4,     3,     1,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     2,     4,     2,     4,     2,     1,     3,
       1,     3,     4,     1,     0,     4,     0,     4,     2,     2,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     4,
       1,     1,     3,     0,     1,     1,     1,     0,     4,     1,
       1,     1,     3,     0,     1,     5,     5,     5,     3,     3,
       0,     6,     0,     1,     3,     3,     3,     0,     1,     0,
       7,     0,     1,     1,     3,     2,     2,     1,     1,     1,
       1,     0,     8,     0,     1,     3,     4,     4,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   255,     0,     0,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   267,   245,   246,
     249,     0,    10,    34,     0,    91,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    39,    42,    49,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,   250,
     243,   244,     6,     8,     9,    15,    16,    17,    20,     0,
      12,    13,    14,    18,    62,    19,    24,     0,    25,   247,
     248,    26,    27,    28,    29,    30,    31,    32,    33,     0,
     148,   150,   152,   169,   171,   173,   175,   177,   179,   181,
     186,   191,   195,     0,   198,   204,   228,   230,   233,   251,
     252,   253,   254,     7,     0,    91,   219,   280,     0,   220,
     205,   206,   207,   208,     0,     0,   209,   213,   214,   217,
     218,   215,   216,   211,   210,     0,     0,     0,     0,     0,
       0,   273,   124,     5,    22,    89,    93,    93,    23,   140,
       0,     0,   133,     0,    21,     0,    60,     0,     0,     0,
      50,    53,    82,    76,    78,    77,     0,     0,     0,   223,
     225,   227,    46,    47,    56,     0,     0,   244,     0,     0,
      63,    64,    75,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   202,   212,     0,   240,   239,
     238,   263,   234,     0,   236,     0,   256,   282,   258,     0,
       0,     0,     0,   231,   242,   274,   147,     0,   269,   271,
     270,   126,     0,    93,    97,    82,    82,   108,    82,   139,
     112,   134,     0,     0,     0,    43,     0,     0,     0,    80,
       0,   146,     0,     0,     0,     0,    82,    82,    74,    58,
       0,   151,   149,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   168,   167,   166,   153,     0,
     172,   174,   176,   178,   180,   182,   183,   184,   185,   187,
     188,   189,   190,   192,   193,   194,   196,   197,   199,   200,
     201,   221,   264,   260,   266,   265,     0,   261,     0,     0,
       0,   229,   244,     0,   287,   283,     0,   289,   222,   224,
     226,     0,   268,   273,     0,     0,     0,     0,     0,    35,
      82,   103,    82,     0,    98,    99,     0,     0,   107,     0,
       0,   135,     0,     0,     0,    51,    54,    85,    86,    87,
      88,    84,    83,     0,    79,   143,     0,   137,    48,    57,
      80,    80,    65,     0,     0,   263,   259,   235,   232,   237,
       0,     0,   288,     0,   301,   291,     0,   274,   272,   244,
     278,     0,   279,   127,   125,     0,   101,    95,     0,    94,
      92,     0,   111,   106,     0,    82,     0,   114,   115,   120,
       0,    37,    40,     0,     0,     0,    81,     0,   142,     0,
       0,    66,    69,   170,   262,   286,   285,   284,   281,   303,
       0,     0,     0,   298,   297,   299,     0,   292,   293,   300,
       0,     0,     0,   128,    90,     0,   104,   100,     0,   109,
       0,     0,     0,   123,   113,   116,   117,     0,   136,     0,
       0,     0,     0,     0,   144,     0,   138,    67,     0,     0,
       0,   304,   296,   295,   290,     0,   275,   277,   276,     0,
     102,    96,   110,    82,    82,   121,    38,    41,     0,    52,
      55,   145,     0,    68,    70,     0,     0,   302,   294,   129,
     130,   132,     0,   122,    44,     0,    61,     0,     0,   309,
     308,   310,   311,   305,     0,   118,     0,    61,    71,   307,
     306,   131,     0,    45,    59,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    62,    63,    64,   143,    65,
     157,   469,    66,   158,   470,    67,   159,   364,   526,    68,
     274,    69,    70,   266,   424,    71,   267,   425,    72,   275,
      73,   382,    74,   528,   178,   430,   502,    75,   478,   516,
     179,    76,    77,   163,   164,   269,    78,   253,    79,   146,
     255,   353,   354,   355,   356,    80,   147,   258,   413,    81,
     360,   416,   417,   532,   418,   467,   419,    82,   251,   348,
     489,   509,   510,    83,    84,   420,    85,   429,    86,    87,
     167,   376,    88,   324,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   328,   330,   140,   107,   114,   118,   108,   326,
     327,   109,   141,   247,   248,   249,   250,   110,   237,   334,
     335,   393,   111,   395,   446,   447,   448,   112,   439,   480,
     481
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -391
static const yytype_int16 yypact[] =
{
    -391,    49,  -391,  -391,  -391,   424,   -12,  -391,  1397,    14,
    -391,  1397,  1397,  1397,  1397,  1397,   122,  1397,  1397,  1397,
    1397,  1397,  1397,  1397,  1397,   813,  -391,  -391,  -391,  -391,
    -391,   -67,  -391,  -391,    25,   -16,  -391,    53,    63,  1397,
      -4,   856,    70,    73,    90,  -391,  -391,  -391,  -391,    91,
      93,     9,     9,  1397,  -391,   102,  1397,  1397,  1397,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   933,
      62,  -391,  -391,  -391,   736,  -391,  -391,   103,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   105,
      17,  -391,   365,    13,   155,   161,   162,   166,   128,   132,
       3,    -2,   135,  1397,  -391,   -11,    82,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,    56,  -391,  -391,  -391,    57,  -391,
    -391,  -391,  -391,  -391,  1010,   227,   237,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,   136,  1053,  1157,  1200,   140,
      66,  1397,  -391,  -391,  -391,  -391,   149,   -34,  -391,  -391,
     143,   142,  -391,   145,  -391,  1397,  -391,   158,   168,   632,
    -391,  -391,   152,   214,  -391,   214,   160,   632,  1397,  -391,
    -391,  -391,  -391,  -391,  -391,    87,    88,   -38,   164,   144,
    -391,  -391,  -391,  -391,  1397,  1397,  1397,  1397,  1397,  1397,
    1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,
    1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,
    1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,  1397,
    1397,  1397,  1397,  1397,  -391,  -391,  -391,  1397,  -391,  -391,
    -391,  1277,  -391,  1397,  -391,   122,  -391,  1440,  -391,   -15,
    1397,  1397,  1397,  -391,  -391,   146,  -391,   170,   229,  -391,
      15,   159,   528,   149,   -32,   152,   152,  -391,   152,  -391,
    -391,  -391,   171,  1397,  1397,  -391,  1397,  1397,    31,   232,
       9,  -391,   139,   174,   179,   632,   152,   152,  -391,  -391,
    1397,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   182,
     155,   161,   162,   166,   128,   132,   132,   132,   132,     3,
       3,     3,     3,    -2,    -2,    -2,   135,   135,  -391,  -391,
    -391,  -391,  1397,  -391,  -391,  1397,    11,  -391,   107,   188,
     110,  -391,   187,   249,   251,  -391,   198,  -391,  -391,  -391,
    -391,   117,  -391,  1397,  1517,   123,  1397,  1397,   179,  -391,
     152,  -391,   152,   201,   266,  -391,   209,   179,  -391,   -30,
      -5,  -391,   211,   212,   186,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  1397,  -391,   222,   632,  -391,  -391,  -391,
      21,    24,  1397,   233,  1397,  1560,  -391,  -391,  -391,  -391,
    1397,  1397,  1440,   234,  -391,   -36,   213,  -391,  -391,   215,
    -391,   216,  -391,   295,  -391,   179,    30,  -391,   -32,  -391,
    -391,  1320,  -391,  -391,   245,   -20,   236,   205,   207,  -391,
     179,  -391,  -391,   255,   248,   252,  -391,   -23,  -391,   632,
     247,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   185,
     189,   190,   224,  -391,  -391,  -391,   270,   329,  -391,  -391,
    1397,  1397,  1397,  -391,  -391,  1397,  -391,  -391,   271,  -391,
     272,   195,   274,  -391,  -391,  -391,  -391,   179,  -391,   632,
     632,  1397,   632,   632,  -391,   275,  -391,  1397,   632,   336,
      28,  -391,  -391,  -391,  -391,   -36,  -391,  -391,  -391,  1397,
    -391,  -391,  -391,   152,   152,  -391,  -391,  -391,   277,  -391,
    -391,  -391,   278,  -391,  -391,   -25,   185,  -391,  -391,   339,
    -391,  -391,   280,  -391,  -391,   632,  -391,   206,   208,  -391,
    -391,  -391,  -391,  -391,  1397,  -391,   279,  -391,  -391,  -391,
    -391,  -391,   179,  -391,  -391,  -391
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -391,  -391,  -391,  -391,   203,  -156,  -391,   -69,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -179,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,   276,   -42,    79,  -126,  -391,  -391,  -391,  -391,
    -140,  -391,  -391,   -56,   -55,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,   -64,  -391,   -62,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -168,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -125,   -24,  -391,  -132,  -200,  -391,   157,
     180,   156,   184,   178,   -22,   -19,  -124,  -118,  -227,    64,
     127,   347,  -391,  -391,  -391,  -391,  -391,  -391,   349,  -391,
       6,  -391,  -391,  -391,  -391,    23,  -391,  -391,  -391,  -391,
       1,  -391,  -390,  -391,  -391,  -391,   -97,  -389,  -391,  -391,
    -111
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -234
static const yytype_int16 yytable[] =
{
     172,   139,   299,   265,   325,   445,   449,   257,   351,   246,
     165,   272,   440,   441,   385,   150,   245,   153,   344,   442,
     184,   254,   336,   517,   518,   373,   268,   411,   373,   166,
     442,   506,   202,   203,   455,   462,    33,   216,   217,   218,
     474,   226,   337,   227,   268,   173,   219,   220,   -82,     4,
     181,   278,   281,   113,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     456,   117,   116,   142,   386,   119,   120,   121,   122,   123,
     443,   127,   128,   129,   130,   131,   132,   133,   134,   507,
     144,   519,   313,   314,   315,   445,   449,   414,   415,   246,
     139,   316,   317,   444,   345,   246,   256,   -72,   352,   346,
     -73,   185,   333,   350,   520,   521,   522,   475,   148,   379,
     169,   170,   171,   228,   145,   229,   230,   149,   155,   357,
     358,   262,   359,     7,   165,   154,   151,   231,   232,   233,
     367,   368,   369,   370,   273,   156,   160,   371,   161,   162,
     380,   381,   234,   208,   209,   210,   211,   168,   325,     9,
      10,   282,   212,   213,   214,   215,   174,   225,   182,   235,
     183,   372,   221,   222,   223,   224,   204,   124,    26,    27,
      28,    29,    30,   205,   433,   206,   305,   306,   307,   308,
     207,   115,    36,   309,   310,   311,   312,   236,   238,   239,
     169,   170,   171,   243,   254,   378,   244,   259,   260,   329,
     261,   246,   246,   263,   246,   246,   268,   270,   397,   400,
     428,   402,   403,   264,   405,   271,   406,   276,   277,   279,
     280,   342,   343,   347,   361,   341,   373,   377,    59,   362,
     363,   246,   365,   366,   375,    33,   384,   387,   426,   388,
     389,   390,   391,   246,   392,   394,   383,   396,   246,   246,
     246,    60,    61,   401,   407,   435,   436,   333,   228,   408,
     229,   230,   409,   476,   421,   422,   423,   427,  -233,   404,
    -233,  -233,   231,   232,   233,   318,   319,   320,   410,   463,
     412,   321,  -233,  -233,  -233,   438,   432,   234,   453,   450,
     461,   451,   452,   464,   338,   339,   340,  -233,   415,   414,
     471,   472,   477,   496,   497,   473,   499,   500,   246,   246,
     246,   135,   504,   246,   479,   486,   487,   488,   482,   483,
     490,   484,   485,   492,   491,   493,   454,   494,   501,   505,
     514,   515,   524,   525,   533,   529,   252,   530,   534,   374,
     180,   468,   457,   458,   466,   465,   531,   246,   431,   527,
     300,   302,   331,   125,   511,   126,   398,   512,   513,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   301,   304,   119,   460,   508,   225,
     303,   434,   246,   437,   201,   523,     0,     0,   495,   511,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -4,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   498,     8,     0,
       0,     0,     0,   503,     0,     0,     0,     0,     0,     0,
       0,     9,    10,   535,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,    32,
      33,     0,    34,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,     0,     0,    41,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,    53,    54,     0,     0,     0,     6,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     7,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
      31,     0,     0,    32,    33,   349,    34,    35,    36,    37,
      38,    39,     0,     0,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,     7,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    61,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,    31,     0,     0,    32,    33,     0,
      34,    35,    36,    37,    38,    39,     0,     0,    40,     0,
       0,     0,     0,    41,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,     7,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,   175,   176,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,     0,
       9,    10,    59,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     7,    25,    26,
      27,    28,    29,    30,     0,    60,   177,     0,     0,     0,
       8,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     135,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,   152,   136,   137,   138,   115,    36,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,     0,
       9,    10,    59,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,    60,    61,     0,     0,    33,
       0,     0,   115,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,     0,     9,    10,    59,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     7,    25,    26,    27,    28,    29,
      30,     0,    60,    61,     0,     0,     0,     8,     0,   115,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   135,    25,    26,
      27,    28,    29,    30,     0,     0,   240,     0,     0,    56,
      57,    58,   115,    36,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,     0,     0,     7,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,     0,
     241,     0,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,   242,     0,     0,    56,    57,    58,   115,
      36,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     9,    10,    59,   322,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,    60,
      61,     0,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,   459,     0,   323,     0,     0,    56,    57,    58,   115,
      36,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     9,    10,    59,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,    60,
      61,     0,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    56,    57,    58,   115,
      36,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     9,    10,    59,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,    60,
     332,     0,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
     322,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    56,    57,    58,   115,
      36,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61
};

static const yytype_int16 yycheck[] =
{
      69,    25,   202,   159,   231,   395,   395,   147,    40,   141,
      52,   167,    48,    49,     3,    39,   141,    41,     3,    55,
       3,    55,    37,    48,    49,     4,    64,    57,     4,    53,
      55,     3,    19,    20,     4,    55,    66,    34,    35,    36,
      63,    52,    57,    54,    64,    69,    48,    49,    86,     0,
      74,   177,   184,    65,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      40,    57,     8,   140,    63,    11,    12,    13,    14,    15,
     116,    17,    18,    19,    20,    21,    22,    23,    24,    61,
      65,   116,   216,   217,   218,   485,   485,   102,   103,   231,
     124,   219,   220,   139,    89,   237,   140,    86,   140,    94,
      86,    94,   237,   253,   139,   505,   505,   140,    65,   275,
      56,    57,    58,    41,   140,    43,    44,    64,    55,   255,
     256,   155,   258,    11,   176,    65,   140,    55,    56,    57,
     109,   110,   111,   112,   168,    55,    55,   116,    55,   140,
     276,   277,    70,    25,    26,    27,    28,    55,   385,    37,
      38,   185,    30,    31,    32,    33,   104,   103,    65,    87,
      65,   140,    37,    38,    39,    40,    21,    55,    56,    57,
      58,    59,    60,    22,   384,    23,   208,   209,   210,   211,
      24,    69,    70,   212,   213,   214,   215,   141,   141,    63,
     136,   137,   138,    63,    55,   274,   140,    64,    66,   233,
      65,   343,   344,    55,   346,   347,    64,     3,   343,   344,
     376,   346,   347,    55,   350,    65,   352,   140,   140,    65,
      86,    61,     3,    74,    63,    89,     4,    63,   116,   263,
     264,   373,   266,   267,   105,    66,    64,   140,   373,    61,
     140,    64,     3,   385,     3,    57,   280,   140,   390,   391,
     392,   139,   140,   140,    63,   390,   391,   392,    41,     3,
      43,    44,    63,   429,    63,    63,    90,    55,    41,   348,
      43,    44,    55,    56,    57,   221,   222,   223,   357,   415,
     359,   227,    55,    56,    57,    61,    63,    70,     3,    86,
      55,    86,    86,    67,   240,   241,   242,    70,   103,   102,
      55,    63,    65,   469,   470,    63,   472,   473,   450,   451,
     452,    97,   478,   455,   139,   450,   451,   452,   139,   139,
     455,    61,     3,    61,    63,   140,   405,    63,    63,     3,
      63,    63,     3,    63,    65,   139,   143,   139,   527,   270,
      74,   420,   408,   408,   418,   417,   524,   489,   382,   515,
     203,   205,   235,    16,   489,    16,   343,   493,   494,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   204,   207,   322,   411,   485,   325,
     206,   385,   524,   392,    29,   506,    -1,    -1,   467,   524,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    24,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,   532,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,     1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,    11,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,    11,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,   110,   111,    -1,    -1,    -1,    11,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
      37,    38,   116,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    11,    55,    56,
      57,    58,    59,    60,    -1,   139,   140,    -1,    -1,    -1,
      24,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      97,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,   109,   110,   111,    69,    70,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
      37,    38,   116,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,   139,   140,    -1,    -1,    66,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,    37,    38,   116,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    11,    55,    56,    57,    58,    59,
      60,    -1,   139,   140,    -1,    -1,    -1,    24,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    97,    55,    56,
      57,    58,    59,    60,    -1,    -1,    63,    -1,    -1,   109,
     110,   111,    69,    70,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,    -1,    11,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    37,    38,   116,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,   139,
     140,    -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    -1,   106,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    37,    38,   116,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,   139,
     140,    -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    37,    38,   116,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,   139,
     140,    -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   144,   145,   146,     0,   147,     1,    11,    24,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    62,    65,    66,    68,    69,    70,    71,    72,    73,
      76,    81,    82,    85,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   100,   101,   108,   109,   110,   111,   116,
     139,   140,   148,   149,   150,   152,   155,   158,   162,   164,
     165,   168,   171,   173,   175,   180,   184,   185,   189,   191,
     198,   202,   210,   216,   217,   219,   221,   222,   225,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   248,   251,   254,
     260,   265,   270,    65,   249,    69,   242,    57,   250,   242,
     242,   242,   242,   242,    55,   244,   251,   242,   242,   242,
     242,   242,   242,   242,   242,    97,   109,   110,   111,   227,
     247,   255,   140,   151,    65,   140,   192,   199,    65,    64,
     227,   140,    65,   227,    65,    55,    55,   153,   156,   159,
      55,    55,   140,   186,   187,   186,   227,   223,    55,   242,
     242,   242,   150,   227,   104,    96,    97,   140,   177,   183,
     185,   227,    65,    65,     3,    94,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    29,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    34,    35,    36,    48,
      49,    37,    38,    39,    40,   242,    52,    54,    41,    43,
      44,    55,    56,    57,    70,    87,   141,   261,   141,    63,
      63,    63,    63,    63,   140,   226,   229,   256,   257,   258,
     259,   211,   147,   190,    55,   193,   140,   193,   200,    64,
      66,    65,   227,    55,    55,   148,   166,   169,    64,   188,
       3,    65,   148,   227,   163,   172,   140,   140,   188,    65,
      86,   229,   227,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     232,   233,   234,   235,   236,   237,   237,   237,   237,   238,
     238,   238,   238,   239,   239,   239,   240,   240,   242,   242,
     242,   242,    40,   106,   226,   241,   252,   253,   245,   227,
     246,   243,   140,   226,   262,   263,    37,    57,   242,   242,
     242,    89,    61,     3,     3,    89,    94,    74,   212,    67,
     193,    40,   140,   194,   195,   196,   197,   188,   188,   188,
     203,    63,   227,   227,   160,   227,   227,   109,   110,   111,
     112,   116,   140,     4,   187,   105,   224,    63,   150,   148,
     188,   188,   174,   227,    64,     3,    63,   140,    61,   140,
      64,     3,     3,   264,    57,   266,   140,   226,   258,   140,
     226,   140,   226,   226,   150,   188,   188,    63,     3,    63,
     150,    57,   150,   201,   102,   103,   204,   205,   207,   209,
     218,    63,    63,    90,   167,   170,   226,    55,   148,   220,
     178,   227,    63,   230,   253,   226,   226,   263,    61,   271,
      48,    49,    55,   116,   139,   265,   267,   268,   269,   270,
      86,    86,    86,     3,   150,     4,    40,   196,   197,    61,
     227,    55,    55,   188,    67,   207,   205,   208,   150,   154,
     157,    55,    63,    63,    63,   140,   148,    65,   181,   139,
     272,   273,   139,   139,    61,     3,   226,   226,   226,   213,
     226,    63,    61,   140,    63,   150,   148,   148,   227,   148,
     148,    63,   179,   227,   148,     3,     3,    61,   269,   214,
     215,   226,   188,   188,    63,    63,   182,    48,    49,   116,
     139,   265,   270,   273,     3,    63,   161,   148,   176,   139,
     139,   215,   206,    65,   176,   150
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 3:

/* Line 1464 of yacc.c  */
#line 244 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 246 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 253 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 267 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 278 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 279 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 280 "syntax/tjs.y"
    { cc->DeclareVariables((yyvsp[(1) - (1)].dp)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 294 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 296 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 307 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 308 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 310 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 321 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 322 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 324 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 343 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 344 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 346 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 347 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 360 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 361 "syntax/tjs.y"
    { tjs_char *temp = cc->GetTemporaryVariableName();
												  { // var $1 = (int)expr
												    cc->InitLocalVariable(temp, cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)));
												  }
												  { // 0 < $1
												    auto zero = cc->MakeNP0(T_CONSTVAL);
												    zero->SetValue(tTJSVariant(tTVInteger(0)));
												    auto rhs = cc->MakeNP0(T_SYMBOL);
												    rhs->SetValue(tTJSVariant(temp));
												    cc->CreateForExprCode(cc->MakeNP2(T_LT, zero, rhs));
												  }
												  { // --$1
												    auto t1 = cc->MakeNP0(T_SYMBOL);
												    t1->SetValue(tTJSVariant(temp));
												    cc->SetForThirdExprCode(cc->MakeNP1(T_DECREMENT, t1));
												  }
												  delete[] temp;
												;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 379 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 383 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 390 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 391 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 392 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 404 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 405 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 406 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 411 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 412 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 432 "syntax/tjs.y"
    { if ((yyvsp[(2) - (3)].dp)) cc->DeclareVariables((yyvsp[(2) - (3)].dp)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 440 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 444 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 449 "syntax/tjs.y"
    { (yyval.dp) = nullptr; ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 450 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (1)].dp); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 451 "syntax/tjs.y"
    { (yyval.dp) = nullptr; cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 456 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 457 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 462 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 463 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 487 "syntax/tjs.y"
    { if ((yyvsp[(2) - (5)].dp)->Count() == 0) { YYABORT; }
											  cc->EnterForInCode((yyvsp[(2) - (5)].dp), (yyvsp[(4) - (5)].np)); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 489 "syntax/tjs.y"
    { cc->ExitForInCode(); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 497 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num)))); ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 499 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num))));
											  (yyval.dp)->SetConst(); ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 502 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))));
											  (yyval.dp)->SetNotLocal(); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 509 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (2)].dp); ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 513 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 514 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); (yyval.dp)->SetConst(); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 521 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); (yyval.dp)->Push((yyvsp[(1) - (1)].dn)); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 522 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp); (yyval.dp)->Push((yyvsp[(3) - (3)].dn)); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 532 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 534 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 550 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 555 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 560 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 565 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 592 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 594 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 599 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 601 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 617 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 621 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 625 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 630 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 631 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 638 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 642 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 653 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 659 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 664 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 668 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 680 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 684 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 689 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 690 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 700 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 705 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 706 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 713 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 714 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 720 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 721 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 726 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 727 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 732 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 735 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 739 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 740 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 741 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 747 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 752 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 756 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 757 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 762 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 763 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 768 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 771 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 772 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 773 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 774 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 775 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 777 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 778 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 779 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 780 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 783 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 784 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 789 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 792 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 798 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 799 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 803 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 805 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 809 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 810 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 814 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 815 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 819 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 820 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 824 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 825 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 826 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 827 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 828 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 833 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 834 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 835 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 836 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 840 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 841 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 842 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 843 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 848 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 849 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 850 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 855 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 856 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 857 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 858 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 862 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 866 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 867 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 868 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 870 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 871 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 872 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 873 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 874 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 875 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 877 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 878 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 879 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 881 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 882 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 884 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 887 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 888 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 889 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 893 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 895 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 899 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 901 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 902 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 903 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 904 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 907 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 908 "syntax/tjs.y"
    { /* syntactic sugar of '(Dictionary.*T_SYMBOL* incontexof *priority_expr*)' */
												  auto dict = cc->MakeNP0(T_SYMBOL);
												  auto method = cc->MakeNP0(T_CONSTVAL);
												  dict->SetValue(tTJSVariant("Dictionary"));
												  method->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  auto func = cc->MakeNP2(T_DOT, dict, method);
												  (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, func, (yyvsp[(1) - (4)].np)); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 916 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 917 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 918 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 919 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 926 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 928 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 931 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 932 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 934 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 935 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 936 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 937 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 938 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 939 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 940 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 941 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 942 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 944 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 945 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 952 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 957 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 958 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 959 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 963 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 964 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 965 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 966 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 972 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 976 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 983 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 987 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 988 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 993 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 994 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1000 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARRAYCOMP, cn, (yyvsp[(1) - (5)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1005 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1010 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1014 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1016 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1022 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1027 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1034 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1035 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1040 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1041 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1057 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1064 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1082 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1083 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1084 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1085 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1086 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1087 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 1092 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1099 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1112 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1113 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1114 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1115 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1116 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1117 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 4159 "tjs.tab.cpp"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1684 of yacc.c  */
#line 1122 "syntax/tjs.y"



}
