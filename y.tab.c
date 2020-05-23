
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yaccfile.y"

int yylex();
void yyerror(const char *s);     
#include<stdio.h> 
#include<math.h>
extern FILE *yyin;
#define CONST 1.33
#define CONST1 0.33


/* Line 189 of yacc.c  */
#line 84 "y.tab.c"

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
     NUMBER = 258,
     to = 259,
     cm = 260,
     m = 261,
     tonne = 262,
     ft = 263,
     inch = 264,
     pound = 265,
     km = 266,
     g = 267,
     kg = 268,
     of = 269
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define to 259
#define cm 260
#define m 261
#define tonne 262
#define ft 263
#define inch 264
#define pound 265
#define km 266
#define g 267
#define kg 268
#define of 269




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 10 "yaccfile.y"

float real;



/* Line 214 of yacc.c  */
#line 154 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 166 "y.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  15
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   269

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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    17,    21,    25,    29,
      33,    37,    41,    45,    49,    53,    57,    61,    65,    69,
      73,    77,    81,    85,    89,    93,    97,   101,   105,   109,
     113,   117,   121,   125,   129,   133,   137,   141,   145,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   209,   213,   217,   221,   225,   229,
     233,   237,   241,   245,   249,   253,   257,   261,   265,   269,
     273,   277,   281,   285,   289,   293,   297,   301,   305,   309,
     313,   317,   321,   325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      16,     0,    -1,    17,    -1,     6,     4,    18,    -1,     5,
       4,    19,    -1,    11,     4,    20,    -1,     8,     4,    21,
      -1,     9,     4,    22,    -1,     7,     4,    23,    -1,    10,
       4,    24,    -1,    13,     4,    25,    -1,    12,     4,    26,
      -1,    11,    14,     3,    -1,     5,    14,     3,    -1,     9,
      14,     3,    -1,     8,    14,     3,    -1,    10,    14,     3,
      -1,     7,    14,     3,    -1,    13,    14,     3,    -1,    12,
      14,     3,    -1,    11,    14,     3,    -1,     6,    14,     3,
      -1,     9,    14,     3,    -1,     8,    14,     3,    -1,    10,
      14,     3,    -1,     7,    14,     3,    -1,    13,    14,     3,
      -1,    12,    14,     3,    -1,     5,    14,     3,    -1,     6,
      14,     3,    -1,     9,    14,     3,    -1,     8,    14,     3,
      -1,    10,    14,     3,    -1,     7,    14,     3,    -1,    13,
      14,     3,    -1,    12,    14,     3,    -1,     5,    14,     3,
      -1,     6,    14,     3,    -1,     9,    14,     3,    -1,    11,
      14,     3,    -1,    10,    14,     3,    -1,     7,    14,     3,
      -1,    13,    14,     3,    -1,    12,    14,     3,    -1,     5,
      14,     3,    -1,     6,    14,     3,    -1,     8,    14,     3,
      -1,    11,    14,     3,    -1,    10,    14,     3,    -1,     7,
      14,     3,    -1,    13,    14,     3,    -1,    12,    14,     3,
      -1,    10,    14,     3,    -1,    13,    14,     3,    -1,    12,
      14,     3,    -1,    11,    14,     3,    -1,     6,    14,     3,
      -1,     5,    14,     3,    -1,     9,    14,     3,    -1,     8,
      14,     3,    -1,     7,    14,     3,    -1,    13,    14,     3,
      -1,    12,    14,     3,    -1,    11,    14,     3,    -1,     6,
      14,     3,    -1,     5,    14,     3,    -1,     9,    14,     3,
      -1,     8,    14,     3,    -1,     7,    14,     3,    -1,    10,
      14,     3,    -1,    12,    14,     3,    -1,    11,    14,     3,
      -1,     6,    14,     3,    -1,     5,    14,     3,    -1,     9,
      14,     3,    -1,     8,    14,     3,    -1,     7,    14,     3,
      -1,    10,    14,     3,    -1,    13,    14,     3,    -1,    11,
      14,     3,    -1,     6,    14,     3,    -1,     5,    14,     3,
      -1,     9,    14,     3,    -1,     8,    14,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    30,    31,    32,    33,    34,    35,    36,    37,
      40,    41,    42,    43,    44,    45,    46,    47,    50,    51,
      52,    53,    54,    55,    56,    57,    60,    61,    62,    63,
      64,    65,    66,    67,    70,    71,    72,    73,    74,    75,
      76,    77,    80,    81,    82,    83,    84,    85,    86,    87,
      90,    91,    92,    93,    94,    95,    96,    97,   100,   101,
     102,   103,   104,   105,   106,   107,   110,   111,   112,   113,
     114,   115,   116,   117
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "to", "cm", "m", "tonne", "ft",
  "inch", "pound", "km", "g", "kg", "of", "$accept", "S", "E", "Z", "Y",
  "X", "U", "V", "M", "N", "O", "P", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    15,    16,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    18,    18,    18,    18,    18,    18,    18,    18,
      19,    19,    19,    19,    19,    19,    19,    19,    20,    20,
      20,    20,    20,    20,    20,    20,    21,    21,    21,    21,
      21,    21,    21,    21,    22,    22,    22,    22,    22,    22,
      22,    22,    23,    23,    23,    23,    23,    23,    23,    23,
      24,    24,    24,    24,    24,    24,    24,    24,    25,    25,
      25,    25,    25,    25,    25,    25,    26,    26,    26,    26,
      26,    26,    26,    26
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    25,    23,    22,    24,
      20,    27,    26,    13,    17,    15,    14,    16,    12,    19,
      18,    57,    56,    59,    58,    52,    55,    54,    53,    36,
      37,    41,    38,    40,    39,    43,    42,    44,    45,    49,
      46,    48,    47,    51,    50,    65,    64,    60,    67,    66,
      63,    62,    61,    28,    29,    33,    31,    30,    32,    35,
      34,    81,    80,    76,    83,    82,    77,    79,    78,    73,
      72,    68,    75,    74,    69,    71,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    39,    30,    84,    57,    66,    48,    75,
     102,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -6
