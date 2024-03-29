/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */

#include <stdio.h>
#include "attr.h"
#include "instrutil.h"
int yylex();
void yyerror(char * s);
#include "symtab.h"

FILE *outfile;
char *CommentBuffer;
 

#line 79 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    PROG = 258,
    PERIOD = 259,
    VAR = 260,
    INT = 261,
    BOOL = 262,
    PRINT = 263,
    THEN = 264,
    IF = 265,
    DO = 266,
    ARRAY = 267,
    OF = 268,
    BEG = 269,
    END = 270,
    ASG = 271,
    EQ = 272,
    NEQ = 273,
    LT = 274,
    LEQ = 275,
    GT = 276,
    GEQ = 277,
    AND = 278,
    OR = 279,
    TRUE = 280,
    FALSE = 281,
    ELSE = 282,
    WHILE = 283,
    ID = 284,
    ICONST = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "parse.y" /* yacc.c:355  */

			tokentype token;
			regInfo targetReg;
			varIDList varIDs;
			labelInfo labelinf;
	   	

#line 158 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "parse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    33,    31,    36,    32,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    34,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    51,    56,    59,    60,    63,    64,    65,
      68,    80,    87,    95,   103,   112,   113,   116,   117,   118,
     121,   122,   123,   124,   125,   128,   131,   137,   146,   131,
     167,   179,   191,   203,   191,   228,   244,   273,   310,   338,
     367,   396,   425,   455,   481,   524,   532,   540,   548,   552,
     578,   605,   632,   659,   686,   712
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "PERIOD", "VAR", "INT", "BOOL",
  "PRINT", "THEN", "IF", "DO", "ARRAY", "OF", "BEG", "END", "ASG", "EQ",
  "NEQ", "LT", "LEQ", "GT", "GEQ", "AND", "OR", "TRUE", "FALSE", "ELSE",
  "WHILE", "ID", "ICONST", "'+'", "'-'", "'*'", "';'", "':'", "','", "'['",
  "']'", "'('", "')'", "$accept", "program", "$@1", "block", "variables",
  "vardcls", "vardcl", "idlist", "type", "stype", "stmtlist", "stmt",
  "cmpdstmt", "ifstmt", "$@2", "$@3", "$@4", "ifhead", "writestmt",
  "wstmt", "$@5", "$@6", "astmt", "lhs", "exp", "condexp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    43,    45,    42,    59,    58,    44,    91,    93,    40,
      41
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -56,     6,    -1,   -56,   -20,   -21,    17,     4,    20,    35,
      11,   -56,    34,    39,     5,   -56,     7,   -56,   -56,    44,
     -56,    65,    40,   -56,    29,     0,   -56,    33,   -11,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,    63,   -56,   -56,   -56,
      45,   -56,   -56,   -56,     2,     3,   -56,   -56,    55,   -56,
      67,   -56,     0,     2,   -56,    36,   -56,     2,    50,   -56,
      43,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   -56,    70,   -56,    72,   -13,    57,   -56,
      73,   -13,   -13,   -13,   -13,   -13,   -13,   -17,   -56,   -17,
     -17,   -56,    96,   -56,    36,    97,   -56,    36,   -56,    31,
     -56,    82,   -56,    36,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     5,     0,     0,     0,
       0,    12,     6,     0,     0,     3,     0,     4,     9,     0,
       8,     0,     0,    19,     0,     0,    32,    36,     0,    18,
      24,    20,    26,    23,    21,    22,     0,     7,    15,    16,
       0,    10,    14,    11,     0,    48,    46,    47,    43,    45,
       0,    30,     0,     0,    25,     0,    27,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,    17,     0,    35,     0,    31,
       0,    50,    49,    51,    52,    53,    54,    41,    42,    38,
      39,    40,     0,    37,     0,     0,    44,     0,    28,     0,
      34,     0,    13,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,   -56,   -56,   -56,   100,   -56,   -56,    14,
     -56,   -55,   105,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -10,    64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    12,    13,    14,    41,    42,
      28,    29,    30,    31,    56,    76,   101,    32,    33,    34,
      52,    92,    35,    36,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      75,    45,     4,    59,    54,    10,     3,    69,    23,     5,
      68,    69,   -55,     6,   -55,    24,    72,    25,    70,    71,
      72,    16,     7,    55,    15,    46,    47,    46,    47,    48,
      49,    48,    49,    11,    60,    26,    27,    38,    39,    98,
      21,    22,   100,    74,    24,    18,    25,    77,   104,    16,
      16,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    11,    26,    27,    68,    69,    44,    43,
      53,    38,    39,    20,    70,    71,    72,    40,    37,    57,
      78,    94,    58,    79,    62,    63,    64,    65,    66,    67,
      68,    69,    61,    68,    69,    95,    68,    69,    70,    71,
      72,    70,    71,    72,    70,    71,    72,    97,    93,   103,
      99,    96,    19,   102,    17,     0,    73
};

