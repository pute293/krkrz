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
     T_RATIONAL = 295,
     T_ASTERISK = 296,
     T_EXCRAMATION = 297,
     T_TILDE = 298,
     T_DECREMENT = 299,
     T_INCREMENT = 300,
     T_NEW = 301,
     T_DELETE = 302,
     T_TYPEOF = 303,
     T_PLUS = 304,
     T_MINUS = 305,
     T_SHARP = 306,
     T_DOLLAR = 307,
     T_ISVALID = 308,
     T_INVALIDATE = 309,
     T_INSTANCEOF = 310,
     T_LPARENTHESIS = 311,
     T_DOT = 312,
     T_LBRACKET = 313,
     T_THIS = 314,
     T_SUPER = 315,
     T_GLOBAL = 316,
     T_RBRACKET = 317,
     T_CLASS = 318,
     T_RPARENTHESIS = 319,
     T_COLON = 320,
     T_SEMICOLON = 321,
     T_LBRACE = 322,
     T_RBRACE = 323,
     T_CONTINUE = 324,
     T_FUNCTION = 325,
     T_ARROW = 326,
     T_DEBUGGER = 327,
     T_DEFAULT = 328,
     T_CASE = 329,
     T_EXTENDS = 330,
     T_FINALLY = 331,
     T_PROPERTY = 332,
     T_PRIVATE = 333,
     T_PUBLIC = 334,
     T_PROTECTED = 335,
     T_STATIC = 336,
     T_RETURN = 337,
     T_BREAK = 338,
     T_EXPORT = 339,
     T_IMPORT = 340,
     T_SWITCH = 341,
     T_IN = 342,
     T_INCONTEXTOF = 343,
     T_FOREACH = 344,
     T_FOR = 345,
     T_WHILE = 346,
     T_UNTIL = 347,
     T_DO = 348,
     T_LOOP = 349,
     T_IF = 350,
     T_UNLESS = 351,
     T_VAR = 352,
     T_CONST = 353,
     T_ENUM = 354,
     T_GOTO = 355,
     T_THROW = 356,
     T_TRY = 357,
     T_SETTER = 358,
     T_GETTER = 359,
     T_ELSE = 360,
     T_CATCH = 361,
     T_OMIT = 362,
     T_SYNCHRONIZED = 363,
     T_WITH = 364,
     T_INT = 365,
     T_REAL = 366,
     T_STRING = 367,
     T_OCTET = 368,
     T_FALSE = 369,
     T_NULL = 370,
     T_TRUE = 371,
     T_VOID = 372,
     T_NAN = 373,
     T_INFINITY = 374,
     T_UPLUS = 375,
     T_UMINUS = 376,
     T_EVAL = 377,
     T_POSTDECREMENT = 378,
     T_POSTINCREMENT = 379,
     T_IGNOREPROP = 380,
     T_PROPACCESS = 381,
     T_ARG = 382,
     T_EXPANDARG = 383,
     T_INLINEARRAY = 384,
     T_ARRAYARG = 385,
     T_INLINEDIC = 386,
     T_DICELM = 387,
     T_WITHDOT = 388,
     T_THIS_PROXY = 389,
     T_WITHDOT_PROXY = 390,
     T_ITERATOR = 391,
     T_ITERNEXT = 392,
     T_ITERCURRENT = 393,
     T_ARRAYCOMP = 394,
     T_DICTCOMP = 395,
     T_CONSTVAL = 396,
     T_SYMBOL = 397,
     T_REGEXP = 398,
     T_VARIANT = 399
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
#line 316 "tjs.tab.cpp"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 328 "tjs.tab.cpp"

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
#define YYLAST   1979

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNRULES -- Number of states.  */
#define YYNSTATES  566

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
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
     618,   622,   626,   630,   633,   636,   638,   641,   644,   647,
     650,   653,   656,   659,   662,   665,   668,   671,   674,   677,
     680,   683,   686,   690,   695,   698,   703,   706,   711,   714,
     716,   720,   722,   726,   731,   733,   734,   739,   740,   745,
     748,   751,   754,   755,   759,   761,   763,   765,   767,   769,
     771,   773,   775,   777,   779,   781,   783,   784,   788,   789,
     793,   798,   800,   802,   806,   807,   809,   811,   813,   814,
     819,   821,   823,   825,   829,   830,   832,   838,   844,   850,
     854,   858,   859,   865,   867,   869,   872,   873,   875,   879,
     883,   887,   888,   890,   898,   906,   912,   918,   922,   926,
     927,   935,   936,   938,   940,   944,   947,   950,   952,   954,
     956,   958,   959,   968,   969,   971,   975,   980,   985,   989,
     993,   997
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,   147,    -1,    -1,   148,   149,    -1,    -1,
     149,   150,    -1,   149,     1,    66,    -1,   151,    -1,   152,
      -1,    66,    -1,   229,    66,    -1,   167,    -1,   170,    -1,
     173,    -1,   154,    -1,   157,    -1,   160,    -1,   175,    -1,
     182,    -1,   164,    -1,    83,    66,    -1,    69,    66,    -1,
      72,    66,    -1,   186,    -1,   191,    -1,   204,    -1,   212,
      -1,   218,    -1,   219,    -1,   221,    -1,   223,    -1,   224,
      -1,   227,    -1,    -1,    67,   153,   149,    68,    -1,    -1,
      -1,    91,   155,    56,   229,    64,   156,   150,    -1,    -1,
      -1,    92,   158,    56,   229,    64,   159,   150,    -1,    -1,
      -1,    -1,    93,   161,   150,   162,    91,    56,   229,    64,
     163,    66,    -1,   166,   152,    -1,    -1,   166,   229,   165,
     152,    -1,    94,    -1,    -1,    -1,    95,    56,   168,   229,
     169,    64,   150,    -1,    -1,    -1,    96,    56,   171,   229,
     172,    64,   150,    -1,    -1,   167,   105,   174,   150,    -1,
      -1,   177,   179,    66,   176,   180,    66,   181,    64,   150,
     178,    -1,    90,    56,    -1,    -1,    -1,   187,    -1,   229,
      -1,    -1,   229,    -1,    -1,   229,    -1,    -1,    -1,   177,
     185,    87,   229,    64,   183,   150,   184,   178,    -1,    97,
     142,   190,    -1,    98,   142,   190,    -1,   142,   190,    -1,
     187,    66,    -1,    97,   188,    -1,    98,   188,    -1,   189,
      -1,   188,     3,   189,    -1,   142,   190,    -1,   142,   190,
       4,   228,    -1,    -1,    65,   142,    -1,    65,   117,    -1,
      65,   110,    -1,    65,   111,    -1,    65,   112,    -1,    65,
     113,    -1,    -1,    70,   142,   192,   195,   190,   152,    -1,
      -1,    70,   194,   195,   190,   152,    -1,    -1,    56,   199,
      64,    -1,    56,   196,    64,    -1,    56,   197,     3,   199,
      64,    -1,    -1,   197,    -1,   198,    -1,   197,     3,   198,
      -1,   142,   190,    -1,   142,   190,     4,   228,    -1,    41,
      -1,   142,   190,    41,    -1,    -1,    71,   201,   202,   190,
     203,    -1,   142,   190,    -1,   195,    -1,    58,    62,    -1,
      58,   229,    62,    -1,   152,    -1,    -1,    77,   142,    67,
     205,   206,    68,    -1,   207,    -1,   209,    -1,   207,   209,
      -1,   209,   207,    -1,    -1,   103,    56,   142,   190,    64,
     208,   152,    -1,    -1,   211,   210,   152,    -1,   104,    56,
      64,   190,    -1,   104,   190,    -1,    -1,    63,   142,   213,
     214,   152,    -1,    -1,    75,   228,    -1,    -1,    75,   228,
       3,   215,   216,    -1,   217,    -1,   216,     3,   217,    -1,
     228,    -1,    82,    66,    -1,    82,   229,    66,    -1,    -1,
      86,    56,   229,    64,   220,   152,    -1,    -1,   109,    56,
     229,    64,   222,   150,    -1,    74,   229,    65,    -1,    73,
      65,    -1,    -1,   102,   225,   150,   226,   150,    -1,   106,
      -1,   106,    56,    64,    -1,   106,    56,   142,    64,    -1,
     101,   229,    66,    -1,   231,    -1,   230,    -1,   230,    95,
     229,    -1,   231,    -1,   230,     3,   231,    -1,   232,    -1,
     232,    29,   231,    -1,   232,     4,   231,    -1,   232,     5,
     231,    -1,   232,     6,   231,    -1,   232,     7,   231,    -1,
     232,     8,   231,    -1,   232,     9,   231,    -1,   232,    10,
     231,    -1,   232,    11,   231,    -1,   232,    12,   231,    -1,
     232,    13,   231,    -1,   232,    14,   231,    -1,   232,    15,
     231,    -1,   232,    18,   231,    -1,   232,    17,   231,    -1,
     232,    16,   231,    -1,   233,    -1,   233,    19,   232,    65,
     232,    -1,   234,    -1,   233,    20,   234,    -1,   235,    -1,
     234,    21,   235,    -1,   236,    -1,   235,    22,   236,    -1,
     237,    -1,   236,    23,   237,    -1,   238,    -1,   237,    24,
     238,    -1,   239,    -1,   238,    25,   239,    -1,   238,    26,
     239,    -1,   238,    27,   239,    -1,   238,    28,   239,    -1,
     240,    -1,   239,    30,   240,    -1,   239,    31,   240,    -1,
     239,    32,   240,    -1,   239,    33,   240,    -1,   241,    -1,
     240,    34,   241,    -1,   240,    35,   241,    -1,   240,    36,
     241,    -1,   242,    -1,   241,    49,   242,    -1,   241,    50,
     242,    -1,   244,    -1,   242,    37,   244,    -1,   242,    38,
     244,    -1,   242,    39,   244,    -1,   242,    40,   244,    -1,
     243,   244,    -1,   242,    41,    -1,   245,    -1,    42,   244,
      -1,    43,   244,    -1,    44,   244,    -1,    45,   244,    -1,
      46,   253,    -1,    54,   244,    -1,    53,   244,    -1,   245,
      53,    -1,    47,   244,    -1,    48,   244,    -1,    51,   244,
      -1,    52,   244,    -1,    49,   244,    -1,    50,   244,    -1,
      24,   244,    -1,    41,   244,    -1,   245,    55,   244,    -1,
      56,   110,    64,   244,    -1,   110,   244,    -1,    56,   111,
      64,   244,    -1,   111,   244,    -1,    56,   112,    64,   244,
      -1,   112,   244,    -1,   246,    -1,   246,    88,   245,    -1,
     250,    -1,    56,   229,    64,    -1,   246,    58,   229,    62,
      -1,   253,    -1,    -1,   246,    57,   247,   142,    -1,    -1,
     246,    71,   248,   142,    -1,   246,    45,    -1,   246,    44,
      -1,   246,    42,    -1,    -1,    57,   249,   142,    -1,   141,
      -1,   142,    -1,    59,    -1,    60,    -1,   193,    -1,   200,
      -1,    61,    -1,   117,    -1,   256,    -1,   262,    -1,   270,
      -1,   275,    -1,    -1,    11,   251,   143,    -1,    -1,    38,
     252,   143,    -1,   246,    56,   254,    64,    -1,   107,    -1,
     255,    -1,   254,     3,   255,    -1,    -1,    41,    -1,   243,
      -1,   228,    -1,    -1,    58,   257,   258,    62,    -1,   259,
      -1,   261,    -1,   260,    -1,   259,     3,   260,    -1,    -1,
     228,    -1,   228,    90,   142,    87,   228,    -1,   261,    90,
     142,    87,   228,    -1,   261,     3,   142,    87,   228,    -1,
     261,     3,   228,    -1,   261,    95,   228,    -1,    -1,    37,
      58,   263,   264,    62,    -1,   265,    -1,   269,    -1,   266,
     268,    -1,    -1,   267,    -1,   266,     3,   267,    -1,   228,
       3,   228,    -1,   142,    65,   228,    -1,    -1,     3,    -1,
     228,     3,   228,    90,   142,    87,   228,    -1,   142,    65,
     228,    90,   142,    87,   228,    -1,   269,    90,   142,    87,
     228,    -1,   269,     3,   142,    87,   228,    -1,   269,     3,
     228,    -1,   269,    95,   228,    -1,    -1,    56,    98,    64,
      58,   271,   272,    62,    -1,    -1,   273,    -1,   274,    -1,
     273,     3,   274,    -1,    50,   141,    -1,    49,   141,    -1,
     141,    -1,   117,    -1,   270,    -1,   275,    -1,    -1,    56,
      98,    64,    37,    58,   276,   277,    62,    -1,    -1,   278,
      -1,   277,     3,   278,    -1,   141,     3,    50,   141,    -1,
     141,     3,    49,   141,    -1,   141,     3,   141,    -1,   141,
       3,   117,    -1,   141,     3,   270,    -1,   141,     3,   275,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   237,   237,   242,   242,   248,   250,   251,   258,   259,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   292,   292,   305,   306,   305,   319,
     320,   319,   341,   342,   344,   341,   358,   359,   359,   381,
     388,   389,   388,   402,   403,   402,   409,   409,   430,   429,
     438,   442,   447,   448,   449,   454,   455,   460,   461,   485,
     487,   484,   495,   497,   500,   507,   511,   512,   519,   520,
     530,   531,   536,   538,   539,   540,   541,   542,   543,   548,
     548,   558,   558,   571,   573,   574,   575,   579,   581,   585,
     586,   590,   592,   597,   599,   615,   615,   623,   624,   628,
     629,   630,   636,   635,   644,   645,   646,   647,   651,   651,
     662,   662,   671,   672,   678,   678,   685,   687,   688,   688,
     693,   694,   698,   703,   704,   711,   710,   718,   717,   724,
     725,   730,   730,   737,   738,   739,   745,   750,   754,   755,
     760,   761,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   787,
     788,   796,   797,   801,   802,   807,   808,   812,   813,   817,
     818,   822,   823,   824,   825,   826,   830,   831,   832,   833,
     834,   838,   839,   840,   841,   846,   847,   848,   852,   853,
     854,   855,   856,   857,   861,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   892,
     893,   898,   899,   900,   901,   902,   902,   906,   906,   914,
     915,   916,   917,   917,   925,   927,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   940,   943,   943,
     951,   956,   957,   958,   962,   963,   964,   965,   971,   971,
     980,   981,   986,   987,   992,   993,   998,  1003,  1008,  1013,
    1015,  1021,  1021,  1029,  1030,  1034,  1038,  1040,  1041,  1046,
    1047,  1054,  1056,  1060,  1065,  1072,  1077,  1082,  1084,  1092,
    1092,  1102,  1104,  1110,  1111,  1117,  1118,  1119,  1120,  1121,
    1122,  1127,  1127,  1139,  1141,  1142,  1147,  1148,  1149,  1150,
    1151,  1152
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
  "\">>\"", "\"<<\"", "\">>>\"", "\"%\"", "\"/\"", "\"\\\\\"",
  "\"\\\\\\\\\"", "\"*\"", "\"!\"", "\"~\"", "\"--\"", "\"++\"", "\"new\"",
  "\"delete\"", "\"typeof\"", "\"+\"", "\"-\"", "\"#\"", "\"$\"",
  "\"isvalid\"", "\"invalidate\"", "\"instanceof\"", "\"(\"", "\".\"",
  "\"[\"", "\"this\"", "\"super\"", "\"global\"", "\"]\"", "\"class\"",
  "\")\"", "\":\"", "\";\"", "\"{\"", "\"}\"", "\"continue\"",
  "\"function\"", "\"->\"", "\"debugger\"", "\"default\"", "\"case\"",
  "\"extends\"", "\"finally\"", "\"property\"", "\"private\"",
  "\"public\"", "\"protected\"", "\"static\"", "\"return\"", "\"break\"",
  "\"export\"", "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"",
  "\"foreach\"", "\"for\"", "\"while\"", "\"until\"", "\"do\"", "\"loop\"",
  "\"if\"", "\"unless\"", "\"var\"", "\"const\"", "\"enum\"", "\"goto\"",
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
     395,   396,   397,   398,   399
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   148,   147,   149,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   153,   152,   155,   156,   154,   158,
     159,   157,   161,   162,   163,   160,   164,   165,   164,   166,
     168,   169,   167,   171,   172,   170,   174,   173,   176,   175,
     177,   178,   179,   179,   179,   180,   180,   181,   181,   183,
     184,   182,   185,   185,   185,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   190,   190,   190,   190,   190,   192,
     191,   194,   193,   195,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   201,   200,   202,   202,   203,
     203,   203,   205,   204,   206,   206,   206,   206,   208,   207,
     210,   209,   211,   211,   213,   212,   214,   214,   215,   214,
     216,   216,   217,   218,   218,   220,   219,   222,   221,   223,
     223,   225,   224,   226,   226,   226,   227,   228,   229,   229,
     230,   230,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   232,
     232,   233,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   238,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   241,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   247,   246,   248,   246,   246,
     246,   246,   249,   246,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   251,   250,   252,   250,
     253,   254,   254,   254,   255,   255,   255,   255,   257,   256,
     258,   258,   259,   259,   260,   260,   261,   261,   261,   261,
     261,   263,   262,   264,   264,   265,   266,   266,   266,   267,
     267,   268,   268,   269,   269,   269,   269,   269,   269,   271,
     270,   272,   272,   273,   273,   274,   274,   274,   274,   274,
     274,   276,   275,   277,   277,   277,   278,   278,   278,   278,
     278,   278
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
       3,     3,     3,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     4,     2,     4,     2,     4,     2,     1,
       3,     1,     3,     4,     1,     0,     4,     0,     4,     2,
       2,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       4,     1,     1,     3,     0,     1,     1,     1,     0,     4,
       1,     1,     1,     3,     0,     1,     5,     5,     5,     3,
       3,     0,     5,     1,     1,     2,     0,     1,     3,     3,
       3,     0,     1,     7,     7,     5,     5,     3,     3,     0,
       7,     0,     1,     1,     3,     2,     2,     1,     1,     1,
       1,     0,     8,     0,     1,     3,     4,     4,     3,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   256,     0,     0,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   268,   246,   247,
     250,     0,    10,    34,     0,    91,   105,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    39,    42,    49,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,   251,
     244,   245,     6,     8,     9,    15,    16,    17,    20,     0,
      12,    13,    14,    18,    62,    19,    24,     0,    25,   248,
     249,    26,    27,    28,    29,    30,    31,    32,    33,     0,
     148,   150,   152,   169,   171,   173,   175,   177,   179,   181,
     186,   191,   195,     0,   198,   205,   229,   231,   234,   252,
     253,   254,   255,     7,     0,    91,   220,   281,     0,   221,
     206,   207,   208,   209,     0,     0,   210,   214,   215,   218,
     219,   216,   217,   212,   211,     0,     0,     0,     0,     0,
       0,   274,   124,     5,    22,    89,    93,    93,    23,   140,
       0,     0,   133,     0,    21,     0,    60,     0,     0,     0,
      50,    53,    82,    76,    78,    77,     0,     0,     0,   224,
     226,   228,    46,    47,    56,     0,     0,   245,     0,     0,
      63,    64,    75,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   203,   213,     0,   241,
     240,   239,   264,   235,     0,   237,     0,   257,   286,   259,
       0,     0,     0,     0,   232,   243,   275,   147,     0,   270,
     272,   271,   126,     0,    93,    97,    82,    82,   108,    82,
     139,   112,   134,     0,     0,     0,    43,     0,     0,     0,
      80,     0,   146,     0,     0,     0,     0,    82,    82,    74,
      58,     0,   151,   149,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   168,   167,   166,   153,
       0,   172,   174,   176,   178,   180,   182,   183,   184,   185,
     187,   188,   189,   190,   192,   193,   194,   196,   197,   199,
     200,   201,   202,   222,   265,   261,   267,   266,     0,   262,
       0,     0,     0,   230,   245,     0,     0,   283,   291,   287,
     284,     0,   299,   223,   225,   227,     0,   269,   274,     0,
       0,     0,     0,     0,    35,    82,   103,    82,     0,    98,
      99,     0,     0,   107,     0,     0,   135,     0,     0,     0,
      51,    54,    85,    86,    87,    88,    84,    83,     0,    79,
     143,     0,   137,    48,    57,    80,    80,    65,     0,     0,
     264,   260,   236,   233,   238,     0,     0,   282,   292,   285,
       0,     0,     0,   311,   301,     0,   275,   273,   245,   279,
       0,   280,   127,   125,     0,   101,    95,     0,    94,    92,
       0,   111,   106,     0,    82,     0,   114,   115,   120,     0,
      37,    40,     0,     0,     0,    81,     0,   142,     0,     0,
      66,    69,   170,   263,   290,   289,   245,     0,   288,   245,
     297,     0,   298,   313,     0,     0,     0,   308,   307,   309,
       0,   302,   303,   310,     0,     0,     0,   128,    90,     0,
     104,   100,     0,   109,     0,     0,     0,   123,   113,   116,
     117,     0,   136,     0,     0,     0,     0,     0,   144,     0,
     138,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   314,   306,   305,   300,     0,   276,   278,   277,     0,
     102,    96,   110,    82,    82,   121,    38,    41,     0,    52,
      55,   145,     0,    68,    70,     0,     0,   290,   289,   296,
     295,     0,     0,   312,   304,   129,   130,   132,     0,   122,
      44,     0,    61,     0,     0,     0,     0,   319,   318,   320,
     321,   315,     0,   118,     0,    61,    71,   294,   293,   317,
     316,   131,     0,    45,    59,   119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    62,    63,    64,   143,    65,
     157,   483,    66,   158,   484,    67,   159,   369,   554,    68,
     275,    69,    70,   267,   433,    71,   268,   434,    72,   276,
      73,   387,    74,   556,   178,   439,   522,    75,   492,   542,
     179,    76,    77,   163,   164,   270,    78,   254,    79,   146,
     256,   358,   359,   360,   361,    80,   147,   259,   422,    81,
     365,   425,   426,   562,   427,   481,   428,    82,   252,   353,
     509,   535,   536,    83,    84,   429,    85,   438,    86,    87,
     167,   381,    88,   326,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   330,   332,   140,   107,   114,   118,   108,   328,
     329,   109,   141,   248,   249,   250,   251,   110,   238,   336,
     337,   338,   339,   399,   340,   111,   404,   460,   461,   462,
     112,   453,   500,   501
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -397
static const yytype_int16 yypact[] =
{
    -397,    25,  -397,  -397,  -397,   535,   -38,  -397,  1518,    -3,
    -397,  1518,  1518,  1518,  1518,  1518,    82,  1518,  1518,  1518,
    1518,  1518,  1518,  1518,  1518,   874,  -397,  -397,  -397,  -397,
    -397,  -110,  -397,  -397,    23,   -55,  -397,    24,    27,  1518,
     -47,   951,    32,    65,    66,  -397,  -397,  -397,  -397,    70,
      72,    -5,    -5,  1518,  -397,    94,  1518,  1518,  1518,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  1028,
      46,  -397,  -397,  -397,   458,  -397,  -397,    89,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,    92,
       9,  -397,   292,    60,   138,   142,   137,   143,   147,    11,
      98,   -11,   108,  1518,  -397,    21,   112,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,    28,  -397,  -397,  -397,    33,  -397,
    -397,  -397,  -397,  -397,  1105,   121,   146,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,   116,  1207,  1251,  1353,   117,
      40,  1518,  -397,  -397,  -397,  -397,   129,   -37,  -397,  -397,
     122,   130,  -397,   132,  -397,  1518,  -397,   145,   149,   772,
    -397,  -397,   144,   204,  -397,   204,   150,   772,  1518,  -397,
    -397,  -397,  -397,  -397,  -397,    73,    78,   -14,   159,   139,
    -397,  -397,  -397,  -397,  1518,  1518,  1518,  1518,  1518,  1518,
    1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,
    1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,
    1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,  1518,
    1518,  1518,  1518,  1518,  1518,  -397,  -397,  -397,  1518,  -397,
    -397,  -397,  1397,  -397,  1518,  -397,    82,  -397,  1595,  -397,
      -6,  1518,  1518,  1518,  -397,  -397,   118,  -397,   165,   225,
    -397,     4,   154,   670,   129,   -31,   144,   144,  -397,   144,
    -397,  -397,  -397,   166,  1518,  1518,  -397,  1518,  1518,   -64,
     227,    -5,  -397,   126,   174,   172,   772,   144,   144,  -397,
    -397,  1518,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
     177,   138,   142,   137,   143,   147,    11,    11,    11,    11,
      98,    98,    98,    98,   -11,   -11,   -11,   108,   108,  -397,
    -397,  -397,  -397,  -397,  1518,  -397,  -397,  1518,    13,  -397,
     103,   184,   105,  -397,   185,   246,   189,  -397,   249,  -397,
      34,   196,  -397,  -397,  -397,  -397,   113,  -397,  1518,  1639,
     114,  1518,  1518,   172,  -397,   144,  -397,   144,   194,   256,
    -397,   197,   172,  -397,    17,   -21,  -397,   198,   200,   176,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  1518,  -397,
     213,   772,  -397,  -397,  -397,    10,    16,  1518,   207,  1518,
    1716,  -397,  -397,  -397,  -397,  1518,  1518,  -397,  1760,  -397,
    1837,   131,  1518,  -397,   -26,   187,  -397,  -397,   188,  -397,
     190,  -397,   273,  -397,   172,    31,  -397,   -31,  -397,  -397,
    1474,  -397,  -397,   222,   -29,   211,   178,   183,  -397,   172,
    -397,  -397,   232,   226,   230,  -397,   -46,  -397,   772,   223,
    -397,  -397,  -397,  -397,   201,   221,   247,   310,  -397,   228,
    -397,   229,  -397,   173,   179,   181,   219,  -397,  -397,  -397,
     257,   315,  -397,  -397,  1518,  1518,  1518,  -397,  -397,  1518,
    -397,  -397,   259,  -397,   262,   186,   261,  -397,  -397,  -397,
    -397,   172,  -397,   772,   772,  1518,   772,   772,  -397,   263,
    -397,  1518,   772,   191,   202,  1518,  1518,  1518,  1518,   323,
      19,  -397,  -397,  -397,  -397,   -26,  -397,  -397,  -397,  1518,
    -397,  -397,  -397,   144,   144,  -397,  -397,  -397,   265,  -397,
    -397,  -397,   266,  -397,  -397,   244,   245,  -397,  -397,  -397,
    -397,   -16,   173,  -397,  -397,   344,  -397,  -397,   284,  -397,
    -397,   772,  -397,  1518,  1518,   212,   214,  -397,  -397,  -397,
    -397,  -397,  1518,  -397,   286,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,   172,  -397,  -397,  -397
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -397,  -397,  -397,  -397,   215,  -146,  -397,   -69,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -199,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,   283,   -49,    88,  -171,  -397,  -397,  -397,  -397,
    -142,  -397,  -397,   -56,   -53,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,   -65,  -397,   -57,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -182,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -115,   -24,  -397,  -130,  -200,  -397,   168,
     169,   167,   170,   171,   -15,    -1,  -100,  -106,  -228,   427,
     141,   358,  -397,  -397,  -397,  -397,  -397,  -397,   359,  -397,
      -4,  -397,  -397,  -397,  -397,    36,  -397,  -397,  -397,  -397,
    -397,  -397,   -13,  -397,  -397,  -396,  -397,  -397,  -397,  -118,
    -395,  -397,  -397,  -144
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -235
static const yytype_int16 yytable[] =
{
     172,   139,   300,   165,   327,   258,   279,   349,   459,   463,
     356,   247,   184,   266,   378,   150,   390,   153,   488,   255,
     378,   273,   532,   454,   455,     4,   246,   476,   113,   166,
     456,   341,   142,   545,   546,   469,   269,   400,   219,   220,
     456,   212,   213,   214,   215,   173,   372,   373,   374,   375,
     181,   269,   342,   376,   282,   117,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   470,   -82,   227,   420,   228,   391,   377,   202,
     203,   533,   423,   424,    33,   362,   363,   145,   364,   144,
     148,   457,   149,     7,   350,   151,   489,   -72,   154,   351,
     139,   547,   247,   -73,   185,   257,   385,   386,   247,   459,
     463,   357,   355,   317,   318,   458,   314,   315,   316,     9,
      10,   155,   156,   335,   401,   548,   160,   165,   161,   402,
     384,   263,   216,   217,   218,   549,   550,   162,   124,    26,
      27,    28,    29,    30,   274,   221,   222,   223,   224,   225,
     168,   174,   115,    36,   229,   182,   230,   231,   183,   204,
     206,   283,   327,   229,   205,   230,   231,   207,   232,   233,
     234,   237,   208,   209,   210,   211,   239,   232,   233,   234,
     240,   244,   245,   235,   414,   255,   415,   260,  -234,   442,
    -234,  -234,   235,   306,   307,   308,   309,   261,   262,    59,
     236,   264,  -234,  -234,  -234,   265,   383,   271,   346,   269,
     331,   310,   311,   312,   313,   277,   272,  -234,   247,   247,
     278,   247,   247,    60,    61,   280,   281,   347,   348,   352,
     366,   378,   380,   406,   409,   437,   411,   412,   382,    33,
     367,   368,   389,   370,   371,   392,   393,   394,   247,   396,
     395,   397,   398,   477,   403,   405,   410,   388,   416,   417,
     247,   418,   430,   435,   431,   247,   247,   432,   247,   436,
     247,   441,   247,   451,   464,   465,   467,   466,   475,   478,
     444,   445,   424,   447,   413,   450,   423,   452,   485,   491,
     486,   493,   490,   419,   487,   421,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   494,   495,   496,   499,   497,   498,   135,   505,   504,
     502,   201,   503,   511,   512,   514,   531,   521,   513,   540,
     541,   543,   544,   525,   247,   247,   247,   516,   517,   247,
     519,   520,   538,   539,   526,   468,   524,   552,   553,   506,
     507,   508,   563,   559,   510,   560,   564,   180,   253,   379,
     482,   471,   480,   440,   472,   247,   247,   247,   247,   479,
     561,   301,   303,   302,   125,   126,   304,   333,   305,   247,
     527,   528,   529,   530,   407,   448,   443,   534,   551,     0,
       0,     0,     0,     0,   537,   555,   474,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   515,   247,   247,     0,     0,     0,     0,     0,
       0,     0,   247,     0,     0,     0,     0,     0,   557,   558,
       0,     0,     0,     0,     0,   116,     0,   537,   119,   120,
     121,   122,   123,     0,   127,   128,   129,   130,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   518,     0,     0,     0,     0,     0,   523,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,   169,   170,   171,     0,     0,     0,     0,
       0,     0,     0,   565,     0,     9,    10,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   115,    36,
     226,     0,     0,     0,     0,    -4,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,   175,   176,     0,     0,     8,
       0,     0,     0,   169,   170,   171,     0,     0,    56,    57,
      58,     0,     9,    10,     0,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,    31,    60,
     177,    32,    33,     0,    34,    35,    36,    37,    38,    39,
       0,     0,    40,     0,     0,     0,     0,    41,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,   319,   320,
     321,   322,    59,     0,     0,   323,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
     345,     6,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,   354,    34,
      35,    36,    37,    38,    39,     0,     0,    40,     0,     0,
       0,   119,    41,    42,   226,     0,    43,     0,     0,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,     7,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    60,    61,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
       0,    34,    35,    36,    37,    38,    39,     0,     0,    40,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,     7,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    60,    61,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   137,   138,     0,     9,    10,
       0,    59,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,     0,    60,    61,   152,     0,     0,
       0,   115,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,     0,     9,    10,     0,    59,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,    60,    61,     0,    33,     0,     0,   115,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     9,    10,     0,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,     0,    60,
      61,     0,     0,     0,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     7,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    60,    61,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     7,    25,    26,    27,    28,    29,    30,     0,
       0,   241,     0,     0,     0,     8,     0,   115,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,     0,     0,   242,     0,    56,    57,    58,
       0,   115,    36,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,     7,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    60,    61,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     7,    25,
      26,    27,    28,    29,    30,     0,     0,   243,     0,     0,
       0,     8,     0,   115,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,   324,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    56,    57,    58,     0,   115,    36,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     0,     8,     0,
       0,     0,     0,     0,   325,     0,     0,    56,    57,    58,
       0,     9,    10,     0,    59,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     7,
      25,    26,    27,    28,    29,    30,   473,     0,    60,    61,
       0,     0,     8,     0,   115,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,    56,    57,    58,     0,   115,    36,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,     9,    10,     0,    59,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       7,    25,    26,    27,    28,    29,    30,     0,     0,    60,
      61,     0,     0,     8,     0,   115,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,    56,    57,    58,     0,   115,
      36,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   334,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,     9,    10,     0,    59,   324,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,     0,     0,
      60,   408,     0,     0,     8,     0,   115,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,     0,     0,     0,     0,    56,    57,    58,     0,
     115,    36,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    61,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,     0,     9,    10,     0,    59,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,    60,   446,     0,     0,     0,     0,   115,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,   449
};

static const yytype_int16 yycheck[] =
{
      69,    25,   202,    52,   232,   147,   177,     3,   404,   404,
      41,   141,     3,   159,     4,    39,     3,    41,    64,    56,
       4,   167,     3,    49,    50,     0,   141,    56,    66,    53,
      56,    37,   142,    49,    50,     4,    65,     3,    49,    50,
      56,    30,    31,    32,    33,    69,   110,   111,   112,   113,
      74,    65,    58,   117,   184,    58,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    41,    87,    53,    58,    55,    64,   142,    19,
      20,    62,   103,   104,    67,   256,   257,   142,   259,    66,
      66,   117,    65,    11,    90,   142,   142,    87,    66,    95,
     124,   117,   232,    87,    95,   142,   277,   278,   238,   505,
     505,   142,   254,   219,   220,   141,   216,   217,   218,    37,
      38,    56,    56,   238,    90,   141,    56,   176,    56,    95,
     276,   155,    34,    35,    36,   531,   531,   142,    56,    57,
      58,    59,    60,    61,   168,    37,    38,    39,    40,    41,
      56,   105,    70,    71,    42,    66,    44,    45,    66,    21,
      23,   185,   390,    42,    22,    44,    45,    24,    56,    57,
      58,   143,    25,    26,    27,    28,   143,    56,    57,    58,
      64,    64,   142,    71,   355,    56,   357,    65,    42,   389,
      44,    45,    71,   208,   209,   210,   211,    67,    66,   117,
      88,    56,    56,    57,    58,    56,   275,     3,    90,    65,
     234,   212,   213,   214,   215,   142,    66,    71,   348,   349,
     142,   351,   352,   141,   142,    66,    87,    62,     3,    75,
      64,     4,   106,   348,   349,   381,   351,   352,    64,    67,
     264,   265,    65,   267,   268,   142,    62,   142,   378,     3,
      65,    62,     3,   424,    58,   142,   142,   281,    64,     3,
     390,    64,    64,   378,    64,   395,   396,    91,   398,    56,
     400,    64,   402,   142,    87,    87,     3,    87,    56,    68,
     395,   396,   104,   398,   353,   400,   103,   402,    56,    66,
      64,    90,   438,   362,    64,   364,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    90,    65,     3,   141,    87,    87,    98,     3,    62,
     141,    29,   141,    64,    62,    64,     3,    64,   142,    64,
      64,    87,    87,   142,   464,   465,   466,   483,   484,   469,
     486,   487,   513,   514,   142,   414,   492,     3,    64,   464,
     465,   466,    66,   141,   469,   141,   555,    74,   143,   271,
     429,   417,   427,   387,   417,   495,   496,   497,   498,   426,
     552,   203,   205,   204,    16,    16,   206,   236,   207,   509,
     495,   496,   497,   498,   348,   398,   390,   505,   532,    -1,
      -1,    -1,    -1,    -1,   509,   541,   420,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   481,   543,   544,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   552,    -1,    -1,    -1,    -1,    -1,   543,   544,
      -1,    -1,    -1,    -1,    -1,     8,    -1,   552,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   485,    -1,    -1,    -1,    -1,    -1,   491,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   562,    -1,    37,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
     103,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,    24,
      -1,    -1,    -1,   136,   137,   138,    -1,    -1,   110,   111,
     112,    -1,    37,    38,    -1,   117,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    63,   141,
     142,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   221,   222,
     223,   224,   117,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,
     243,     1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    63,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    -1,    -1,
      -1,   324,    82,    83,   327,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,    11,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,   141,   142,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    63,    -1,    -1,    66,    67,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,    11,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,   141,   142,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,    -1,    37,    38,
      -1,   117,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,    -1,   141,   142,    66,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,    -1,    37,    38,    -1,   117,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,   141,   142,    -1,    67,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,    -1,    37,    38,    -1,   117,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,   141,
     142,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,    11,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,   141,   142,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    11,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    -1,    -1,    -1,    24,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,    -1,    64,    -1,   110,   111,   112,
      -1,    70,    71,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,    11,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,   141,   142,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    11,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    24,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,   110,   111,   112,    -1,    70,    71,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,   112,
      -1,    37,    38,    -1,   117,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    11,
      56,    57,    58,    59,    60,    61,    62,    -1,   141,   142,
      -1,    -1,    24,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,   110,   111,   112,    -1,    70,    71,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,    -1,    37,    38,    -1,   117,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      11,    56,    57,    58,    59,    60,    61,    -1,    -1,   141,
     142,    -1,    -1,    24,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,    70,
      71,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,    -1,    37,    38,    -1,   117,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    11,    56,    57,    58,    59,    60,    61,    -1,    -1,
     141,   142,    -1,    -1,    24,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,   110,   111,   112,    -1,
      70,    71,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,    -1,    37,    38,    -1,   117,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,   141,   142,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   146,   147,   148,     0,   149,     1,    11,    24,    37,
      38,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    63,    66,    67,    69,    70,    71,    72,    73,    74,
      77,    82,    83,    86,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   101,   102,   109,   110,   111,   112,   117,
     141,   142,   150,   151,   152,   154,   157,   160,   164,   166,
     167,   170,   173,   175,   177,   182,   186,   187,   191,   193,
     200,   204,   212,   218,   219,   221,   223,   224,   227,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   250,   253,   256,
     262,   270,   275,    66,   251,    70,   244,    58,   252,   244,
     244,   244,   244,   244,    56,   246,   253,   244,   244,   244,
     244,   244,   244,   244,   244,    98,   110,   111,   112,   229,
     249,   257,   142,   153,    66,   142,   194,   201,    66,    65,
     229,   142,    66,   229,    66,    56,    56,   155,   158,   161,
      56,    56,   142,   188,   189,   188,   229,   225,    56,   244,
     244,   244,   152,   229,   105,    97,    98,   142,   179,   185,
     187,   229,    66,    66,     3,    95,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    29,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    34,    35,    36,    49,
      50,    37,    38,    39,    40,    41,   244,    53,    55,    42,
      44,    45,    56,    57,    58,    71,    88,   143,   263,   143,
      64,    64,    64,    64,    64,   142,   228,   231,   258,   259,
     260,   261,   213,   149,   192,    56,   195,   142,   195,   202,
      65,    67,    66,   229,    56,    56,   150,   168,   171,    65,
     190,     3,    66,   150,   229,   165,   174,   142,   142,   190,
      66,    87,   231,   229,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     232,   234,   235,   236,   237,   238,   239,   239,   239,   239,
     240,   240,   240,   240,   241,   241,   241,   242,   242,   244,
     244,   244,   244,   244,    41,   107,   228,   243,   254,   255,
     247,   229,   248,   245,   142,   228,   264,   265,   266,   267,
     269,    37,    58,   244,   244,   244,    90,    62,     3,     3,
      90,    95,    75,   214,    68,   195,    41,   142,   196,   197,
     198,   199,   190,   190,   190,   205,    64,   229,   229,   162,
     229,   229,   110,   111,   112,   113,   117,   142,     4,   189,
     106,   226,    64,   152,   150,   190,   190,   176,   229,    65,
       3,    64,   142,    62,   142,    65,     3,    62,     3,   268,
       3,    90,    95,    58,   271,   142,   228,   260,   142,   228,
     142,   228,   228,   152,   190,   190,    64,     3,    64,   152,
      58,   152,   203,   103,   104,   206,   207,   209,   211,   220,
      64,    64,    91,   169,   172,   228,    56,   150,   222,   180,
     229,    64,   232,   255,   228,   228,   142,   228,   267,   142,
     228,   142,   228,   276,    49,    50,    56,   117,   141,   270,
     272,   273,   274,   275,    87,    87,    87,     3,   152,     4,
      41,   198,   199,    62,   229,    56,    56,   190,    68,   209,
     207,   210,   152,   156,   159,    56,    64,    64,    64,   142,
     150,    66,   183,    90,    90,    65,     3,    87,    87,   141,
     277,   278,   141,   141,    62,     3,   228,   228,   228,   215,
     228,    64,    62,   142,    64,   152,   150,   150,   229,   150,
     150,    64,   181,   229,   150,   142,   142,   228,   228,   228,
     228,     3,     3,    62,   274,   216,   217,   228,   190,   190,
      64,    64,   184,    87,    87,    49,    50,   117,   141,   270,
     275,   278,     3,    64,   163,   150,   178,   228,   228,   141,
     141,   217,   208,    66,   178,   152
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
#line 242 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 244 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 251 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 265 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 275 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 276 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 278 "syntax/tjs.y"
    { cc->DeclareVariables((yyvsp[(1) - (1)].dp)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 292 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 294 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 305 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 306 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 308 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 319 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 320 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 322 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 341 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 342 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 344 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 345 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 358 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 359 "syntax/tjs.y"
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
#line 377 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 381 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 388 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 389 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 390 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 402 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 403 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 404 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 409 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 410 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 430 "syntax/tjs.y"
    { if ((yyvsp[(2) - (3)].dp)) cc->DeclareVariables((yyvsp[(2) - (3)].dp)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 438 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 442 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 447 "syntax/tjs.y"
    { (yyval.dp) = nullptr; ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 448 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (1)].dp); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 449 "syntax/tjs.y"
    { (yyval.dp) = nullptr; cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 454 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 455 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 460 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 461 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 485 "syntax/tjs.y"
    { if ((yyvsp[(2) - (5)].dp)->Count() == 0) { YYABORT; }
											  cc->EnterForInCode((yyvsp[(2) - (5)].dp), (yyvsp[(4) - (5)].np)); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 487 "syntax/tjs.y"
    { cc->ExitForInCode(); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 495 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num)))); ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 497 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(2) - (3)].num))));
											  (yyval.dp)->SetConst(); ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 500 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); 
											  (yyval.dp)->Push(cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))));
											  (yyval.dp)->SetNotLocal(); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 507 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (2)].dp); ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 511 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 512 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(2) - (2)].dp); (yyval.dp)->SetConst(); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 519 "syntax/tjs.y"
    { (yyval.dp) = cc->CreateVarDeclList(); (yyval.dp)->Push((yyvsp[(1) - (1)].dn)); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 520 "syntax/tjs.y"
    { (yyval.dp) = (yyvsp[(1) - (3)].dp); (yyval.dp)->Push((yyvsp[(3) - (3)].dn)); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 530 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 532 "syntax/tjs.y"
    { (yyval.dn) = cc->GetVarDeclNode(lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 548 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 553 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 558 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 563 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 590 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 592 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 597 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 599 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 615 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 619 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 623 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 628 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 629 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 636 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 640 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 651 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 657 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 662 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 666 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 678 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 682 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 687 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 688 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 698 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 703 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 704 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 711 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 712 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 718 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 719 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 724 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 725 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 730 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 733 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 737 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 738 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 739 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 745 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 750 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 754 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 755 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 760 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 761 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 766 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 767 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 768 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 771 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 772 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 773 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 774 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 775 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 777 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 778 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 779 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 780 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 781 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 787 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 790 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 796 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 797 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 801 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 803 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 807 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 808 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 813 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 817 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 818 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 822 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 823 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 824 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 825 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 826 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 830 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 831 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 833 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 834 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 838 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 839 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 840 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 841 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 846 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 847 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 848 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 852 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 853 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 855 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 856 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RATIONAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 857 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 861 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 865 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 866 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 867 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 868 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 870 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 871 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 872 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 873 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 874 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 875 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 876 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 877 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 878 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 879 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 881 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 882 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 883 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 884 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 887 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 888 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 892 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 894 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 898 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 899 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 901 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 902 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 903 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 906 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 907 "syntax/tjs.y"
    { /* syntactic sugar of '(Dictionary.*T_SYMBOL* incontexof *priority_expr*)' */
												  auto dict = cc->MakeNP0(T_SYMBOL);
												  auto method = cc->MakeNP0(T_CONSTVAL);
												  dict->SetValue(tTJSVariant("Dictionary"));
												  method->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  auto func = cc->MakeNP2(T_DOT, dict, method);
												  (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, func, (yyvsp[(1) - (4)].np)); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 914 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 916 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 917 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 918 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 925 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 927 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 930 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 931 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 932 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 934 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 935 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 936 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 937 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 938 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 939 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 940 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 941 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 943 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 944 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 951 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 956 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 957 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 958 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 962 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 963 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 964 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 965 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 971 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 975 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 982 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 986 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 987 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 992 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 993 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 999 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYCOMP, (yyvsp[(1) - (5)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1004 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1009 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1013 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1015 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1021 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1025 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1030 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1040 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1041 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1046 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1047 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1061 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICTCOMP, (yyvsp[(1) - (7)].np), (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1066 "syntax/tjs.y"
    { tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(tTJSVariant(lx->GetString((yyvsp[(1) - (7)].num))));
										  (yyval.np) = cc->MakeNP2(T_DICTCOMP, node0, (yyvsp[(3) - (7)].np));
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(5) - (7)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(7) - (7)].np))); ;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1073 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1078 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (5)].np);
										  auto var = cc->MakeNP0(T_SYMBOL);
										  var->SetValue(tTJSVariant(lx->GetString((yyvsp[(3) - (5)].num))));
										  (yyval.np)->Add(cc->MakeNP2(T_IN, var, (yyvsp[(5) - (5)].np))); ;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1082 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1084 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (3)].np);
										  (yyval.np)->Add(cc->MakeNP1(T_IF, (yyvsp[(3) - (3)].np))); ;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1092 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1099 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 1117 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1118 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1119 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1120 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1121 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1122 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1127 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 1134 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1147 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1148 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1149 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1150 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1151 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1152 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 4305 "tjs.tab.cpp"
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
#line 1157 "syntax/tjs.y"



}