static const yytype_int16 yypact[] =
{
      -5,     6,    16,    26,    36,    46,    56,    84,    85,    86,
      70,    -6,    66,     4,    13,    22,    31,    40,    49,    58,
      75,    -6,    77,    78,    79,    80,    81,    82,    83,    87,
      -6,    88,    89,    90,    91,    92,    93,    94,    95,    -6,
      96,    97,    98,    99,   100,   101,   102,   103,    -6,   104,
     105,   106,   107,   108,   109,   110,   111,    -6,   112,   113,
     114,   115,   116,   117,   118,   119,    -6,   120,   121,   122,
     123,   124,   125,   126,   127,    -6,   128,   129,   130,   131,
     132,   133,   134,   135,    -6,   136,   137,   138,   139,   140,
     141,   142,   143,    -6,   144,   145,   146,   147,   148,   149,
     150,   151,    -6,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,     9,    31,
      12,    32,    33,    34,    35,    36,    37,    38,    40,    41,
      13,    42,    43,    44,    45,    46,    47,    49,    50,    51,
      14,    52,    53,    54,    55,    56,    58,    59,    60,    61,
      15,    62,    63,    64,    65,    67,    68,    69,    70,    71,
      16,    72,    73,    74,    76,    77,    78,    79,    80,    81,
      17,    82,    83,    85,    86,    87,    88,    89,    90,    91,
      21,    92,    22,    23,    24,    25,    26,    27,    28,    29,
      94,    95,    96,    97,    98,    99,   100,   101,    18,    19,
      20,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246
};