static const yytype_int8 yycheck[] =
{
      55,     1,     3,     1,    15,     1,     0,    24,     1,    29,
      23,    24,     9,    34,    11,     8,    33,    10,    31,    32,
      33,    14,     5,    34,     4,    25,    26,    25,    26,    29,
      30,    29,    30,    29,    44,    28,    29,     6,     7,    94,
      35,    36,    97,    53,     8,    34,    10,    57,   103,    14,
      14,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    29,    28,    29,    23,    24,    39,    29,
      37,     6,     7,    34,    31,    32,    33,    12,    34,    16,
      30,     9,    37,    40,    17,    18,    19,    20,    21,    22,
      23,    24,    37,    23,    24,    38,    23,    24,    31,    32,
      33,    31,    32,    33,    31,    32,    33,    11,    38,    27,
      13,    38,    12,    99,     9,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,     0,     3,    29,    34,     5,    44,    45,
       1,    29,    46,    47,    48,     4,    14,    53,    34,    47,
      34,    35,    36,     1,     8,    10,    28,    29,    51,    52,
      53,    54,    58,    59,    60,    63,    64,    34,     6,     7,
      12,    49,    50,    29,    39,     1,    25,    26,    29,    30,
      65,    66,    61,    37,    15,    34,    55,    16,    37,     1,
      65,    37,    17,    18,    19,    20,    21,    22,    23,    24,
      31,    32,    33,    66,    65,    52,    56,    65,    30,    40,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    62,    38,     9,    38,    38,    11,    52,    13,
      52,    57,    50,    27,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    43,    42,    44,    45,    45,    46,    46,    46,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      52,    52,    52,    52,    52,    53,    55,    56,    57,    54,
      58,    59,    61,    62,    60,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     2,     0,     2,     3,     2,     2,
       3,     3,     1,     6,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     0,     0,     8,
       2,     4,     0,     0,     6,     3,     1,     4,     3,     3,
       3,     3,     3,     1,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     1
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
#line 51 "parse.y" /* yacc.c:1646  */
    {emitComment("Assign STATIC_AREA_ADDRESS to register \"r0\"");
		   emit(NOLABEL, LOADI, STATIC_AREA_ADDRESS, 0, EMPTY);}
#line 1325 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "parse.y" /* yacc.c:1646  */
    { }
#line 1331 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parse.y" /* yacc.c:1646  */
    { }
#line 1337 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 60 "parse.y" /* yacc.c:1646  */
    { }
#line 1343 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "parse.y" /* yacc.c:1646  */
    { }
#line 1349 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "parse.y" /* yacc.c:1646  */
    { }
#line 1355 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "parse.y" /* yacc.c:1646  */
    { yyerror("***Error: illegal variable declaration\n");}
#line 1361 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "parse.y" /* yacc.c:1646  */
    { 
								
								int i;
								for(i = 0; i < (yyvsp[-2].varIDs).numIds; i ++){
									int offset = NextOffset((yyvsp[0].targetReg).blocksNeeded);
									insert((yyvsp[-2].varIDs).ids[i], (yyvsp[0].targetReg).quantityType, (yyvsp[0].targetReg).type, offset);
								}

								free((yyvsp[-2].varIDs).ids);
							}
#line 1376 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "parse.y" /* yacc.c:1646  */
    { 
								(yyval.varIDs).numIds = (yyvsp[-2].varIDs).numIds + 1;
								(yyval.varIDs).ids = malloc(sizeof(char*) * (yyval.varIDs).numIds);
								memcpy((yyval.varIDs).ids, (yyvsp[-2].varIDs).ids, sizeof(char*) * (yyvsp[-2].varIDs).numIds);
								(yyval.varIDs).ids[(yyval.varIDs).numIds - 1] = (yyvsp[0].token).str;
								free((yyvsp[-2].varIDs).ids);
							}
#line 1388 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "parse.y" /* yacc.c:1646  */
    {
								(yyval.varIDs).numIds = 1;
								(yyval.varIDs).ids = malloc(sizeof(char*) * 1);
								(yyval.varIDs).ids[0] = (yyvsp[0].token).str;
							}
#line 1398 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "parse.y" /* yacc.c:1646  */
    {
	
											(yyval.targetReg).type = (yyvsp[0].targetReg).type;
											(yyval.targetReg).quantityType = QUANTITY_ARRAY;
											(yyval.targetReg).blocksNeeded = (yyvsp[-3].token).num;

										}
#line 1410 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "parse.y" /* yacc.c:1646  */
    { 
										
											(yyval.targetReg).type = (yyvsp[0].targetReg).type; 
											(yyval.targetReg).quantityType = QUANTITY_SCALAR;
											(yyval.targetReg).blocksNeeded = 1;
										
										}
#line 1422 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "parse.y" /* yacc.c:1646  */
    { (yyval.targetReg).type = TYPE_INT; }
#line 1428 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "parse.y" /* yacc.c:1646  */
    { (yyval.targetReg).type = TYPE_BOOL; }
#line 1434 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "parse.y" /* yacc.c:1646  */
    { }
#line 1440 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "parse.y" /* yacc.c:1646  */
    { }
#line 1446 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "parse.y" /* yacc.c:1646  */
    { yyerror("***Error: ';' expected or illegal statement \n");}
#line 1452 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 121 "parse.y" /* yacc.c:1646  */
    { }
#line 1458 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 122 "parse.y" /* yacc.c:1646  */
    { }
#line 1464 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 123 "parse.y" /* yacc.c:1646  */
    { }
#line 1470 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 124 "parse.y" /* yacc.c:1646  */
    { }
#line 1476 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "parse.y" /* yacc.c:1646  */
    { }
#line 1482 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 128 "parse.y" /* yacc.c:1646  */
    { }
#line 1488 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 131 "parse.y" /* yacc.c:1646  */
    {
						
						emit(NOLABEL, CBR, (yyvsp[0].labelinf).targetRegister, (yyvsp[0].labelinf).successLabel, (yyvsp[0].labelinf).failLabel);

					}
#line 1498 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 137 "parse.y" /* yacc.c:1646  */
    {

		  				emitComment("This is the true branch.");
	  					emit((yyvsp[-1].labelinf).successLabel, NOP, 0, 0, 0);
		  			}
#line 1508 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "parse.y" /* yacc.c:1646  */
    {

		  				emitComment("Jumping to outside of IF statement.");
		  				emit(NOLABEL, BR, (yyvsp[-4].labelinf).headLabel, 0, 0);

	  					emitComment("This is the false branch.");
	  					emit((yyvsp[-4].labelinf).failLabel, NOP, 0, 0, 0);

	  				}
#line 1522 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "parse.y" /* yacc.c:1646  */
    {

		  				emitComment("END IF");
		  				emit((yyvsp[-7].labelinf).headLabel, NOP, 0, 0, 0);

		  			}
#line 1533 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "parse.y" /* yacc.c:1646  */
    { 

							(yyval.labelinf).successLabel = NextLabel();
							(yyval.labelinf).failLabel = NextLabel();
							(yyval.labelinf).targetRegister = (yyvsp[0].targetReg).targetRegister;
							(yyval.labelinf).headLabel = NextLabel();

							emitComment("BEGIN IF");

						}
#line 1548 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 179 "parse.y" /* yacc.c:1646  */
    { int printOffset = -4; /* default location for printing */
							 sprintf(CommentBuffer, "Code for \"PRINT\" from offset %d", printOffset);
							 emitComment(CommentBuffer);
								 emit(NOLABEL, STOREAI, (yyvsp[-1].targetReg).targetRegister, 0, printOffset);
								 emit(NOLABEL, 
									  OUTPUTAI, 
									  0,
									  printOffset, 
									  EMPTY);
							   }
#line 1563 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 191 "parse.y" /* yacc.c:1646  */
    { 
				
						// First, print the label of where we currently are.
						(yyvsp[0].labelinf).headLabel = NextLabel();
						(yyvsp[0].labelinf).successLabel = NextLabel();
						(yyvsp[0].labelinf).failLabel = NextLabel();

						sprintf(CommentBuffer, "WHILE STATEMENT #%d", (yyvsp[0].labelinf).headLabel);
						emitComment(CommentBuffer);
						emit((yyvsp[0].labelinf).headLabel, NOP, 0, 0, 0);

				 	}
#line 1580 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 203 "parse.y" /* yacc.c:1646  */
    {  

		  				sprintf(CommentBuffer, "Testing conditional into register r%d", (yyvsp[0].targetReg).targetRegister);
		  				emitComment(CommentBuffer);
		  				sprintf(CommentBuffer, "If condition holds, will jump to L%d, otherwise will end loop and jump to L%d", (yyvsp[-2].labelinf).successLabel, (yyvsp[-2].labelinf).failLabel);

		  				emit(NOLABEL, CBR, (yyvsp[0].targetReg).targetRegister, (yyvsp[-2].labelinf).successLabel, (yyvsp[-2].labelinf).failLabel);

		  				emit((yyvsp[-2].labelinf).successLabel, NOP, 0, 0, 0);


		  			}
#line 1597 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 215 "parse.y" /* yacc.c:1646  */
    { 
		  				sprintf(CommentBuffer, "Jumping back to the beginng of while loop #%d", (yyvsp[-5].labelinf).headLabel);
		  				emitComment(CommentBuffer);
		  				emit(NOLABEL, BR, (yyvsp[-5].labelinf).headLabel, 0, 0);
		  				
		  				sprintf(CommentBuffer, "END WHILE STATEMENT #%d", (yyvsp[-5].labelinf).headLabel);
		  				emitComment(CommentBuffer);
		  				
		  				emit((yyvsp[-5].labelinf).failLabel, NOP, 0, 0, 0);
		   			}
#line 1612 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 228 "parse.y" /* yacc.c:1646  */
    { 
									if((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
										printf("\n*** ERROR ***: RHS is not a scalar variable.\n");
										return -1;
									}

									if (! ((((yyvsp[-2].targetReg).type == TYPE_INT) && ((yyvsp[0].targetReg).type == TYPE_INT)) || 
										(((yyvsp[-2].targetReg).type == TYPE_BOOL) && ((yyvsp[0].targetReg).type == TYPE_BOOL)))) {
											printf("\n*** ERROR ***: Assignment types do not match.\n");
											return -1;
									}

									emit(NOLABEL, STORE, (yyvsp[0].targetReg).targetRegister, (yyvsp[-2].targetReg).targetRegister, EMPTY);
								}
#line 1631 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 244 "parse.y" /* yacc.c:1646  */
    { 
							int newReg1 = NextRegister();
							int newReg2 = NextRegister();

							SymTabEntry *entry = lookup((yyvsp[0].token).str);

							if(entry == NULL){
								printf("\n*** ERROR ***: Variable %s not declared.\n", (yyvsp[0].token).str);
								return -1;
							}

							if(entry->quantityType != QUANTITY_SCALAR){
								printf("\n*** ERROR ***: Variable %s is not a scalar variable.\n", (yyvsp[0].token).str);
								return -1;
							}

							int offset = entry->offset;				
							
							(yyval.targetReg).targetRegister = newReg2;
							(yyval.targetReg).quantityType = entry->quantityType;
							(yyval.targetReg).type = entry->type;

							sprintf(CommentBuffer, "Computing address for variable %s into register \"r%d\"", (yyvsp[0].token).str, newReg2);
							emitComment(CommentBuffer);
							emit(NOLABEL, LOADI, offset, newReg1, EMPTY);
							emit(NOLABEL, ADD, 0, newReg1, newReg2);
						}
#line 1663 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 273 "parse.y" /* yacc.c:1646  */
    {

							int resultRegister = NextRegister();
							int fourRegister = NextRegister();
							int multipleOffsetComputationRegister = NextRegister();
							int offsetRegister = NextRegister();

							SymTabEntry *entry = lookup((yyvsp[-3].token).str);

							if(entry == NULL){
								printf("\n*** ERROR ***: Variable %s not declared.\n", (yyvsp[-3].token).str);
								return -1;
							}

							if((yyvsp[-1].targetReg).type == TYPE_BOOL || (yyvsp[-1].targetReg).quantityType == QUANTITY_ARRAY){
								printf("\n*** ERROR ***: Array variable %s index type must be integer.\n", (yyvsp[-3].token).str);
								return -1;
							}

							(yyval.targetReg).quantityType = QUANTITY_SCALAR;
							(yyval.targetReg).type = entry->type;
							(yyval.targetReg).targetRegister = resultRegister;

							sprintf(CommentBuffer, "Computing address of %s, sub r%d", (yyvsp[-3].token).str, (yyvsp[-1].targetReg).targetRegister);
							emitComment(CommentBuffer);
							emit(NOLABEL, LOADI, 4, fourRegister, 0);
							emit(NOLABEL, MULT, fourRegister, (yyvsp[-1].targetReg).targetRegister, multipleOffsetComputationRegister);

							int baseOffset = NextRegister();
							emit(NOLABEL, LOADI, entry->offset, baseOffset, 0);
							emit(NOLABEL, ADD, multipleOffsetComputationRegister, baseOffset, offsetRegister);
							emit(NOLABEL, ADD, 0, offsetRegister, (yyval.targetReg).targetRegister);

						}
#line 1702 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 310 "parse.y" /* yacc.c:1646  */
    { 
							int newReg = NextRegister();

							if (! (((yyvsp[-2].targetReg).type == TYPE_INT) && ((yyvsp[0].targetReg).type == TYPE_INT))) {
								printf("\n*** ERROR ***: Operand type must be integer.\n");
								return -1;
							}

							if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
								printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
								return -1;
							}

							if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
								printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
								return -1;
							}

							(yyval.targetReg).type = (yyvsp[-2].targetReg).type;
							(yyval.targetReg).quantityType = QUANTITY_SCALAR;
							(yyval.targetReg).targetRegister = newReg;
	
							sprintf(CommentBuffer, "ADD'ing variables stored in registers %d and %d", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
							emit(NOLABEL, ADD, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, newReg);
						
						}
#line 1734 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 338 "parse.y" /* yacc.c:1646  */
    {

								int newReg = NextRegister();

								if (! (((yyvsp[-2].targetReg).type == TYPE_INT) && ((yyvsp[0].targetReg).type == TYPE_INT))) {
									printf("\n*** ERROR ***: Operand type must be integer.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								(yyval.targetReg).type = (yyvsp[-2].targetReg).type;
								(yyval.targetReg).quantityType = QUANTITY_SCALAR;
								(yyval.targetReg).targetRegister = newReg;

								sprintf(CommentBuffer, "SUB'ing variables stored in registers %d and %d", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, SUB, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, newReg);

							}
#line 1767 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 367 "parse.y" /* yacc.c:1646  */
    {

								int newReg = NextRegister();

								if (! (((yyvsp[-2].targetReg).type == TYPE_INT) && ((yyvsp[0].targetReg).type == TYPE_INT))) {
									printf("\n*** ERROR ***: Operand type must be integer.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								(yyval.targetReg).type = (yyvsp[-2].targetReg).type;
								(yyval.targetReg).quantityType = QUANTITY_SCALAR;
								(yyval.targetReg).targetRegister = newReg;

								sprintf(CommentBuffer, "MULT'ing variables stored in registers %d and %d", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, MULT, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, newReg);

							}
#line 1800 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 396 "parse.y" /* yacc.c:1646  */
    {

								int newReg = NextRegister();

								if((yyvsp[-2].targetReg).type != TYPE_BOOL || (yyvsp[0].targetReg).type != TYPE_BOOL){
									printf("\n*** ERROR ***: Operand type must be boolean.\n");
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								(yyval.targetReg).type = (yyvsp[-2].targetReg).type;
								(yyval.targetReg).quantityType = QUANTITY_SCALAR;
								(yyval.targetReg).targetRegister = newReg;

								sprintf(CommentBuffer, "AND'ing variables stored in registers %d and %d", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, AND_INSTR, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 1832 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 425 "parse.y" /* yacc.c:1646  */
    { 

								int newReg = NextRegister();

								if((yyvsp[-2].targetReg).type != TYPE_BOOL || (yyvsp[0].targetReg).type != TYPE_BOOL){
									printf("\n*** ERROR ***: Operand type must be boolean.\n");
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								(yyval.targetReg).type = (yyvsp[-2].targetReg).type;
								(yyval.targetReg).quantityType = QUANTITY_SCALAR;
								(yyval.targetReg).targetRegister = newReg;

								sprintf(CommentBuffer, "OR'ing variables stored in registers %d and %d", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, OR_INSTR, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);


							}
#line 1865 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 455 "parse.y" /* yacc.c:1646  */
    { 
								int newReg = NextRegister();
								
								SymTabEntry* entry = lookup((yyvsp[0].token).str);
								if(entry == NULL){
									printf("\n*** ERROR ***: Variable %s not declared\n", (yyvsp[0].token).str);
									return -1;
								}

								if(entry->quantityType != QUANTITY_SCALAR){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable.\n", (yyvsp[0].token).str);
									return -1;
								}

								int offset = entry->offset;

								(yyval.targetReg).targetRegister = newReg;
								(yyval.targetReg).varName = (yyvsp[0].token).str;
								(yyval.targetReg).type = entry->type;
								(yyval.targetReg).quantityType = entry->quantityType;

								sprintf(CommentBuffer, "Loading variable %s from RHS to register \"r%d\"", (yyvsp[0].token).str, newReg);
								emitComment(CommentBuffer);
								emit(NOLABEL, LOADAI, 0, offset, newReg);								  
							}
#line 1895 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 481 "parse.y" /* yacc.c:1646  */
    {

								int resultRegister = NextRegister();
								int fourRegister = NextRegister();
								int multipleOffsetComputationRegister = NextRegister();
								int offsetRegister = NextRegister();

								SymTabEntry *entry = lookup((yyvsp[-3].token).str);

								if(entry == NULL){
									printf("\n*** ERROR ***: Variable %s not declared.\n", (yyvsp[-3].token).str);
									return -1;
								}

								if((yyvsp[-1].targetReg).type == TYPE_BOOL || (yyvsp[-1].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Array variable %s index type must be integer.\n", (yyvsp[-3].token).str);
									return -1;
								}

								if(entry->quantityType != QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not an array variable.\n", (yyvsp[-3].token).str);
									return -1;
								}

								(yyval.targetReg).quantityType = QUANTITY_SCALAR;
								(yyval.targetReg).varName = (yyvsp[-3].token).str;
								(yyval.targetReg).type = entry->type;
								(yyval.targetReg).targetRegister = resultRegister;

								sprintf(CommentBuffer, "Computing address of %s, sub r%d", (yyvsp[-3].token).str, (yyvsp[-1].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, LOADI, 4, fourRegister, 0);
								emit(NOLABEL, MULT, fourRegister, (yyvsp[-1].targetReg).targetRegister, multipleOffsetComputationRegister);

								int baseOffset = NextRegister();
								emit(NOLABEL, LOADI, entry->offset, baseOffset, 0);
								emit(NOLABEL, ADD, multipleOffsetComputationRegister, baseOffset, offsetRegister);
								emit(NOLABEL, LOADAO, 0, offsetRegister, (yyval.targetReg).targetRegister);

							}
#line 1940 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 524 "parse.y" /* yacc.c:1646  */
    {
						int newReg = NextRegister();
						(yyval.targetReg).targetRegister = newReg;
				   		(yyval.targetReg).type = TYPE_INT;
				   		(yyval.targetReg).quantityType = QUANTITY_SCALAR;
				   		emit(NOLABEL, LOADI, (yyvsp[0].token).num, newReg, EMPTY); 
				   	}
#line 1952 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 532 "parse.y" /* yacc.c:1646  */
    { 
						int newReg = NextRegister(); /* TRUE is encoded as value '1' */
						(yyval.targetReg).targetRegister = newReg;
						(yyval.targetReg).type = TYPE_BOOL;
						(yyval.targetReg).quantityType = QUANTITY_SCALAR;
						emit(NOLABEL, LOADI, 1, newReg, EMPTY); 
					}
#line 1964 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 540 "parse.y" /* yacc.c:1646  */
    { 
						int newReg = NextRegister(); /* TRUE is encoded as value '0' */
						(yyval.targetReg).targetRegister = newReg;
				   		(yyval.targetReg).type = TYPE_BOOL;
				   		(yyval.targetReg).quantityType = QUANTITY_SCALAR;
				   		emit(NOLABEL, LOADI, 0, newReg, EMPTY); 
				   	}
#line 1976 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 548 "parse.y" /* yacc.c:1646  */
    { yyerror("***Error: illegal expression\n");}
#line 1982 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 552 "parse.y" /* yacc.c:1646  */
    {
	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != (yyvsp[0].targetReg).type){
									printf("\n*** ERROR ***: == or != operator with different types.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" NE \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPNE, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2012 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 578 "parse.y" /* yacc.c:1646  */
    {

	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != (yyvsp[0].targetReg).type){
									printf("\n*** ERROR ***: == or != operator with different types.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" == \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPEQ, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2043 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 605 "parse.y" /* yacc.c:1646  */
    {

	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != TYPE_INT || (yyvsp[0].targetReg).type != TYPE_INT){
									printf("\n*** ERROR ***: Relational operator with illegal type.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" < \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPLT, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2074 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 632 "parse.y" /* yacc.c:1646  */
    {

	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != TYPE_INT || (yyvsp[0].targetReg).type != TYPE_INT){
									printf("\n*** ERROR ***: Relational operator with illegal type.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" <= \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPLE, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2105 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 659 "parse.y" /* yacc.c:1646  */
    {

	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != TYPE_INT || (yyvsp[0].targetReg).type != TYPE_INT){
									printf("\n*** ERROR ***: Relational operator with illegal type.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" > \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPGT, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2136 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 686 "parse.y" /* yacc.c:1646  */
    {

	
								(yyval.targetReg).targetRegister = NextRegister();
								(yyval.targetReg).type = TYPE_BOOL;

								if((yyvsp[-2].targetReg).type != TYPE_INT || (yyvsp[0].targetReg).type != TYPE_INT){
									printf("\n*** ERROR ***: Relational operator with illegal type.\n");
									return -1;
								}

								if ((yyvsp[-2].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[-2].targetReg).varName);
									return -1;
								}

								if ((yyvsp[0].targetReg).quantityType == QUANTITY_ARRAY){
									printf("\n*** ERROR ***: Variable %s is not a scalar variable\n", (yyvsp[0].targetReg).varName);
									return -1;
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" >= \"r%d\"", (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPGE, (yyvsp[-2].targetReg).targetRegister, (yyvsp[0].targetReg).targetRegister, (yyval.targetReg).targetRegister);

							}
#line 2167 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 712 "parse.y" /* yacc.c:1646  */
    { yyerror("***Error: illegal conditional expression\n");}
#line 2173 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2177 "parse.tab.c" /* yacc.c:1646  */
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
#line 715 "parse.y" /* yacc.c:1906  */


void yyerror(char* s) {
		fprintf(stderr,"%s\n",s);
		}


int
main(int argc, char* argv[]) {

  printf("\n     CS415 Spring 2018 Compiler\n\n");

  outfile = fopen("iloc.out", "w");
  if (outfile == NULL) { 
	printf("ERROR: cannot open output file \"iloc.out\".\n");
	return -1;
  }

  CommentBuffer = (char *) malloc(650);  
  InitSymbolTable();

  printf("1\t");
  yyparse();
  printf("\n");

  PrintSymbolTable();
  
  fclose(outfile);
  
  return 1;
}




