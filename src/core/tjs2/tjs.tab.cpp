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
     T_DICTCOMP = 394,
     T_CONSTVAL = 395,
     T_SYMBOL = 396,
     T_REGEXP = 397,
     T_VARIANT = 398
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
#define YYLAST   1870

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNRULES -- Number of states.  */
#define YYNSTATES  564

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   398

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
     135,   136,   137,   138,   139,   140,   141,   142,   143
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
     854,   855,   861,   863,   865,   868,   869,   871,   875,   879,
     883,   884,   886,   894,   902,   908,   914,   918,   922,   923,
     931,   932,   934,   936,   940,   943,   946,   948,   950,   952,
     954,   955,   964,   965,   967,   971,   976,   981,   985,   989,
     993
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,   146,    -1,    -1,   147,   148,    -1,    -1,
     148,   149,    -1,   148,     1,    65,    -1,   150,    -1,   151,
      -1,    65,    -1,   228,    65,    -1,   166,    -1,   169,    -1,
     172,    -1,   153,    -1,   156,    -1,   159,    -1,   174,    -1,
     181,    -1,   163,    -1,    82,    65,    -1,    68,    65,    -1,
      71,    65,    -1,   185,    -1,   190,    -1,   203,    -1,   211,
      -1,   217,    -1,   218,    -1,   220,    -1,   222,    -1,   223,
      -1,   226,    -1,    -1,    66,   152,   148,    67,    -1,    -1,
      -1,    90,   154,    55,   228,    63,   155,   149,    -1,    -1,
      -1,    91,   157,    55,   228,    63,   158,   149,    -1,    -1,
      -1,    -1,    92,   160,   149,   161,    90,    55,   228,    63,
     162,    65,    -1,   165,   151,    -1,    -1,   165,   228,   164,
     151,    -1,    93,    -1,    -1,    -1,    94,    55,   167,   228,
     168,    63,   149,    -1,    -1,    -1,    95,    55,   170,   228,
     171,    63,   149,    -1,    -1,   166,   104,   173,   149,    -1,
      -1,   176,   178,    65,   175,   179,    65,   180,    63,   149,
     177,    -1,    89,    55,    -1,    -1,    -1,   186,    -1,   228,
      -1,    -1,   228,    -1,    -1,   228,    -1,    -1,    -1,   176,
     184,    86,   228,    63,   182,   149,   183,   177,    -1,    96,
     141,   189,    -1,    97,   141,   189,    -1,   141,   189,    -1,
     186,    65,    -1,    96,   187,    -1,    97,   187,    -1,   188,
      -1,   187,     3,   188,    -1,   141,   189,    -1,   141,   189,
       4,   227,    -1,    -1,    64,   141,    -1,    64,   116,    -1,
      64,   109,    -1,    64,   110,    -1,    64,   111,    -1,    64,
     112,    -1,    -1,    69,   141,   191,   194,   189,   151,    -1,
      -1,    69,   193,   194,   189,   151,    -1,    -1,    55,   198,
      63,    -1,    55,   195,    63,    -1,    55,   196,     3,   198,
      63,    -1,    -1,   196,    -1,   197,    -1,   196,     3,   197,
      -1,   141,   189,    -1,   141,   189,     4,   227,    -1,    40,
      -1,   141,   189,    40,    -1,    -1,    70,   200,   201,   189,
     202,    -1,   141,   189,    -1,   194,    -1,    57,    61,    -1,
      57,   228,    61,    -1,   151,    -1,    -1,    76,   141,    66,
     204,   205,    67,    -1,   206,    -1,   208,    -1,   206,   208,
      -1,   208,   206,    -1,    -1,   102,    55,   141,   189,    63,
     207,   151,    -1,    -1,   210,   209,   151,    -1,   103,    55,
      63,   189,    -1,   103,   189,    -1,    -1,    62,   141,   212,
     213,   151,    -1,    -1,    74,   227,    -1,    -1,    74,   227,
       3,   214,   215,    -1,   216,    -1,   215,     3,   216,    -1,
     227,    -1,    81,    65,    -1,    81,   228,    65,    -1,    -1,
      85,    55,   228,    63,   219,   151,    -1,    -1,   108,    55,
     228,    63,   221,   149,    -1,    73,   228,    64,    -1,    72,
      64,    -1,    -1,   101,   224,   149,   225,   149,    -1,   105,
      -1,   105,    55,    63,    -1,   105,    55,   141,    63,    -1,
     100,   228,    65,    -1,   230,    -1,   229,    -1,   229,    94,
     228,    -1,   230,    -1,   229,     3,   230,    -1,   231,    -1,
     231,    29,   230,    -1,   231,     4,   230,    -1,   231,     5,
     230,    -1,   231,     6,   230,    -1,   231,     7,   230,    -1,
     231,     8,   230,    -1,   231,     9,   230,    -1,   231,    10,
     230,    -1,   231,    11,   230,    -1,   231,    12,   230,    -1,
     231,    13,   230,    -1,   231,    14,   230,    -1,   231,    15,
     230,    -1,   231,    18,   230,    -1,   231,    17,   230,    -1,
     231,    16,   230,    -1,   232,    -1,   232,    19,   231,    64,
     231,    -1,   233,    -1,   232,    20,   233,    -1,   234,    -1,
     233,    21,   234,    -1,   235,    -1,   234,    22,   235,    -1,
     236,    -1,   235,    23,   236,    -1,   237,    -1,   236,    24,
     237,    -1,   238,    -1,   237,    25,   238,    -1,   237,    26,
     238,    -1,   237,    27,   238,    -1,   237,    28,   238,    -1,
     239,    -1,   238,    30,   239,    -1,   238,    31,   239,    -1,
     238,    32,   239,    -1,   238,    33,   239,    -1,   240,    -1,
     239,    34,   240,    -1,   239,    35,   240,    -1,   239,    36,
     240,    -1,   241,    -1,   240,    48,   241,    -1,   240,    49,
     241,    -1,   243,    -1,   241,    37,   243,    -1,   241,    38,
     243,    -1,   241,    39,   243,    -1,   242,   243,    -1,   241,
      40,    -1,   244,    -1,    41,   243,    -1,    42,   243,    -1,
      43,   243,    -1,    44,   243,    -1,    45,   252,    -1,    53,
     243,    -1,    52,   243,    -1,   244,    52,    -1,    46,   243,
      -1,    47,   243,    -1,    50,   243,    -1,    51,   243,    -1,
      48,   243,    -1,    49,   243,    -1,    24,   243,    -1,    40,
     243,    -1,   244,    54,   243,    -1,    55,   109,    63,   243,
      -1,   109,   243,    -1,    55,   110,    63,   243,    -1,   110,
     243,    -1,    55,   111,    63,   243,    -1,   111,   243,    -1,
     245,    -1,   245,    87,   244,    -1,   249,    -1,    55,   228,
      63,    -1,   245,    57,   228,    61,    -1,   252,    -1,    -1,
     245,    56,   246,   141,    -1,    -1,   245,    70,   247,   141,
      -1,   245,    44,    -1,   245,    43,    -1,   245,    41,    -1,
      -1,    56,   248,   141,    -1,   140,    -1,   141,    -1,    58,
      -1,    59,    -1,   192,    -1,   199,    -1,    60,    -1,   116,
      -1,   255,    -1,   261,    -1,   269,    -1,   274,    -1,    -1,
      11,   250,   142,    -1,    -1,    38,   251,   142,    -1,   245,
      55,   253,    63,    -1,   106,    -1,   254,    -1,   253,     3,
     254,    -1,    -1,    40,    -1,   242,    -1,   227,    -1,    -1,
      57,   256,   257,    61,    -1,   258,    -1,   260,    -1,   259,
      -1,   258,     3,   259,    -1,    -1,   227,    -1,   227,    89,
     141,    86,   227,    -1,   260,    89,   141,    86,   227,    -1,
     260,     3,   141,    86,   227,    -1,   260,     3,   227,    -1,
     260,    94,   227,    -1,    -1,    37,    57,   262,   263,    61,
      -1,   264,    -1,   268,    -1,   265,   267,    -1,    -1,   266,
      -1,   265,     3,   266,    -1,   227,     3,   227,    -1,   141,
      64,   227,    -1,    -1,     3,    -1,   227,     3,   227,    89,
     141,    86,   227,    -1,   141,    64,   227,    89,   141,    86,
     227,    -1,   268,    89,   141,    86,   227,    -1,   268,     3,
     141,    86,   227,    -1,   268,     3,   227,    -1,   268,    94,
     227,    -1,    -1,    55,    97,    63,    57,   270,   271,    61,
      -1,    -1,   272,    -1,   273,    -1,   272,     3,   273,    -1,
      49,   140,    -1,    48,   140,    -1,   140,    -1,   116,    -1,
     269,    -1,   274,    -1,    -1,    55,    97,    63,    37,    57,
     275,   276,    61,    -1,    -1,   277,    -1,   276,     3,   277,
      -1,   140,     3,    49,   140,    -1,   140,     3,    48,   140,
      -1,   140,     3,   140,    -1,   140,     3,   116,    -1,   140,
       3,   269,    -1,   140,     3,   274,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   241,   241,   247,   249,   250,   257,   258,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   291,   291,   304,   305,   304,   318,
     319,   318,   340,   341,   343,   340,   357,   358,   358,   380,
     387,   388,   387,   401,   402,   401,   408,   408,   429,   428,
     437,   441,   446,   447,   448,   453,   454,   459,   460,   484,
     486,   483,   494,   496,   499,   506,   510,   511,   518,   519,
     529,   530,   535,   537,   538,   539,   540,   541,   542,   547,
     547,   557,   557,   570,   572,   573,   574,   578,   580,   584,
     585,   589,   591,   596,   598,   614,   614,   622,   623,   627,
     628,   629,   635,   634,   643,   644,   645,   646,   650,   650,
     661,   661,   670,   671,   677,   677,   684,   686,   687,   687,
     692,   693,   697,   702,   703,   710,   709,   717,   716,   723,
     724,   729,   729,   736,   737,   738,   744,   749,   753,   754,
     759,   760,   765,   766,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   786,
     787,   795,   796,   800,   801,   806,   807,   811,   812,   816,
     817,   821,   822,   823,   824,   825,   829,   830,   831,   832,
     833,   837,   838,   839,   840,   845,   846,   847,   851,   852,
     853,   854,   855,   859,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   883,   884,   885,   886,   890,   891,
     896,   897,   898,   899,   900,   900,   904,   904,   912,   913,
     914,   915,   915,   923,   925,   928,   929,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   938,   941,   941,   949,
     954,   955,   956,   960,   961,   962,   963,   969,   969,   978,
     979,   984,   985,   990,   991,   996,  1001,  1006,  1011,  1013,
    1019,  1019,  1027,  1028,  1032,  1036,  1038,  1039,  1044,  1045,
    1052,  1054,  1058,  1063,  1070,  1075,  1080,  1082,  1090,  1090,
    1100,  1102,  1108,  1109,  1115,  1116,  1117,  1118,  1119,  1120,
    1125,  1125,  1137,  1139,  1140,  1145,  1146,  1147,  1148,  1149,
    1150
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
  "T_ARRAYCOMP", "T_DICTCOMP", "T_CONSTVAL", "T_SYMBOL", "T_REGEXP",
  "T_VARIANT", "$accept", "program", "global_list", "$@1", "def_list",
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
  "array_elm", "array_comp", "inline_dic", "$@36", "dic_elms", "dic_ext",
  "dic_elm_list", "dic_elm", "dic_dummy_elm_opt", "dic_comp",
  "const_inline_array", "$@37", "const_array_elm_list_opt",
  "const_array_elm_list", "const_array_elm", "const_inline_dic", "$@38",
  "const_dic_elm_list", "const_dic_elm", 0
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
     395,   396,   397,   398
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   147,   146,   148,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   152,   151,   154,   155,   153,   157,
     158,   156,   160,   161,   162,   159,   163,   164,   163,   165,
     167,   168,   166,   170,   171,   169,   173,   172,   175,   174,
     176,   177,   178,   178,   178,   179,   179,   180,   180,   182,
     183,   181,   184,   184,   184,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   189,   189,   189,   189,   189,   191,
     190,   193,   192,   194,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   200,   199,   201,   201,   202,
     202,   202,   204,   203,   205,   205,   205,   205,   207,   206,
     209,   208,   210,   210,   212,   211,   213,   213,   214,   213,
     215,   215,   216,   217,   217,   219,   218,   221,   220,   222,
     222,   224,   223,   225,   225,   225,   226,   227,   228,   228,
     229,   229,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   237,   237,   237,   238,   238,   238,   238,
     238,   239,   239,   239,   239,   240,   240,   240,   241,   241,
     241,   241,   241,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   245,   245,   246,   245,   247,   245,   245,   245,
     245,   248,   245,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   250,   249,   251,   249,   252,
     253,   253,   253,   254,   254,   254,   254,   256,   255,   257,
     257,   258,   258,   259,   259,   260,   260,   260,   260,   260,
     262,   261,   263,   263,   264,   265,   265,   265,   266,   266,
     267,   267,   268,   268,   268,   268,   268,   268,   270,   269,
     271,   271,   272,   272,   273,   273,   273,   273,   273,   273,
     275,   274,   276,   276,   276,   277,   277,   277,   277,   277,
     277
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
       0,     5,     1,     1,     2,     0,     1,     3,     3,     3,
       0,     1,     7,     7,     5,     5,     3,     3,     0,     7,
       0,     1,     1,     3,     2,     2,     1,     1,     1,     1,
       0,     8,     0,     1,     3,     4,     4,     3,     3,     3,
       3
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
     238,   263,   234,     0,   236,     0,   256,   285,   258,     0,
       0,     0,     0,   231,   242,   274,   147,     0,   269,   271,
     270,   126,     0,    93,    97,    82,    82,   108,    82,   139,
     112,   134,     0,     0,     0,    43,     0,     0,     0,    80,
       0,   146,     0,     0,     0,     0,    82,    82,    74,    58,
       0,   151,   149,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   168,   167,   166,   153,     0,
     172,   174,   176,   178,   180,   182,   183,   184,   185,   187,
     188,   189,   190,   192,   193,   194,   196,   197,   199,   200,
     201,   221,   264,   260,   266,   265,     0,   261,     0,     0,
       0,   229,   244,     0,     0,   282,   290,   286,   283,     0,
     298,   222,   224,   226,     0,   268,   273,     0,     0,     0,
       0,     0,    35,    82,   103,    82,     0,    98,    99,     0,
       0,   107,     0,     0,   135,     0,     0,     0,    51,    54,
      85,    86,    87,    88,    84,    83,     0,    79,   143,     0,
     137,    48,    57,    80,    80,    65,     0,     0,   263,   259,
     235,   232,   237,     0,     0,   281,   291,   284,     0,     0,
       0,   310,   300,     0,   274,   272,   244,   278,     0,   279,
     127,   125,     0,   101,    95,     0,    94,    92,     0,   111,
     106,     0,    82,     0,   114,   115,   120,     0,    37,    40,
       0,     0,     0,    81,     0,   142,     0,     0,    66,    69,
     170,   262,   289,   288,   244,     0,   287,   244,   296,     0,
     297,   312,     0,     0,     0,   307,   306,   308,     0,   301,
     302,   309,     0,     0,     0,   128,    90,     0,   104,   100,
       0,   109,     0,     0,     0,   123,   113,   116,   117,     0,
     136,     0,     0,     0,     0,     0,   144,     0,   138,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
     305,   304,   299,     0,   275,   277,   276,     0,   102,    96,
     110,    82,    82,   121,    38,    41,     0,    52,    55,   145,
       0,    68,    70,     0,     0,   289,   288,   295,   294,     0,
       0,   311,   303,   129,   130,   132,     0,   122,    44,     0,
      61,     0,     0,     0,     0,   318,   317,   319,   320,   314,
       0,   118,     0,    61,    71,   293,   292,   316,   315,   131,
       0,    45,    59,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    62,    63,    64,   143,    65,
     157,   481,    66,   158,   482,    67,   159,   367,   552,    68,
     274,    69,    70,   266,   431,    71,   267,   432,    72,   275,
      73,   385,    74,   554,   178,   437,   520,    75,   490,   540,
     179,    76,    77,   163,   164,   269,    78,   253,    79,   146,
     255,   356,   357,   358,   359,    80,   147,   258,   420,    81,
     363,   423,   424,   560,   425,   479,   426,    82,   251,   351,
     507,   533,   534,    83,    84,   427,    85,   436,    86,    87,
     167,   379,    88,   324,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   328,   330,   140,   107,   114,   118,   108,   326,
     327,   109,   141,   247,   248,   249,   250,   110,   237,   334,
     335,   336,   337,   397,   338,   111,   402,   458,   459,   460,
     112,   451,   498,   499
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -396
static const yytype_int16 yypact[] =
{
    -396,    27,  -396,  -396,  -396,   529,   -30,  -396,  1446,    -5,
    -396,  1446,  1446,  1446,  1446,  1446,    81,  1446,  1446,  1446,
    1446,  1446,  1446,  1446,  1446,   860,  -396,  -396,  -396,  -396,
    -396,  -101,  -396,  -396,   -10,   -66,  -396,    21,    29,  1446,
     -46,   903,    39,    42,    57,  -396,  -396,  -396,  -396,    59,
      69,   -11,   -11,  1446,  -396,    87,  1446,  1446,  1446,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,   980,
      45,  -396,  -396,  -396,   260,  -396,  -396,    88,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,    91,
      19,  -396,   488,    97,   142,   147,   148,   146,    52,   162,
      47,    78,   161,  1446,  -396,    -3,   102,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,    33,  -396,  -396,  -396,    37,  -396,
    -396,  -396,  -396,  -396,  1057,   111,   121,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,   110,  1100,  1206,  1249,   117,
      44,  1446,  -396,  -396,  -396,  -396,   119,   -45,  -396,  -396,
     122,   124,  -396,   118,  -396,  1446,  -396,   133,   141,   754,
    -396,  -396,   138,   200,  -396,   200,   139,   754,  1446,  -396,
    -396,  -396,  -396,  -396,  -396,    65,    66,   -39,   143,   128,
    -396,  -396,  -396,  -396,  1446,  1446,  1446,  1446,  1446,  1446,
    1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,
    1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,
    1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,
    1446,  1446,  1446,  1446,  -396,  -396,  -396,  1446,  -396,  -396,
    -396,  1326,  -396,  1446,  -396,    81,  -396,  1489,  -396,    -4,
    1446,  1446,  1446,  -396,  -396,   126,  -396,   157,   220,  -396,
       9,   154,   648,   119,   -31,   138,   138,  -396,   138,  -396,
    -396,  -396,   166,  1446,  1446,  -396,  1446,  1446,   -68,   226,
     -11,  -396,   131,   174,   172,   754,   138,   138,  -396,  -396,
    1446,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,   177,
     142,   147,   148,   146,    52,   162,   162,   162,   162,    47,
      47,    47,    47,    78,    78,    78,   161,   161,  -396,  -396,
    -396,  -396,  1446,  -396,  -396,  1446,    11,  -396,   103,   184,
     106,  -396,   185,   245,   189,  -396,   249,  -396,    31,   196,
    -396,  -396,  -396,  -396,   113,  -396,  1446,  1566,   114,  1446,
    1446,   172,  -396,   138,  -396,   138,   194,   256,  -396,   197,
     172,  -396,   -38,    30,  -396,   199,   202,   179,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  1446,  -396,   212,   754,
    -396,  -396,  -396,    16,    35,  1446,   209,  1446,  1609,  -396,
    -396,  -396,  -396,  1446,  1446,  -396,  1686,  -396,  1729,   132,
    1446,  -396,   -25,   188,  -396,  -396,   190,  -396,   191,  -396,
     272,  -396,   172,    32,  -396,   -31,  -396,  -396,  1369,  -396,
    -396,   225,   -18,   219,   186,   192,  -396,   172,  -396,  -396,
     232,   229,   233,  -396,   -47,  -396,   754,   223,  -396,  -396,
    -396,  -396,   206,   210,   250,   318,  -396,   236,  -396,   237,
    -396,   187,   205,   211,   227,  -396,  -396,  -396,   264,   323,
    -396,  -396,  1446,  1446,  1446,  -396,  -396,  1446,  -396,  -396,
     265,  -396,   270,   201,   283,  -396,  -396,  -396,  -396,   172,
    -396,   754,   754,  1446,   754,   754,  -396,   287,  -396,  1446,
     754,   213,   214,  1446,  1446,  1446,  1446,   350,    15,  -396,
    -396,  -396,  -396,   -25,  -396,  -396,  -396,  1446,  -396,  -396,
    -396,   138,   138,  -396,  -396,  -396,   296,  -396,  -396,  -396,
     297,  -396,  -396,   276,   281,  -396,  -396,  -396,  -396,   -17,
     187,  -396,  -396,   365,  -396,  -396,   309,  -396,  -396,   754,
    -396,  1446,  1446,   234,   235,  -396,  -396,  -396,  -396,  -396,
    1446,  -396,   308,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     172,  -396,  -396,  -396
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,  -396,   239,  -146,  -396,   -69,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -170,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,   310,   -48,   115,  -171,  -396,  -396,  -396,  -396,
    -142,  -396,  -396,   -29,   -28,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,   -37,  -396,   -35,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -160,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -115,   -24,  -396,  -130,  -200,  -396,   193,
     195,   198,   203,   207,     2,    12,  -128,   -72,  -228,   425,
     156,   379,  -396,  -396,  -396,  -396,  -396,  -396,   381,  -396,
      10,  -396,  -396,  -396,  -396,    56,  -396,  -396,  -396,  -396,
    -396,  -396,     8,  -396,  -396,  -395,  -396,  -396,  -396,   -98,
    -394,  -396,  -396,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -234
static const yytype_int16 yytable[] =
{
     172,   139,   299,   325,   165,   257,   278,   457,   461,   354,
     254,   246,   347,   265,   388,   150,   486,   153,   530,   418,
     376,   272,   184,   452,   453,   268,   245,     4,    33,   166,
     454,   543,   544,   339,   398,   113,   467,   474,   454,   376,
     142,   370,   371,   372,   373,   173,   268,   -82,   374,   226,
     181,   227,   117,   340,   281,   144,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   468,   375,   389,   145,   531,   208,   209,   210,
     211,   216,   217,   218,   360,   361,   148,   362,   313,   314,
     315,   455,     7,   149,   487,   151,   256,   155,   348,   545,
     139,   246,   -72,   349,   154,   383,   384,   246,   457,   461,
     355,   353,   156,   185,   160,   456,   202,   203,     9,    10,
     399,   -73,   333,   546,   161,   400,   219,   220,   165,   382,
     162,   262,   421,   422,   547,   548,   124,    26,    27,    28,
      29,    30,   168,   228,   273,   229,   230,   316,   317,   174,
     115,    36,   228,   182,   229,   230,   183,   231,   232,   233,
     325,   282,  -233,   204,  -233,  -233,   231,   232,   233,   205,
     207,   206,   234,   239,   254,   236,  -233,  -233,  -233,   238,
     243,   234,   412,   261,   413,   244,   259,   440,   263,   235,
     260,  -233,   212,   213,   214,   215,   264,    59,   221,   222,
     223,   224,   268,   270,   271,   381,   276,   277,   279,   329,
     305,   306,   307,   308,   280,   344,   246,   246,   345,   246,
     246,    60,    61,   346,   309,   310,   311,   312,   350,   364,
     376,   404,   407,   435,   409,   410,   378,   380,    33,   365,
     366,   387,   368,   369,   390,   391,   246,   392,   394,   393,
     395,   475,   396,   401,   403,   408,   386,   414,   246,   415,
     416,   433,   428,   246,   246,   429,   246,   434,   246,   430,
     246,     7,   439,   449,   462,   465,   463,   464,   442,   443,
     473,   445,   411,   448,     8,   450,   476,   483,   489,   422,
     488,   417,   484,   419,   421,   491,   485,     9,    10,   492,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   493,    25,    26,    27,    28,    29,
      30,   494,   495,   496,   135,   502,   503,   497,   509,   115,
      36,   510,   246,   246,   246,   514,   515,   246,   517,   518,
     536,   537,   511,   466,   522,   500,   512,   504,   505,   506,
     519,   501,   508,   529,   523,   524,   175,   176,   480,   538,
     539,   438,   541,   246,   246,   246,   246,   542,   550,    56,
      57,    58,   551,   561,   557,   558,    59,   246,   525,   526,
     527,   528,   252,   562,   180,   377,   469,   470,   478,   477,
     559,   331,   535,   553,   472,   125,   300,   126,   441,   301,
      60,   177,   405,   302,   446,   532,   549,     0,     0,   303,
     513,   246,   246,     0,   304,     0,     0,     0,     0,     0,
     246,     0,     0,     0,     0,     0,   555,   556,     0,     0,
       0,     0,     0,   116,     0,   535,   119,   120,   121,   122,
     123,     0,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   516,
       0,     0,     0,     0,     0,   521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,     0,     0,     0,     0,     0,     0,
       0,   563,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,    -4,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,     0,    34,    35,    36,
      37,    38,    39,     0,     0,    40,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,   318,   319,   320,     6,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,   341,   342,   343,     0,    60,
      61,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
      31,     0,     0,    32,    33,   352,    34,    35,    36,    37,
      38,    39,     0,     0,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,   119,    53,    54,
     225,     0,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,     0,    59,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,    32,
      33,     0,    34,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,     0,     0,    41,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     7,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     8,     0,   115,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   135,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,   152,   136,
     137,   138,   115,    36,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,     0,     9,    10,    59,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,    60,    61,     0,    33,     0,     0,   115,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     9,    10,    59,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,     0,
      60,    61,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   135,    25,    26,    27,    28,    29,
      30,     0,     0,   240,     0,     0,    56,    57,    58,   115,
      36,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     0,     0,     0,    59,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,   241,
       0,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,   242,     0,     0,    56,    57,    58,   115,    36,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     0,     9,    10,    59,   322,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,    60,
      61,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
     471,     0,   323,     0,     0,    56,    57,    58,   115,    36,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     0,     9,    10,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,    60,
      61,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    56,    57,    58,   115,    36,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     0,     9,    10,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,    60,
     332,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,   322,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    56,    57,    58,   115,    36,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   406,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     0,     9,    10,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,    60,
      61,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    56,    57,    58,   115,    36,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   444,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
     447
};

static const yytype_int16 yycheck[] =
{
      69,    25,   202,   231,    52,   147,   177,   402,   402,    40,
      55,   141,     3,   159,     3,    39,    63,    41,     3,    57,
       4,   167,     3,    48,    49,    64,   141,     0,    66,    53,
      55,    48,    49,    37,     3,    65,     4,    55,    55,     4,
     141,   109,   110,   111,   112,    69,    64,    86,   116,    52,
      74,    54,    57,    57,   184,    65,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    40,   141,    63,   141,    61,    25,    26,    27,
      28,    34,    35,    36,   255,   256,    65,   258,   216,   217,
     218,   116,    11,    64,   141,   141,   141,    55,    89,   116,
     124,   231,    86,    94,    65,   276,   277,   237,   503,   503,
     141,   253,    55,    94,    55,   140,    19,    20,    37,    38,
      89,    86,   237,   140,    55,    94,    48,    49,   176,   275,
     141,   155,   102,   103,   529,   529,    55,    56,    57,    58,
      59,    60,    55,    41,   168,    43,    44,   219,   220,   104,
      69,    70,    41,    65,    43,    44,    65,    55,    56,    57,
     388,   185,    41,    21,    43,    44,    55,    56,    57,    22,
      24,    23,    70,    63,    55,   142,    55,    56,    57,   142,
      63,    70,   353,    65,   355,   141,    64,   387,    55,    87,
      66,    70,    30,    31,    32,    33,    55,   116,    37,    38,
      39,    40,    64,     3,    65,   274,   141,   141,    65,   233,
     208,   209,   210,   211,    86,    89,   346,   347,    61,   349,
     350,   140,   141,     3,   212,   213,   214,   215,    74,    63,
       4,   346,   347,   379,   349,   350,   105,    63,    66,   263,
     264,    64,   266,   267,   141,    61,   376,   141,     3,    64,
      61,   422,     3,    57,   141,   141,   280,    63,   388,     3,
      63,   376,    63,   393,   394,    63,   396,    55,   398,    90,
     400,    11,    63,   141,    86,     3,    86,    86,   393,   394,
      55,   396,   351,   398,    24,   400,    67,    55,    65,   103,
     436,   360,    63,   362,   102,    89,    63,    37,    38,    89,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    64,    55,    56,    57,    58,    59,
      60,     3,    86,    86,    97,    61,     3,   140,    63,    69,
      70,    61,   462,   463,   464,   481,   482,   467,   484,   485,
     511,   512,   141,   412,   490,   140,    63,   462,   463,   464,
      63,   140,   467,     3,   141,   141,    96,    97,   427,    63,
      63,   385,    86,   493,   494,   495,   496,    86,     3,   109,
     110,   111,    63,    65,   140,   140,   116,   507,   493,   494,
     495,   496,   143,   553,    74,   270,   415,   415,   425,   424,
     550,   235,   507,   539,   418,    16,   203,    16,   388,   204,
     140,   141,   346,   205,   396,   503,   530,    -1,    -1,   206,
     479,   541,   542,    -1,   207,    -1,    -1,    -1,    -1,    -1,
     550,    -1,    -1,    -1,    -1,    -1,   541,   542,    -1,    -1,
      -1,    -1,    -1,     8,    -1,   550,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,
      -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   560,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
     111,    -1,    -1,    -1,    -1,   116,   221,   222,   223,     1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,   240,   241,   242,    -1,   140,
     141,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,   322,   100,   101,
     325,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,   116,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,    -1,
     116,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    11,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    97,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,   109,
     110,   111,    69,    70,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,    -1,    -1,    37,    38,   116,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,   140,   141,    -1,    66,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    37,    38,   116,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    -1,    -1,
     140,   141,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    97,    55,    56,    57,    58,    59,
      60,    -1,    -1,    63,    -1,    -1,   109,   110,   111,    69,
      70,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    -1,    -1,   116,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,   109,   110,   111,    69,    70,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    37,    38,   116,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    59,    60,    -1,    -1,   140,
     141,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    -1,   106,    -1,    -1,   109,   110,   111,    69,    70,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    37,    38,   116,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    59,    60,    -1,    -1,   140,
     141,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,    70,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    37,    38,   116,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    59,    60,    -1,    -1,   140,
     141,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,    70,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    37,    38,   116,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      11,    55,    56,    57,    58,    59,    60,    -1,    -1,   140,
     141,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,    69,    70,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   145,   146,   147,     0,   148,     1,    11,    24,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    62,    65,    66,    68,    69,    70,    71,    72,    73,
      76,    81,    82,    85,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   100,   101,   108,   109,   110,   111,   116,
     140,   141,   149,   150,   151,   153,   156,   159,   163,   165,
     166,   169,   172,   174,   176,   181,   185,   186,   190,   192,
     199,   203,   211,   217,   218,   220,   222,   223,   226,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   249,   252,   255,
     261,   269,   274,    65,   250,    69,   243,    57,   251,   243,
     243,   243,   243,   243,    55,   245,   252,   243,   243,   243,
     243,   243,   243,   243,   243,    97,   109,   110,   111,   228,
     248,   256,   141,   152,    65,   141,   193,   200,    65,    64,
     228,   141,    65,   228,    65,    55,    55,   154,   157,   160,
      55,    55,   141,   187,   188,   187,   228,   224,    55,   243,
     243,   243,   151,   228,   104,    96,    97,   141,   178,   184,
     186,   228,    65,    65,     3,    94,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    29,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    34,    35,    36,    48,
      49,    37,    38,    39,    40,   243,    52,    54,    41,    43,
      44,    55,    56,    57,    70,    87,   142,   262,   142,    63,
      63,    63,    63,    63,   141,   227,   230,   257,   258,   259,
     260,   212,   148,   191,    55,   194,   141,   194,   201,    64,
      66,    65,   228,    55,    55,   149,   167,   170,    64,   189,
       3,    65,   149,   228,   164,   173,   141,   141,   189,    65,
      86,   230,   228,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   231,
     233,   234,   235,   236,   237,   238,   238,   238,   238,   239,
     239,   239,   239,   240,   240,   240,   241,   241,   243,   243,
     243,   243,    40,   106,   227,   242,   253,   254,   246,   228,
     247,   244,   141,   227,   263,   264,   265,   266,   268,    37,
      57,   243,   243,   243,    89,    61,     3,     3,    89,    94,
      74,   213,    67,   194,    40,   141,   195,   196,   197,   198,
     189,   189,   189,   204,    63,   228,   228,   161,   228,   228,
     109,   110,   111,   112,   116,   141,     4,   188,   105,   225,
      63,   151,   149,   189,   189,   175,   228,    64,     3,    63,
     141,    61,   141,    64,     3,    61,     3,   267,     3,    89,
      94,    57,   270,   141,   227,   259,   141,   227,   141,   227,
     227,   151,   189,   189,    63,     3,    63,   151,    57,   151,
     202,   102,   103,   205,   206,   208,   210,   219,    63,    63,
      90,   168,   171,   227,    55,   149,   221,   179,   228,    63,
     231,   254,   227,   227,   141,   227,   266,   141,   227,   141,
     227,   275,    48,    49,    55,   116,   140,   269,   271,   272,
     273,   274,    86,    86,    86,     3,   151,     4,    40,   197,
     198,    61,   228,    55,    55,   189,    67,   208,   206,   209,
     151,   155,   158,    55,    63,    63,    63,   141,   149,    65,
     182,    89,    89,    64,     3,    86,    86,   140,   276,   277,
     140,   140,    61,     3,   227,   227,   227,   214,   227,    63,
      61,   141,    63,   151,   149,   149,   228,   149,   149,    63,
     180,   228,   149,   141,   141,   227,   227,   227,   227,     3,
       3,    61,   273,   215,   216,   227,   189,   189,    63,    63,
     183,    86,    86,    48,    49,   116,   140,   269,   274,   277,
       3,    63,   162,   149,   177,   227,   227,   140,   140,   216,
     207,    65,   177,   151
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
#line 241 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 243 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 250 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 264 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 274 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 275 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 276 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->DeclareVariables((yyvsp[(1) - (1)].dp)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 291 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 293 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 304 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 305 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 307 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 318 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 319 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 321 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 340 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 341 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 343 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 344 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 357 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 358 "syntax/tjs.y"
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
#line 376 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 380 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 387 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 388 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 389 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 401 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 402 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 403 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 408 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 409 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 429 "syntax/tjs.y"
    { if ((yyvsp[(2) - (3)].dp)) cc->DeclareVariables((yyvsp[(2) - (3)].dp)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 437 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 441 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 446 "syntax/tjs.y"
    { (yyval.dp) = nullptr; ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 447 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (1)].dp); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 448 "syntax/tjs.y"
    { (yyval.dp) = nullptr; cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 453 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 454 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 459 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 460 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 484 "syntax/tjs.y"
    { if ((yyvsp[(2) - (5)].dp)->Count() == 0) { YYABORT; }
											  cc->EnterForInCode((yyvsp[(2) - (5)].dp), (yyvsp[(4) - (5)].np)); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 486 "syntax/tjs.y"
    { cc->ExitForInCode(); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 494 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num)))); ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 496 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num))));
											  (yyval.dp)->SetConst(); ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 499 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))));
											  (yyval.dp)->SetNotLocal(); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 506 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (2)].dp); ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 510 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 511 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); (yyval.dp)->SetConst(); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 518 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); (yyval.dp)->Push((yyvsp[(1) - (1)].dn)); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 519 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp); (yyval.dp)->Push((yyvsp[(3) - (3)].dn)); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 529 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 531 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 547 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 552 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 557 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 562 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 589 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 591 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 596 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 598 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 614 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 618 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 622 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 627 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 628 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 635 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 639 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 650 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 656 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 661 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 665 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 677 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 681 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 686 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 687 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 697 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 702 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 703 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 710 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 711 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 717 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 718 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 723 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 724 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 729 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 732 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 736 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 737 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 738 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 744 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 749 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 753 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 754 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 759 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 760 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 765 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 766 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 767 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 768 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 771 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 772 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 773 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 774 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 775 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 777 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 778 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 779 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 780 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 786 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 789 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 795 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 796 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 800 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 802 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 806 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 807 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 811 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 816 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 817 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 821 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 822 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 823 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 824 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 825 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 829 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 830 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 831 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 833 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 837 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 838 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 839 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 840 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 845 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 846 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 847 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 851 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 852 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 853 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 855 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 859 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 863 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 864 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 865 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 866 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 867 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 868 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 870 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 871 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 872 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 873 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 874 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 875 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 877 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 878 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 879 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 881 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 882 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 884 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 890 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 892 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 896 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 897 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 898 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 899 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 901 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 904 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 905 "syntax/tjs.y"
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
#line 912 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 913 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 914 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 916 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 923 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 925 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 928 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 929 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 930 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 931 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 932 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 934 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 935 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 936 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 937 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 938 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 939 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 941 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 942 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 949 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 954 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 955 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 956 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 960 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 961 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 962 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 963 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 969 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 973 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 980 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 984 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 985 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 990 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 991 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 997 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYCOMP, (yyvsp[(1) - (5)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1002 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1007 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1011 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1013 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1019 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1023 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1028 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1038 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1039 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1044 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1045 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1059 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICTCOMP, (yyvsp[(1) - (7)].np), (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1064 "syntax/tjs.y"
    { tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(tTJSVariant(lx->GetString((yyvsp[(1) - (7)].num))));
										  (yyval.np) = cc->MakeNP2(T_DICTCOMP, node0, (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1071 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1076 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1080 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1082 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1090 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1097 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 1115 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 1116 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1117 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1118 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1119 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1120 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1125 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1132 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1145 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1146 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1147 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1148 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1149 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1150 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 4276 "tjs.tab.cpp"
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
#line 1155 "syntax/tjs.y"



}