static const yytype_int8 yycheck[] =
{
       5,     6,     7,     8,     9,    10,    11,    12,    13,     5,
       4,     7,     8,     9,    10,    11,    12,    13,     5,     6,
       4,     8,     9,    10,    11,    12,    13,     5,     6,     7,
       4,     9,    10,    11,    12,    13,     5,     6,     7,     8,
       4,    10,    11,    12,    13,     5,     6,     7,     8,     9,
       4,    11,    12,    13,     5,     6,     7,     8,     9,    10,
       4,    12,    13,     5,     6,     7,     8,     9,    10,    11,
       0,    13,     6,     7,     8,     9,    10,    11,    12,    13,
       5,     6,     7,     8,     9,    10,    11,    12,     4,     4,
       4,    14,    14,    14,    14,    14,    14,    14,    -1,    -1,
      -1,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      16,    17,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      19,     5,     7,     8,     9,    10,    11,    12,    13,    18,
       5,     6,     8,     9,    10,    11,    12,    13,    23,     5,
       6,     7,     9,    10,    11,    12,    13,    21,     5,     6,
       7,     8,    10,    11,    12,    13,    22,     5,     6,     7,
       8,     9,    11,    12,    13,    24,     5,     6,     7,     8,
       9,    10,    12,    13,    20,     5,     6,     7,     8,     9,
      10,    11,    13,    26,     5,     6,     7,     8,     9,    10,
      11,    12,    25,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
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
# if YYLTYPE_IS_TRIVIAL
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
        case 2:

/* Line 1455 of yacc.c  */
#line 17 "yaccfile.y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 19 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 20 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 21 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 22 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 23 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 24 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 25 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 26 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 27 "yaccfile.y"
    {(yyval.real)=(yyvsp[(3) - (3)].real);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 30 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/1000;    printf("%f m to km is %f km\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 31 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*100;     printf("%f m to cm is %f cm\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 32 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*39.37; printf("%f m to inch is %f inches\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 33 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*3.281;  printf("%f m to ft is %f ft\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 34 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 35 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 36 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 37 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 40 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/100000;    printf("%f cm to km is %f km\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 41 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/100;     printf("%f cm to m is %f m\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 42 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/2.54; printf("%f cm to inch is %f inches\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 43 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/30.48;  printf("%f cm to ft is %f ft\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 44 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 45 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 46 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 47 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 50 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*100000;    printf("%f km to cm is %f cm\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 51 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*1000;     printf("%f km to m is %f m\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 52 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*39370; printf("%f km to inch is %f inches\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 53 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*3281;  printf("%f km to ft is %f ft\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 54 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 55 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 56 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 57 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 60 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*30.48;    printf("%f ft to cm is %f cm\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 61 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/3.281;     printf("%f ft to m is %f m\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 62 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*12; printf("%f ft to inch is %f inches\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 63 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/3281;  printf("%f ft to km is %f km\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 64 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 65 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 66 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 67 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 70 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*2.54;    printf("%f inch to cm is %f cm\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 71 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/39.37;     printf("%f inch to m is %f m\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 72 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/12; printf("%f inch to ft is %f ft\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 73 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/39370;  printf("%f inch to km is %f km\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 74 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 75 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 76 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 77 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 80 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*2205;    printf("%f tonne to pound is %f pound\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 81 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*1000;     printf("%f tonne to kg is %f kg\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 82 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*1000000; printf("%f tonne to g is %f g\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 83 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 84 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 85 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 86 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 87 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 90 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/2205;    printf("%f pound to tonne is %f tonne\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 91 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/2.205;     printf("%f pound to kg is %f kg\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 92 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*454; printf("%f pound to g is %f g\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 93 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 94 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 95 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 96 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 97 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 100 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/1000;    printf("%f kg to tonne is %f tonne\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 101 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*2.205;     printf("%f kg to pound is %f pound\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 102 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)*1000; printf("%f kg to g is %f g\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 103 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 104 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 105 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 106 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 107 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 110 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/1000000;    printf("%f g to tonne is %f tonne\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 111 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/454;     printf("%f g to pound is %f pound\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 112 "yaccfile.y"
    {   (yyval.real)=(yyvsp[(3) - (3)].real)/1000; printf("%f g to kg is %f kg\n",(yyvsp[(3) - (3)].real),(yyval.real)); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 113 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 114 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 115 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 116 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 117 "yaccfile.y"
    { printf("Invalid Conversion\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2104 "y.tab.c"
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



/* Line 1675 of yacc.c  */
#line 119 "yaccfile.y"

void yyerror(const char *s){
}
int main(int argc, char *argv[]) 
{
yyin=fopen(argv[1],"r");
int i;
for(i=1;i<=20;i++){
yyparse();
}
fclose(yyin);
return 0;
}
