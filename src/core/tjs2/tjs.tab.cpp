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
#line 128 "tjs.tab.c"

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
     T_FOR = 343,
     T_WHILE = 344,
     T_UNTIL = 345,
     T_DO = 346,
     T_LOOP = 347,
     T_IF = 348,
     T_UNLESS = 349,
     T_VAR = 350,
     T_CONST = 351,
     T_ENUM = 352,
     T_GOTO = 353,
     T_THROW = 354,
     T_TRY = 355,
     T_SETTER = 356,
     T_GETTER = 357,
     T_ELSE = 358,
     T_CATCH = 359,
     T_OMIT = 360,
     T_SYNCHRONIZED = 361,
     T_WITH = 362,
     T_INT = 363,
     T_REAL = 364,
     T_STRING = 365,
     T_OCTET = 366,
     T_FALSE = 367,
     T_NULL = 368,
     T_TRUE = 369,
     T_VOID = 370,
     T_NAN = 371,
     T_INFINITY = 372,
     T_UPLUS = 373,
     T_UMINUS = 374,
     T_EVAL = 375,
     T_POSTDECREMENT = 376,
     T_POSTINCREMENT = 377,
     T_IGNOREPROP = 378,
     T_PROPACCESS = 379,
     T_ARG = 380,
     T_EXPANDARG = 381,
     T_INLINEARRAY = 382,
     T_ARRAYARG = 383,
     T_INLINEDIC = 384,
     T_DICELM = 385,
     T_WITHDOT = 386,
     T_THIS_PROXY = 387,
     T_WITHDOT_PROXY = 388,
     T_CONSTVAL = 389,
     T_SYMBOL = 390,
     T_REGEXP = 391,
     T_VARIANT = 392
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "syntax/tjs.y"

	tjs_int			num;
	tTJSExprNode *		np;



/* Line 214 of yacc.c  */
#line 308 "tjs.tab.c"
} YYSTYPE;
YYLEX_PROTO_DECL

# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 320 "tjs.tab.c"

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
#define YYLAST   1748

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  295
/* YYNRULES -- Number of states.  */
#define YYNSTATES  499

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

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
     135,   136,   137
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    17,    19,
      21,    23,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    45,    48,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    72,    77,    78,    79,    87,    88,
      89,    97,    98,    99,   100,   111,   112,   113,   121,   122,
     123,   131,   132,   137,   138,   149,   150,   152,   154,   155,
     157,   158,   160,   163,   164,   169,   171,   174,   177,   180,
     182,   186,   189,   194,   195,   198,   201,   204,   207,   210,
     213,   214,   221,   222,   228,   229,   233,   237,   243,   244,
     246,   248,   252,   255,   260,   262,   266,   267,   273,   276,
     278,   281,   285,   287,   288,   295,   297,   299,   302,   305,
     306,   314,   315,   319,   324,   327,   328,   334,   335,   338,
     339,   345,   347,   351,   353,   356,   360,   361,   368,   369,
     376,   380,   383,   384,   390,   392,   396,   401,   405,   407,
     409,   413,   415,   419,   421,   425,   429,   433,   437,   441,
     445,   449,   453,   457,   461,   465,   469,   473,   477,   481,
     485,   487,   493,   495,   499,   501,   505,   507,   511,   513,
     517,   519,   523,   525,   529,   533,   537,   541,   543,   547,
     551,   555,   559,   561,   565,   569,   573,   575,   579,   583,
     585,   589,   593,   597,   600,   603,   605,   608,   611,   614,
     617,   620,   623,   626,   629,   632,   635,   638,   641,   644,
     647,   650,   653,   657,   662,   665,   670,   673,   678,   681,
     683,   687,   689,   693,   698,   700,   701,   706,   707,   712,
     715,   718,   721,   722,   726,   728,   730,   732,   734,   736,
     738,   740,   742,   744,   746,   748,   750,   751,   755,   756,
     760,   765,   767,   769,   773,   774,   776,   778,   780,   781,
     786,   788,   792,   793,   795,   796,   803,   804,   806,   810,
     814,   818,   819,   821,   822,   830,   831,   833,   835,   839,
     842,   845,   847,   849,   851,   853,   854,   863,   864,   866,
     870,   875,   880,   884,   888,   892
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,   140,    -1,    -1,   141,   142,    -1,    -1,
     142,   143,    -1,   142,     1,    65,    -1,   144,    -1,   145,
      -1,    65,    -1,   216,    65,    -1,   157,    -1,   160,    -1,
     163,    -1,   147,    -1,   150,    -1,   153,    -1,   165,    -1,
     170,    -1,    82,    65,    -1,    68,    65,    -1,    71,    65,
      -1,   173,    -1,   178,    -1,   191,    -1,   199,    -1,   205,
      -1,   206,    -1,   208,    -1,   210,    -1,   211,    -1,   214,
      -1,    -1,    66,   146,   142,    67,    -1,    -1,    -1,    89,
     148,    55,   216,    63,   149,   143,    -1,    -1,    -1,    90,
     151,    55,   216,    63,   152,   143,    -1,    -1,    -1,    -1,
      91,   154,   143,   155,    89,    55,   216,    63,   156,    65,
      -1,    -1,    -1,    93,    55,   158,   216,   159,    63,   143,
      -1,    -1,    -1,    94,    55,   161,   216,   162,    63,   143,
      -1,    -1,   157,   103,   164,   143,    -1,    -1,    88,    55,
     166,   167,    65,   168,    65,   169,    63,   143,    -1,    -1,
     174,    -1,   216,    -1,    -1,   216,    -1,    -1,   216,    -1,
     172,   145,    -1,    -1,   172,   216,   171,   145,    -1,    92,
      -1,   174,    65,    -1,    95,   175,    -1,    96,   175,    -1,
     176,    -1,   175,     3,   176,    -1,   135,   177,    -1,   135,
     177,     4,   215,    -1,    -1,    64,   135,    -1,    64,   115,
      -1,    64,   108,    -1,    64,   109,    -1,    64,   110,    -1,
      64,   111,    -1,    -1,    69,   135,   179,   182,   177,   145,
      -1,    -1,    69,   181,   182,   177,   145,    -1,    -1,    55,
     186,    63,    -1,    55,   183,    63,    -1,    55,   184,     3,
     186,    63,    -1,    -1,   184,    -1,   185,    -1,   184,     3,
     185,    -1,   135,   177,    -1,   135,   177,     4,   215,    -1,
      40,    -1,   135,   177,    40,    -1,    -1,    70,   188,   189,
     177,   190,    -1,   135,   177,    -1,   182,    -1,    57,    61,
      -1,    57,   216,    61,    -1,   145,    -1,    -1,    76,   135,
      66,   192,   193,    67,    -1,   194,    -1,   196,    -1,   194,
     196,    -1,   196,   194,    -1,    -1,   101,    55,   135,   177,
      63,   195,   145,    -1,    -1,   198,   197,   145,    -1,   102,
      55,    63,   177,    -1,   102,   177,    -1,    -1,    62,   135,
     200,   201,   145,    -1,    -1,    74,   215,    -1,    -1,    74,
     215,     3,   202,   203,    -1,   204,    -1,   203,     3,   204,
      -1,   215,    -1,    81,    65,    -1,    81,   216,    65,    -1,
      -1,    85,    55,   216,    63,   207,   145,    -1,    -1,   107,
      55,   216,    63,   209,   143,    -1,    73,   216,    64,    -1,
      72,    64,    -1,    -1,   100,   212,   143,   213,   143,    -1,
     104,    -1,   104,    55,    63,    -1,   104,    55,   135,    63,
      -1,    99,   216,    65,    -1,   218,    -1,   217,    -1,   217,
      93,   216,    -1,   218,    -1,   217,     3,   218,    -1,   219,
      -1,   219,    29,   218,    -1,   219,     4,   218,    -1,   219,
       5,   218,    -1,   219,     6,   218,    -1,   219,     7,   218,
      -1,   219,     8,   218,    -1,   219,     9,   218,    -1,   219,
      10,   218,    -1,   219,    11,   218,    -1,   219,    12,   218,
      -1,   219,    13,   218,    -1,   219,    14,   218,    -1,   219,
      15,   218,    -1,   219,    18,   218,    -1,   219,    17,   218,
      -1,   219,    16,   218,    -1,   220,    -1,   220,    19,   219,
      64,   219,    -1,   221,    -1,   220,    20,   221,    -1,   222,
      -1,   221,    21,   222,    -1,   223,    -1,   222,    22,   223,
      -1,   224,    -1,   223,    23,   224,    -1,   225,    -1,   224,
      24,   225,    -1,   226,    -1,   225,    25,   226,    -1,   225,
      26,   226,    -1,   225,    27,   226,    -1,   225,    28,   226,
      -1,   227,    -1,   226,    30,   227,    -1,   226,    31,   227,
      -1,   226,    32,   227,    -1,   226,    33,   227,    -1,   228,
      -1,   227,    34,   228,    -1,   227,    35,   228,    -1,   227,
      36,   228,    -1,   229,    -1,   228,    48,   229,    -1,   228,
      49,   229,    -1,   231,    -1,   229,    37,   231,    -1,   229,
      38,   231,    -1,   229,    39,   231,    -1,   230,   231,    -1,
     229,    40,    -1,   232,    -1,    41,   231,    -1,    42,   231,
      -1,    43,   231,    -1,    44,   231,    -1,    45,   240,    -1,
      53,   231,    -1,    52,   231,    -1,   232,    52,    -1,    46,
     231,    -1,    47,   231,    -1,    50,   231,    -1,    51,   231,
      -1,    48,   231,    -1,    49,   231,    -1,    24,   231,    -1,
      40,   231,    -1,   232,    54,   231,    -1,    55,   108,    63,
     231,    -1,   108,   231,    -1,    55,   109,    63,   231,    -1,
     109,   231,    -1,    55,   110,    63,   231,    -1,   110,   231,
      -1,   233,    -1,   233,    87,   232,    -1,   237,    -1,    55,
     216,    63,    -1,   233,    57,   216,    61,    -1,   240,    -1,
      -1,   233,    56,   234,   135,    -1,    -1,   233,    70,   235,
     135,    -1,   233,    44,    -1,   233,    43,    -1,   233,    41,
      -1,    -1,    56,   236,   135,    -1,   134,    -1,   135,    -1,
      58,    -1,    59,    -1,   180,    -1,   187,    -1,    60,    -1,
     115,    -1,   243,    -1,   247,    -1,   252,    -1,   257,    -1,
      -1,    11,   238,   136,    -1,    -1,    38,   239,   136,    -1,
     233,    55,   241,    63,    -1,   105,    -1,   242,    -1,   241,
       3,   242,    -1,    -1,    40,    -1,   230,    -1,   215,    -1,
      -1,    57,   244,   245,    61,    -1,   246,    -1,   245,     3,
     246,    -1,    -1,   215,    -1,    -1,    37,    57,   248,   249,
     251,    61,    -1,    -1,   250,    -1,   249,     3,   250,    -1,
     215,     3,   215,    -1,   135,    64,   215,    -1,    -1,     3,
      -1,    -1,    55,    96,    63,    57,   253,   254,    61,    -1,
      -1,   255,    -1,   256,    -1,   255,     3,   256,    -1,    49,
     134,    -1,    48,   134,    -1,   134,    -1,   115,    -1,   252,
      -1,   257,    -1,    -1,    55,    96,    63,    37,    57,   258,
     259,    61,    -1,    -1,   260,    -1,   259,     3,   260,    -1,
     134,     3,    49,   134,    -1,   134,     3,    48,   134,    -1,
     134,     3,   134,    -1,   134,     3,   115,    -1,   134,     3,
     252,    -1,   134,     3,   257,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   221,   221,   226,   226,   232,   234,   235,   242,   243,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   275,   275,   288,   289,   288,   302,   303,
     302,   324,   325,   327,   324,   333,   334,   333,   347,   348,
     347,   354,   354,   374,   374,   383,   385,   386,   391,   392,
     397,   398,   411,   412,   412,   434,   441,   445,   446,   453,
     454,   459,   461,   466,   468,   469,   470,   471,   472,   473,
     478,   478,   488,   488,   501,   503,   504,   505,   509,   511,
     515,   516,   520,   522,   527,   529,   545,   545,   553,   554,
     558,   559,   560,   566,   565,   574,   575,   576,   577,   581,
     581,   592,   592,   601,   602,   608,   608,   615,   617,   618,
     618,   623,   624,   628,   633,   634,   641,   640,   648,   647,
     654,   655,   660,   660,   667,   668,   669,   675,   680,   684,
     685,   690,   691,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     717,   718,   726,   727,   731,   732,   737,   738,   742,   743,
     747,   748,   752,   753,   754,   755,   756,   760,   761,   762,
     763,   764,   768,   769,   770,   771,   776,   777,   778,   782,
     783,   784,   785,   786,   790,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   817,   821,
     822,   827,   828,   829,   830,   831,   831,   835,   835,   843,
     844,   845,   846,   846,   854,   856,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   869,   872,   872,
     880,   885,   886,   887,   891,   892,   893,   894,   900,   900,
     909,   910,   915,   916,   921,   921,   931,   933,   934,   939,
     940,   947,   949,   956,   956,   966,   968,   974,   975,   981,
     982,   983,   984,   985,   986,   991,   991,  1003,  1005,  1006,
    1011,  1012,  1013,  1014,  1015,  1016
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
  "\"import\"", "\"switch\"", "\"in\"", "\"incontextof\"", "\"for\"",
  "\"while\"", "\"until\"", "\"do\"", "\"loop\"", "\"if\"", "\"unless\"",
  "\"var\"", "\"const\"", "\"enum\"", "\"goto\"", "\"throw\"", "\"try\"",
  "\"setter\"", "\"getter\"", "\"else\"", "\"catch\"", "\"...\"",
  "\"synchronized\"", "\"with\"", "\"int\"", "\"real\"", "\"string\"",
  "\"octet\"", "\"false\"", "\"null\"", "\"true\"", "\"void\"", "\"NaN\"",
  "\"Infinity\"", "T_UPLUS", "T_UMINUS", "T_EVAL", "T_POSTDECREMENT",
  "T_POSTINCREMENT", "T_IGNOREPROP", "T_PROPACCESS", "T_ARG",
  "T_EXPANDARG", "T_INLINEARRAY", "T_ARRAYARG", "T_INLINEDIC", "T_DICELM",
  "T_WITHDOT", "T_THIS_PROXY", "T_WITHDOT_PROXY", "T_CONSTVAL", "T_SYMBOL",
  "T_REGEXP", "T_VARIANT", "$accept", "program", "global_list", "$@1",
  "def_list", "block_or_statement", "statement", "block", "$@2", "while",
  "$@3", "$@4", "until", "$@5", "$@6", "do_while", "$@7", "$@8", "$@9",
  "if", "$@10", "$@11", "unless", "$@12", "$@13", "if_else", "$@14", "for",
  "$@15", "for_first_clause", "for_second_clause", "for_third_clause",
  "loop", "$@16", "loop_init", "variable_def", "variable_def_inner",
  "variable_id_list", "variable_id", "variable_type", "func_def", "$@17",
  "func_expr_def", "$@18", "func_decl_arg_opt", "func_decl_arg_list",
  "func_decl_arg_at_least_one", "func_decl_arg", "func_decl_arg_collapse",
  "arrow_expr_def", "$@19", "arrow_expr_arg_opt", "arrow_expr_body",
  "property_def", "$@20", "property_handler_def_list",
  "property_handler_setter", "$@21", "property_handler_getter", "$@22",
  "property_getter_handler_head", "class_def", "$@23", "class_extender",
  "$@24", "extends_list", "extends_name", "return", "switch", "$@25",
  "with", "$@26", "case", "try", "$@27", "catch", "throw", "expr_no_comma",
  "expr", "comma_expr", "assign_expr", "cond_expr", "logical_or_expr",
  "logical_and_expr", "inclusive_or_expr", "exclusive_or_expr", "and_expr",
  "identical_expr", "compare_expr", "shift_expr", "add_sub_expr",
  "mul_div_expr", "mul_div_expr_and_asterisk", "unary_expr",
  "incontextof_expr", "priority_expr", "$@28", "$@29", "$@30",
  "factor_expr", "$@31", "$@32", "func_call_expr", "call_arg_list",
  "call_arg", "inline_array", "$@33", "array_elm_list", "array_elm",
  "inline_dic", "$@34", "dic_elm_list", "dic_elm", "dic_dummy_elm_opt",
  "const_inline_array", "$@35", "const_array_elm_list_opt",
  "const_array_elm_list", "const_array_elm", "const_inline_dic", "$@36",
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
     385,   386,   387,   388,   389,   390,   391,   392
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   138,   139,   141,   140,   142,   142,   142,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   146,   145,   148,   149,   147,   151,   152,
     150,   154,   155,   156,   153,   158,   159,   157,   161,   162,
     160,   164,   163,   166,   165,   167,   167,   167,   168,   168,
     169,   169,   170,   171,   170,   172,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   177,   177,   177,   177,   177,
     179,   178,   181,   180,   182,   182,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   188,   187,   189,   189,
     190,   190,   190,   192,   191,   193,   193,   193,   193,   195,
     194,   197,   196,   198,   198,   200,   199,   201,   201,   202,
     201,   203,   203,   204,   205,   205,   207,   206,   209,   208,
     210,   210,   212,   211,   213,   213,   213,   214,   215,   216,
     216,   217,   217,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     219,   219,   220,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   225,   225,   225,   226,   226,   226,
     226,   226,   227,   227,   227,   227,   228,   228,   228,   229,
     229,   229,   229,   229,   230,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   232,
     232,   233,   233,   233,   233,   234,   233,   235,   233,   233,
     233,   233,   236,   233,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   238,   237,   239,   237,
     240,   241,   241,   241,   242,   242,   242,   242,   244,   243,
     245,   245,   246,   246,   248,   247,   249,   249,   249,   250,
     250,   251,   251,   253,   252,   254,   254,   255,   255,   256,
     256,   256,   256,   256,   256,   258,   257,   259,   259,   259,
     260,   260,   260,   260,   260,   260
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     0,     7,     0,     0,
       7,     0,     0,     0,    10,     0,     0,     7,     0,     0,
       7,     0,     4,     0,    10,     0,     1,     1,     0,     1,
       0,     1,     2,     0,     4,     1,     2,     2,     2,     1,
       3,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       0,     6,     0,     5,     0,     3,     3,     5,     0,     1,
       1,     3,     2,     4,     1,     3,     0,     5,     2,     1,
       2,     3,     1,     0,     6,     1,     1,     2,     2,     0,
       7,     0,     3,     4,     2,     0,     5,     0,     2,     0,
       5,     1,     3,     1,     2,     3,     0,     6,     0,     6,
       3,     2,     0,     5,     1,     3,     4,     3,     1,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     4,     2,     4,     2,     4,     2,     1,
       3,     1,     3,     4,     1,     0,     4,     0,     4,     2,
       2,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       4,     1,     1,     3,     0,     1,     1,     1,     0,     4,
       1,     3,     0,     1,     0,     6,     0,     1,     3,     3,
       3,     0,     1,     0,     7,     0,     1,     1,     3,     2,
       2,     1,     1,     1,     1,     0,     8,     0,     1,     3,
       4,     4,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     5,     1,     0,     0,   246,     0,     0,
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,   258,   236,   237,
     240,     0,    10,    33,     0,    82,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    38,    41,    65,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,   241,
     234,   235,     6,     8,     9,    15,    16,    17,    12,    13,
      14,    18,    19,     0,    23,     0,    24,   238,   239,    25,
      26,    27,    28,    29,    30,    31,    32,     0,   139,   141,
     143,   160,   162,   164,   166,   168,   170,   172,   177,   182,
     186,     0,   189,   195,   219,   221,   224,   242,   243,   244,
     245,     7,     0,    82,   210,   264,     0,   211,   196,   197,
     198,   199,     0,     0,   200,   204,   205,   208,   209,   206,
     207,   202,   201,     0,     0,     0,     0,     0,     0,   262,
     115,     5,    21,    80,    84,    84,    22,   131,     0,     0,
     124,     0,    20,     0,    53,     0,     0,     0,    45,    48,
      73,    67,    69,    68,     0,     0,     0,   214,   216,   218,
      51,    62,    63,    66,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   194,   193,   203,     0,   231,
     230,   229,   254,   225,     0,   227,     0,   247,   266,   249,
       0,     0,     0,     0,   222,   233,   263,   138,     0,   260,
     117,     0,    84,    88,    73,    73,    99,    73,   130,   103,
     125,     0,    55,     0,     0,    42,     0,     0,     0,    71,
       0,   137,     0,     0,     0,     0,   142,   140,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     159,   158,   157,   144,     0,   163,   165,   167,   169,   171,
     173,   174,   175,   176,   178,   179,   180,   181,   183,   184,
     185,   187,   188,   190,   191,   192,   212,   255,   251,   257,
     256,     0,   252,     0,     0,     0,   220,   235,     0,   271,
     267,     0,   273,   213,   215,   217,   262,   259,     0,     0,
      34,    73,    94,    73,     0,    89,    90,     0,     0,    98,
       0,     0,   126,     0,    56,    57,     0,     0,     0,    46,
      49,    76,    77,    78,    79,    75,    74,     0,    70,   134,
       0,   128,    52,    64,     0,   254,   250,   226,   223,   228,
       0,     0,   272,     0,   285,   275,   261,   118,   116,     0,
      92,    86,     0,    85,    83,     0,   102,    97,     0,    73,
       0,   105,   106,   111,     0,    58,    36,    39,     0,     0,
       0,    72,     0,   133,     0,   161,   253,   270,   269,   268,
     265,   287,     0,     0,     0,   282,   281,   283,     0,   276,
     277,   284,   119,    81,     0,    95,    91,     0,   100,     0,
       0,     0,   114,   104,   107,   108,     0,   127,     0,    59,
       0,     0,     0,     0,     0,   135,     0,   129,     0,     0,
     288,   280,   279,   274,     0,     0,    93,    87,   101,    73,
      73,   112,    60,    37,    40,     0,    47,    50,   136,     0,
       0,   286,   278,   120,   121,   123,     0,   113,     0,    61,
      43,     0,     0,   293,   292,   294,   295,   289,     0,   109,
       0,     0,   291,   290,   122,     0,    54,    44,   110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    62,    63,    64,   141,    65,
     155,   440,    66,   156,   441,    67,   157,   348,   491,    68,
     256,   399,    69,   257,   400,    70,   264,    71,   252,   343,
     438,   478,    72,   265,    73,    74,    75,   161,   162,   259,
      76,   242,    77,   144,   244,   334,   335,   336,   337,    78,
     145,   247,   387,    79,   341,   390,   391,   495,   392,   436,
     393,    80,   240,   329,   455,   473,   474,    81,    82,   394,
      83,   404,    84,    85,   165,   360,    86,   236,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   313,   315,   138,   105,
     112,   116,   106,   311,   312,   107,   139,   238,   239,   108,
     228,   319,   320,   373,   109,   375,   418,   419,   420,   110,
     411,   449,   450
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -361
static const yytype_int16 yypact[] =
{
    -361,     9,  -361,  -361,  -361,   398,   -42,  -361,  1470,    -3,
    -361,  1470,  1470,  1470,  1470,  1470,    61,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,   798,  -361,  -361,  -361,  -361,
    -361,   -64,  -361,  -361,    11,   -27,  -361,    49,    65,  1470,
       3,   898,    74,    85,    89,  -361,  -361,  -361,  -361,    94,
      97,    18,    18,  1470,  -361,    99,  1470,  1470,  1470,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,    55,  -361,
    -361,  -361,  -361,   998,  -361,   100,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,   101,    19,  -361,
     334,    84,   141,   142,   146,   148,    24,   102,     7,   -22,
     149,  1470,  -361,    21,   104,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,    39,  -361,  -361,  -361,    54,  -361,  -361,  -361,
    -361,  -361,  1041,   127,   169,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,   114,  1141,  1184,  1284,   129,    59,  1470,
    -361,  -361,  -361,  -361,   143,   -44,  -361,  -361,   144,   145,
    -361,   153,  -361,  1470,  -361,   164,   165,   598,  -361,  -361,
     157,   220,  -361,   220,   171,   598,  1470,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  -361,  -361,  -361,  1470,  -361,
    -361,  -361,  1327,  -361,  1470,  -361,    61,  -361,  1570,  -361,
     -17,  1470,  1470,  1470,  -361,  -361,  -361,  -361,    32,  -361,
     156,   498,   143,   -34,   157,   157,  -361,   157,  -361,  -361,
    -361,   174,   698,  1470,  1470,  -361,  1470,  1470,    70,   234,
      18,  -361,   137,   179,   598,   186,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,   189,   141,   142,   146,   148,    24,
     102,   102,   102,   102,     7,     7,     7,     7,   -22,   -22,
     -22,   149,   149,  -361,  -361,  -361,  -361,  1470,  -361,  -361,
    1470,    29,  -361,   119,   194,   121,  -361,   195,   255,   257,
    -361,   204,  -361,  -361,  -361,  -361,  1470,  -361,  1470,   186,
    -361,   157,  -361,   157,   199,   260,  -361,   201,   186,  -361,
     -33,   -63,  -361,   200,  -361,  -361,   206,   207,   178,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  1470,  -361,   216,
     598,  -361,  -361,  -361,  1470,  1613,  -361,  -361,  -361,  -361,
    1470,  1470,  1570,   211,  -361,   -19,  -361,   271,  -361,   186,
       4,  -361,   -34,  -361,  -361,  1427,  -361,  -361,   221,   -30,
     208,   175,   180,  -361,   186,  1470,  -361,  -361,   227,   222,
     223,  -361,   -53,  -361,   598,  -361,  -361,  -361,  -361,  -361,
    -361,   155,   158,   159,   187,  -361,  -361,  -361,   233,   292,
    -361,  -361,  -361,  -361,  1470,  -361,  -361,   237,  -361,   235,
     166,   240,  -361,  -361,  -361,  -361,   186,  -361,   239,  -361,
     598,   598,  1470,   598,   598,  -361,   242,  -361,   303,    34,
    -361,  -361,  -361,  -361,   -19,  1470,  -361,  -361,  -361,   157,
     157,  -361,  1470,  -361,  -361,   245,  -361,  -361,  -361,    88,
     155,  -361,  -361,   306,  -361,  -361,   247,  -361,   248,  -361,
    -361,   181,   182,  -361,  -361,  -361,  -361,  -361,  1470,  -361,
     598,   249,  -361,  -361,  -361,   186,  -361,  -361,  -361
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,  -361,  -361,   172,  -153,  -361,   -72,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,    60,   265,    58,  -226,
    -361,  -361,  -361,  -361,  -140,  -361,  -361,   -62,   -61,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,   -73,  -361,   -68,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -164,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -215,   -25,  -361,
    -122,  -191,  -361,   131,   132,   130,   133,   134,    15,    41,
    -162,   -84,  -219,    66,   103,   312,  -361,  -361,  -361,  -361,
    -361,  -361,   315,  -361,   -31,  -361,  -361,  -361,    10,  -361,
    -361,  -361,   -37,  -361,  -360,  -361,  -361,  -361,  -101,  -344,
    -361,  -361,  -116
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -225
static const yytype_int16 yytable[] =
{
     137,   171,   284,   310,   255,   246,   332,   309,   424,     4,
     445,   243,   262,   318,   148,   417,   151,   237,   338,   339,
     321,   340,   175,   111,   385,   431,   210,   211,   164,   412,
     413,   421,   365,    33,   258,   326,   414,   470,   388,   389,
     322,   207,   208,   209,   425,   298,   299,   300,   172,   199,
     200,   201,   202,   266,   115,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   140,     7,   217,   114,   218,   142,   117,   118,   119,
     120,   121,   446,   125,   126,   127,   128,   129,   130,   131,
     132,   245,   366,   327,   417,   471,   415,   137,     9,    10,
     237,   333,   331,   193,   194,   379,   237,   380,   143,   485,
     421,   362,   176,   377,   146,   416,   122,    26,    27,    28,
      29,    30,   167,   168,   169,   486,   301,   302,   251,   147,
     113,    36,   203,   204,   205,   206,   481,   482,   149,   152,
     153,   263,   401,   414,   154,   219,   310,   220,   221,   158,
     309,   267,   159,   160,   166,   407,   408,   318,   170,   222,
     223,   224,   195,   432,   196,   173,   174,   216,   219,   197,
     220,   221,   198,   405,   225,   227,    59,   230,   351,   352,
     353,   354,   222,   223,   224,   355,   212,   213,   214,   215,
     229,   226,   234,   363,   235,    60,    61,   225,   243,   314,
     167,   168,   169,   483,   237,   356,   237,   403,   248,   456,
    -224,   249,  -224,  -224,   290,   291,   292,   293,   250,   253,
     254,   258,   484,   260,  -224,  -224,  -224,   345,   346,   347,
     328,   349,   350,   476,   477,   237,   261,   342,   357,  -224,
     475,   359,   361,   237,   294,   295,   296,   297,   237,   237,
     237,   447,    33,   364,   367,   368,   369,   378,   371,   370,
     372,   374,   381,   382,   383,   395,   384,   398,   386,   396,
     397,   402,   410,   475,   422,   433,   430,   389,   303,   304,
     305,   388,   442,   133,   306,   443,   444,   463,   464,   448,
     466,   467,   451,   452,   453,   454,   458,   323,   324,   325,
     457,   459,   237,   460,   462,   468,   469,   423,   480,   488,
     489,   490,   344,   241,   497,   492,   493,   163,   358,   435,
     426,   427,   437,   434,   494,   285,   287,   286,   123,   316,
     288,   124,   289,   237,   406,   409,   376,   496,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   472,   487,     0,     0,     0,     0,     0,
     429,     0,     0,   192,   461,     0,   237,     0,     0,     0,
     439,     0,     0,   117,     0,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -4,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,   465,     0,     0,
       0,     0,     8,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,   479,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
      31,     0,     0,    32,    33,     0,    34,    35,    36,    37,
      38,    39,     0,     0,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,    54,     6,
       0,     0,     0,     0,     0,    55,    56,    57,    58,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
      31,     0,     0,    32,    33,   330,    34,    35,    36,    37,
      38,    39,     0,     0,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
      31,     0,     0,    32,    33,     0,    34,    35,    36,    37,
      38,    39,     0,     0,    40,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,   113,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,   113,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,   135,   136,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,   150,     0,     0,     0,   113,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,     7,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     7,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,    33,     8,     0,   113,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,     0,     0,     0,     0,    56,    57,    58,     0,
     113,    36,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     7,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     7,    25,    26,    27,    28,
      29,    30,     0,     0,   231,     0,     0,     0,     8,     0,
     113,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,     0,   232,     0,    56,
      57,    58,     0,   113,    36,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     7,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     7,    25,
      26,    27,    28,    29,    30,     0,     0,   233,     0,     0,
       0,     8,     0,   113,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,   307,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    56,    57,    58,     0,   113,    36,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   308,     0,     0,    56,    57,    58,     7,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     7,    25,    26,    27,    28,    29,    30,   428,     0,
       0,     0,     0,     0,     8,     0,   113,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,    56,    57,    58,     0,   113,
      36,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     7,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     7,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     8,     0,   113,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,   307,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    56,    57,
      58,     0,   113,    36,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,   317,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    61
};

static const yytype_int16 yycheck[] =
{
      25,    73,   193,   222,   157,   145,    40,   222,     4,     0,
      63,    55,   165,   228,    39,   375,    41,   139,   244,   245,
      37,   247,     3,    65,    57,    55,    48,    49,    53,    48,
      49,   375,     3,    66,    64,     3,    55,     3,   101,   102,
      57,    34,    35,    36,    40,   207,   208,   209,    73,    25,
      26,    27,    28,   175,    57,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   135,    11,    52,     8,    54,    65,    11,    12,    13,
      14,    15,   135,    17,    18,    19,    20,    21,    22,    23,
      24,   135,    63,    61,   454,    61,   115,   122,    37,    38,
     222,   135,   242,    19,    20,   331,   228,   333,   135,   469,
     454,   264,    93,   328,    65,   134,    55,    56,    57,    58,
      59,    60,    56,    57,    58,   469,   210,   211,   153,    64,
      69,    70,    30,    31,    32,    33,    48,    49,   135,    65,
      55,   166,   357,    55,    55,    41,   365,    43,    44,    55,
     365,   176,    55,   135,    55,   370,   371,   372,   103,    55,
      56,    57,    21,   389,    22,    65,    65,   101,    41,    23,
      43,    44,    24,   364,    70,   136,   115,    63,   108,   109,
     110,   111,    55,    56,    57,   115,    37,    38,    39,    40,
     136,    87,    63,   265,   135,   134,   135,    70,    55,   224,
     134,   135,   136,   115,   326,   135,   328,   360,    64,   424,
      41,    66,    43,    44,   199,   200,   201,   202,    65,    55,
      55,    64,   134,     3,    55,    56,    57,   252,   253,   254,
      74,   256,   257,   459,   460,   357,    65,    63,     4,    70,
     455,   104,    63,   365,   203,   204,   205,   206,   370,   371,
     372,   404,    66,    64,   135,    61,   135,   329,     3,    64,
       3,    57,    63,     3,    63,    65,   338,    89,   340,    63,
      63,    55,    61,   488,     3,    67,    55,   102,   212,   213,
     214,   101,    55,    96,   218,    63,    63,   440,   441,   134,
     443,   444,   134,   134,    61,     3,    61,   231,   232,   233,
      63,   135,   424,    63,    65,    63,     3,   379,    63,     3,
      63,    63,   252,   141,    65,   134,   134,    52,   260,   392,
     382,   382,   394,   391,   488,   194,   196,   195,    16,   226,
     197,    16,   198,   455,   365,   372,   326,   490,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   454,   470,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    29,   436,    -1,   488,    -1,    -1,    -1,
     395,    -1,    -1,   307,    -1,    -1,   310,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,
      -1,    -1,    24,   495,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,   462,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,    99,   100,     1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    11,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    11,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    24,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
      69,    70,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,   110,    11,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    11,    55,    56,    57,    58,
      59,    60,    -1,    -1,    63,    -1,    -1,    -1,    24,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    -1,    63,    -1,   108,
     109,   110,    -1,    69,    70,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,    11,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    11,    55,
      56,    57,    58,    59,    60,    -1,    -1,    63,    -1,    -1,
      -1,    24,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,   108,   109,   110,    -1,    69,    70,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,   108,   109,   110,    11,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    11,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,    69,
      70,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
     110,    11,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    11,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,   108,   109,
     110,    -1,    69,    70,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,   110,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   139,   140,   141,     0,   142,     1,    11,    24,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    62,    65,    66,    68,    69,    70,    71,    72,    73,
      76,    81,    82,    85,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    99,   100,   107,   108,   109,   110,   115,
     134,   135,   143,   144,   145,   147,   150,   153,   157,   160,
     163,   165,   170,   172,   173,   174,   178,   180,   187,   191,
     199,   205,   206,   208,   210,   211,   214,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   237,   240,   243,   247,   252,
     257,    65,   238,    69,   231,    57,   239,   231,   231,   231,
     231,   231,    55,   233,   240,   231,   231,   231,   231,   231,
     231,   231,   231,    96,   108,   109,   110,   216,   236,   244,
     135,   146,    65,   135,   181,   188,    65,    64,   216,   135,
      65,   216,    65,    55,    55,   148,   151,   154,    55,    55,
     135,   175,   176,   175,   216,   212,    55,   231,   231,   231,
     103,   145,   216,    65,    65,     3,    93,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    29,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      48,    49,    37,    38,    39,    40,   231,    52,    54,    41,
      43,    44,    55,    56,    57,    70,    87,   136,   248,   136,
      63,    63,    63,    63,    63,   135,   215,   218,   245,   246,
     200,   142,   179,    55,   182,   135,   182,   189,    64,    66,
      65,   216,   166,    55,    55,   143,   158,   161,    64,   177,
       3,    65,   143,   216,   164,   171,   218,   216,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   219,   221,   222,   223,   224,   225,
     226,   226,   226,   226,   227,   227,   227,   227,   228,   228,
     228,   229,   229,   231,   231,   231,   231,    40,   105,   215,
     230,   241,   242,   234,   216,   235,   232,   135,   215,   249,
     250,    37,    57,   231,   231,   231,     3,    61,    74,   201,
      67,   182,    40,   135,   183,   184,   185,   186,   177,   177,
     177,   192,    63,   167,   174,   216,   216,   216,   155,   216,
     216,   108,   109,   110,   111,   115,   135,     4,   176,   104,
     213,    63,   143,   145,    64,     3,    63,   135,    61,   135,
      64,     3,     3,   251,    57,   253,   246,   215,   145,   177,
     177,    63,     3,    63,   145,    57,   145,   190,   101,   102,
     193,   194,   196,   198,   207,    65,    63,    63,    89,   159,
     162,   215,    55,   143,   209,   219,   242,   215,   215,   250,
      61,   258,    48,    49,    55,   115,   134,   252,   254,   255,
     256,   257,     3,   145,     4,    40,   185,   186,    61,   216,
      55,    55,   177,    67,   196,   194,   197,   145,   168,   216,
     149,   152,    55,    63,    63,    63,   135,   143,   134,   259,
     260,   134,   134,    61,     3,   202,   215,    63,    61,   135,
      63,   145,    65,   143,   143,   216,   143,   143,    63,     3,
       3,    61,   256,   203,   204,   215,   177,   177,   169,   216,
      63,    48,    49,   115,   134,   252,   257,   260,     3,    63,
      63,   156,   134,   134,   204,   195,   143,    65,   145
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
#line 226 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("global"),
												ctTopLevel); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 228 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 235 "syntax/tjs.y"
    { if(sb->CompileErrorCount>20)
												YYABORT;
											  else yyerrok; ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 249 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (2)].np)); ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 258 "syntax/tjs.y"
    { cc->DoBreak(); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 259 "syntax/tjs.y"
    { cc->DoContinue(); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 260 "syntax/tjs.y"
    { cc->DoDebugger(); ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 275 "syntax/tjs.y"
    { cc->EnterBlock(); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 277 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 288 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 289 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(4) - (5)].np));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 291 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 302 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 303 "syntax/tjs.y"
    { cc->CreateForExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (5)].np)));
											  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 305 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 324 "syntax/tjs.y"
    { cc->EnterDoWhileCode(); cc->EnterBlock(); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 325 "syntax/tjs.y"
    { cc->ExitBlock(); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 327 "syntax/tjs.y"
    { cc->CreateDoWhileExprCode((yyvsp[(7) - (8)].np)); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 328 "syntax/tjs.y"
    { cc->ExitDoWhileCode(); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 333 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 334 "syntax/tjs.y"
    { cc->CreateIfExprCode((yyvsp[(4) - (4)].np)); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 335 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 347 "syntax/tjs.y"
    { cc->EnterIfCode(); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 348 "syntax/tjs.y"
    { cc->CreateIfExprCode(cc->MakeNP1(T_EXCRAMATION, (yyvsp[(4) - (4)].np))); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 349 "syntax/tjs.y"
    { cc->ExitIfCode(); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 354 "syntax/tjs.y"
    { cc->EnterElseCode(); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 355 "syntax/tjs.y"
    { cc->ExitElseCode(); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 374 "syntax/tjs.y"
    { cc->EnterForCode(); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 378 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 386 "syntax/tjs.y"
    { cc->CreateExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 391 "syntax/tjs.y"
    { cc->CreateForExprCode(NULL); ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 392 "syntax/tjs.y"
    { cc->CreateForExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 397 "syntax/tjs.y"
    { cc->SetForThirdExprCode(NULL); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 398 "syntax/tjs.y"
    { cc->SetForThirdExprCode((yyvsp[(1) - (1)].np)); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 411 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 412 "syntax/tjs.y"
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

  case 64:

/* Line 1464 of yacc.c  */
#line 430 "syntax/tjs.y"
    { cc->ExitForCode(); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 434 "syntax/tjs.y"
    { cc->EnterForCode();
												  cc->CreateForExprCode(NULL);
												  cc->SetForThirdExprCode(NULL); ;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 459 "syntax/tjs.y"
    { cc->AddLocalVariable(
												lx->GetString((yyvsp[(1) - (2)].num))); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 461 "syntax/tjs.y"
    { cc->InitLocalVariable(
											  lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 478 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
											  ctFunction);
											  cc->EnterBlock();;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 483 "syntax/tjs.y"
    { cc->ExitBlock(); sb->PopContextStack(); ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 488 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(anonymous)"),
											  ctExprFunction);
											  cc->EnterBlock(); ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 493 "syntax/tjs.y"
    { cc->ExitBlock();
											  tTJSVariant v(cc);
											  sb->PopContextStack();
											  (yyval.np) = cc->MakeNP0(T_CONSTVAL);
											  (yyval.np)->SetValue(v); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 520 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 522 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(
												lx->GetString((yyvsp[(1) - (4)].num)), (yyvsp[(4) - (4)].np)); ;}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 527 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												NULL); ;}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 529 "syntax/tjs.y"
    { cc->AddFunctionDeclArgCollapse(
												lx->GetString((yyvsp[(1) - (3)].num))); ;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 545 "syntax/tjs.y"
    { sb->PushContextStack(TJS_W("(anonymous)"), ctExprFunction); cc->EnterBlock(); ;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 549 "syntax/tjs.y"
    { cc->ExitBlock(); tTJSVariant v(cc); sb->PopContextStack(); (yyval.np) = cc->MakeNP0(T_CONSTVAL); (yyval.np)->SetValue(v); ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 553 "syntax/tjs.y"
    { cc->AddFunctionDeclArg(lx->GetString((yyvsp[(1) - (2)].num)), NULL); ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 558 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 559 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 566 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (3)].num)),
												ctProperty); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 570 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 581 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(setter)"),
												ctPropertySetter);
											  cc->EnterBlock();
											  cc->SetPropertyDeclArg(
												lx->GetString((yyvsp[(3) - (5)].num))); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 587 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 592 "syntax/tjs.y"
    { sb->PushContextStack(
												TJS_W("(getter)"),
												ctPropertyGetter);
											  cc->EnterBlock(); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 596 "syntax/tjs.y"
    { cc->ExitBlock();
											  sb->PopContextStack(); ;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 608 "syntax/tjs.y"
    { sb->PushContextStack(
												lx->GetString((yyvsp[(2) - (2)].num)),
												ctClass); ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 612 "syntax/tjs.y"
    { sb->PopContextStack(); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 617 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (2)].np), true); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 618 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(2) - (3)].np), false); ;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 628 "syntax/tjs.y"
    { cc->CreateExtendsExprCode((yyvsp[(1) - (1)].np), false); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 633 "syntax/tjs.y"
    { cc->ReturnFromFunc(NULL); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 634 "syntax/tjs.y"
    { cc->ReturnFromFunc((yyvsp[(2) - (3)].np)); ;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 641 "syntax/tjs.y"
    { cc->EnterSwitchCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 642 "syntax/tjs.y"
    { cc->ExitSwitchCode(); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 648 "syntax/tjs.y"
    { cc->EnterWithCode((yyvsp[(3) - (4)].np)); ;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 649 "syntax/tjs.y"
    { cc->ExitWithCode(); ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 654 "syntax/tjs.y"
    { cc->ProcessCaseCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 655 "syntax/tjs.y"
    { cc->ProcessCaseCode(NULL); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 660 "syntax/tjs.y"
    { cc->EnterTryCode(); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 663 "syntax/tjs.y"
    { cc->ExitTryCode(); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 667 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 668 "syntax/tjs.y"
    { cc->EnterCatchCode(NULL); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 669 "syntax/tjs.y"
    { cc->EnterCatchCode(
												lx->GetString((yyvsp[(3) - (4)].num))); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 675 "syntax/tjs.y"
    { cc->ProcessThrowCode((yyvsp[(2) - (3)].np)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 680 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 684 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 685 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_IF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 690 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 691 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_COMMA, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 696 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 697 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SWAP, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 698 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 699 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 700 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINEEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 701 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRONEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 702 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 703 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUSEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 704 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 705 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 706 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASHEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 707 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISKEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 708 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 709 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALANDEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 710 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 711 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 712 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 717 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 720 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP3(T_QUESTION, (yyvsp[(1) - (5)].np), (yyvsp[(3) - (5)].np), (yyvsp[(5) - (5)].np)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 726 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 727 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALOR, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 731 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 733 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LOGICALAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 737 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 738 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_VERTLINE, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 742 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 743 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_CHEVRON, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 747 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 748 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_AMPERSAND, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 752 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 753 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_NOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 754 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_EQUALEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 755 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCNOTEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 756 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DISCEQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 760 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 761 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 762 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 763 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 764 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_GTOREQUAL, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 768 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 769 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 770 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LARITHSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 771 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_RBITSHIFT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 776 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 777 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PLUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 778 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_MINUS, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 782 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 783 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_PERCENT, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 784 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_SLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 785 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_BACKSLASH, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 786 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ASTERISK, (yyvsp[(1) - (2)].np), (yyvsp[(2) - (2)].np)); ;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 790 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (2)].np); ;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 794 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 795 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXCRAMATION, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 796 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TILDE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 797 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DECREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 798 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INCREMENT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 799 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (2)].np); (yyval.np)->SetOpecode(T_NEW); ;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 800 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INVALIDATE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 801 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 802 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ISVALID, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 803 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DELETE, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 804 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_TYPEOF, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 805 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_SHARP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 806 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_DOLLAR, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 807 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UPLUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 808 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_UMINUS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 809 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_IGNOREPROP, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 810 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_PROPACCESS, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 811 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INSTANCEOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 812 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 813 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_INT, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 814 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 815 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_REAL, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 816 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(4) - (4)].np)); ;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 817 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_STRING, (yyvsp[(2) - (2)].np)); ;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 821 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 823 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 827 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 828 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(2) - (3)].np); ;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 829 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LBRACKET, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 830 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 831 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 832 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  (yyval.np) = cc->MakeNP2(T_DOT, (yyvsp[(1) - (4)].np), node); ;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 835 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 836 "syntax/tjs.y"
    { /* syntactic sugar of '(Dictionary.*T_SYMBOL* incontexof *priority_expr*)' */
												  auto dict = cc->MakeNP0(T_SYMBOL);
												  auto method = cc->MakeNP0(T_CONSTVAL);
												  dict->SetValue(tTJSVariant("Dictionary"));
												  method->SetValue(lx->GetValue((yyvsp[(4) - (4)].num)));
												  auto func = cc->MakeNP2(T_DOT, dict, method);
												  (yyval.np) = cc->MakeNP2(T_INCONTEXTOF, func, (yyvsp[(1) - (4)].np)); ;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 843 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTINCREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 844 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_POSTDECREMENT, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 845 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EVAL, (yyvsp[(1) - (2)].np)); ;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 846 "syntax/tjs.y"
    { lx->SetNextIsBareWord(); ;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 847 "syntax/tjs.y"
    { tTJSExprNode * node = cc->MakeNP0(T_CONSTVAL);
												  node->SetValue(lx->GetValue((yyvsp[(3) - (3)].num)));
												  (yyval.np) = cc->MakeNP1(T_WITHDOT, node); ;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 854 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_CONSTVAL);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 856 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SYMBOL);
												  (yyval.np)->SetValue(tTJSVariant(
													lx->GetString((yyvsp[(1) - (1)].num)))); ;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 859 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_THIS); ;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 860 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_SUPER); ;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 861 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 862 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 863 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_GLOBAL); ;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 864 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_VOID); ;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 865 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 866 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 867 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 868 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 869 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 870 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 872 "syntax/tjs.y"
    { lx->SetStartOfRegExp(); ;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 873 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_REGEXP);
												  (yyval.np)->SetValue(lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 880 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_LPARENTHESIS, (yyvsp[(1) - (4)].np), (yyvsp[(3) - (4)].np)); ;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 885 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP0(T_OMIT); ;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 886 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 887 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_ARG, (yyvsp[(3) - (3)].np), (yyvsp[(1) - (3)].np)); ;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 891 "syntax/tjs.y"
    { (yyval.np) = NULL; ;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 892 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, NULL); ;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 893 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_EXPANDARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 894 "syntax/tjs.y"
    { (yyval.np) = (yyvsp[(1) - (1)].np); ;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 900 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEARRAY);
										  cc->PushCurrentNode(node); ;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 904 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 909 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 910 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 915 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, NULL); ;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 916 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP1(T_ARRAYARG, (yyvsp[(1) - (1)].np)); ;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 921 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_INLINEDIC);
										  cc->PushCurrentNode(node); ;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 926 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 933 "syntax/tjs.y"
    { cn->Add((yyvsp[(1) - (1)].np)); ;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 934 "syntax/tjs.y"
    { cn->Add((yyvsp[(3) - (3)].np)); ;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 939 "syntax/tjs.y"
    { (yyval.np) = cc->MakeNP2(T_DICELM, (yyvsp[(1) - (3)].np), (yyvsp[(3) - (3)].np)); ;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 940 "syntax/tjs.y"
    { tTJSVariant val(lx->GetString((yyvsp[(1) - (3)].num)));
										  tTJSExprNode *node0 = cc->MakeNP0(T_CONSTVAL);
										  node0->SetValue(val);
										  (yyval.np) = cc->MakeNP2(T_DICELM, node0, (yyvsp[(3) - (3)].np)); ;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 956 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateArrayObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 963 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 981 "syntax/tjs.y"
    { cn->AddArrayElement(- lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 982 "syntax/tjs.y"
    { cn->AddArrayElement(+ lx->GetValue((yyvsp[(2) - (2)].num))); ;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 983 "syntax/tjs.y"
    { cn->AddArrayElement(lx->GetValue((yyvsp[(1) - (1)].num))); ;}
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 984 "syntax/tjs.y"
    { cn->AddArrayElement(tTJSVariant());  ;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 985 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 986 "syntax/tjs.y"
    { cn->AddArrayElement((yyvsp[(1) - (1)].np)->GetValue()); ;}
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 991 "syntax/tjs.y"
    { tTJSExprNode *node =
										  cc->MakeNP0(T_CONSTVAL);
										  iTJSDispatch2 * dsp = TJSCreateDictionaryObject();
										  node->SetValue(tTJSVariant(dsp, dsp));
										  dsp->Release();
										  cc->PushCurrentNode(node); ;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 998 "syntax/tjs.y"
    { (yyval.np) = cn; cc->PopCurrentNode(); ;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1011 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), - lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1012 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (4)].num)), + lx->GetValue((yyvsp[(4) - (4)].num))); ;}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1013 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), lx->GetValue((yyvsp[(3) - (3)].num))); ;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1014 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), tTJSVariant()); ;}
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1015 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1016 "syntax/tjs.y"
    { cn->AddDictionaryElement(lx->GetValue((yyvsp[(1) - (3)].num)), (yyvsp[(3) - (3)].np)->GetValue()); ;}
    break;



/* Line 1464 of yacc.c  */
#line 3973 "tjs.tab.c"
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
#line 1021 "syntax/tjs.y"



}
