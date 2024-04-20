/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
    void yyerror(char *);
    int yylex(void);

#line 83 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_CONST = 258,               /* INT_CONST  */
    FLOAT_CONST = 259,             /* FLOAT_CONST  */
    CHAR_VAL = 260,                /* CHAR_VAL  */
    STRING_VAL = 261,              /* STRING_VAL  */
    EQ = 262,                      /* EQ  */
    GT = 263,                      /* GT  */
    LT = 264,                      /* LT  */
    GE = 265,                      /* GE  */
    LE = 266,                      /* LE  */
    NE = 267,                      /* NE  */
    PLUSEQ = 268,                  /* PLUSEQ  */
    MINUSEQ = 269,                 /* MINUSEQ  */
    MULTEQ = 270,                  /* MULTEQ  */
    DIVEQ = 271,                   /* DIVEQ  */
    INC = 272,                     /* INC  */
    DEC = 273,                     /* DEC  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    ASSIGN = 275,                  /* ASSIGN  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    DO = 280,                      /* DO  */
    SWITCH = 281,                  /* SWITCH  */
    CASE = 282,                    /* CASE  */
    DEFAULT = 283,                 /* DEFAULT  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    RETURN = 286,                  /* RETURN  */
    INT = 287,                     /* INT  */
    FLOAT = 288,                   /* FLOAT  */
    CHAR = 289,                    /* CHAR  */
    STRING = 290,                  /* STRING  */
    VOID = 291,                    /* VOID  */
    MAIN = 292,                    /* MAIN  */
    PRINTF = 293,                  /* PRINTF  */
    SCANF = 294,                   /* SCANF  */
    LBRACE = 295,                  /* LBRACE  */
    RBRACE = 296,                  /* RBRACE  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    SEMICOLON = 299,               /* SEMICOLON  */
    COLON = 300,                   /* COLON  */
    COMMA = 301,                   /* COMMA  */
    HASH = 302,                    /* HASH  */
    ERROR = 303,                   /* ERROR  */
    PRAGMA = 304,                  /* PRAGMA  */
    EXTERN = 305,                  /* EXTERN  */
    STATIC = 306,                  /* STATIC  */
    CONST = 307,                   /* CONST  */
    VOLATILE = 308,                /* VOLATILE  */
    REGISTER = 309,                /* REGISTER  */
    UNSIGNED = 310,                /* UNSIGNED  */
    TRUE = 311,                    /* TRUE  */
    FALSE = 312,                   /* FALSE  */
    COMMENT = 313,                 /* COMMENT  */
    LBRACKET = 314,                /* LBRACKET  */
    RBRACKET = 315,                /* RBRACKET  */
    OR = 316,                      /* OR  */
    NOT = 317,                     /* NOT  */
    AND = 318,                     /* AND  */
    PLUS = 319,                    /* PLUS  */
    MINUS = 320,                   /* MINUS  */
    MULT = 321,                    /* MULT  */
    DIV = 322,                     /* DIV  */
    MOD = 323                      /* MOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_CONST 258
#define FLOAT_CONST 259
#define CHAR_VAL 260
#define STRING_VAL 261
#define EQ 262
#define GT 263
#define LT 264
#define GE 265
#define LE 266
#define NE 267
#define PLUSEQ 268
#define MINUSEQ 269
#define MULTEQ 270
#define DIVEQ 271
#define INC 272
#define DEC 273
#define IDENTIFIER 274
#define ASSIGN 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define FOR 279
#define DO 280
#define SWITCH 281
#define CASE 282
#define DEFAULT 283
#define BREAK 284
#define CONTINUE 285
#define RETURN 286
#define INT 287
#define FLOAT 288
#define CHAR 289
#define STRING 290
#define VOID 291
#define MAIN 292
#define PRINTF 293
#define SCANF 294
#define LBRACE 295
#define RBRACE 296
#define LPAREN 297
#define RPAREN 298
#define SEMICOLON 299
#define COLON 300
#define COMMA 301
#define HASH 302
#define ERROR 303
#define PRAGMA 304
#define EXTERN 305
#define STATIC 306
#define CONST 307
#define VOLATILE 308
#define REGISTER 309
#define UNSIGNED 310
#define TRUE 311
#define FALSE 312
#define COMMENT 313
#define LBRACKET 314
#define RBRACKET 315
#define OR 316
#define NOT 317
#define AND 318
#define PLUS 319
#define MINUS 320
#define MULT 321
#define DIV 322
#define MOD 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    float fval;
    int ival;
    char cval;
    char *sval;

#line 279 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONST = 3,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 4,                /* FLOAT_CONST  */
  YYSYMBOL_CHAR_VAL = 5,                   /* CHAR_VAL  */
  YYSYMBOL_STRING_VAL = 6,                 /* STRING_VAL  */
  YYSYMBOL_EQ = 7,                         /* EQ  */
  YYSYMBOL_GT = 8,                         /* GT  */
  YYSYMBOL_LT = 9,                         /* LT  */
  YYSYMBOL_GE = 10,                        /* GE  */
  YYSYMBOL_LE = 11,                        /* LE  */
  YYSYMBOL_NE = 12,                        /* NE  */
  YYSYMBOL_PLUSEQ = 13,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 14,                   /* MINUSEQ  */
  YYSYMBOL_MULTEQ = 15,                    /* MULTEQ  */
  YYSYMBOL_DIVEQ = 16,                     /* DIVEQ  */
  YYSYMBOL_INC = 17,                       /* INC  */
  YYSYMBOL_DEC = 18,                       /* DEC  */
  YYSYMBOL_IDENTIFIER = 19,                /* IDENTIFIER  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_FLOAT = 33,                     /* FLOAT  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_STRING = 35,                    /* STRING  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_PRINTF = 38,                    /* PRINTF  */
  YYSYMBOL_SCANF = 39,                     /* SCANF  */
  YYSYMBOL_LBRACE = 40,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 41,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 42,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 43,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 44,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 45,                     /* COLON  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_HASH = 47,                      /* HASH  */
  YYSYMBOL_ERROR = 48,                     /* ERROR  */
  YYSYMBOL_PRAGMA = 49,                    /* PRAGMA  */
  YYSYMBOL_EXTERN = 50,                    /* EXTERN  */
  YYSYMBOL_STATIC = 51,                    /* STATIC  */
  YYSYMBOL_CONST = 52,                     /* CONST  */
  YYSYMBOL_VOLATILE = 53,                  /* VOLATILE  */
  YYSYMBOL_REGISTER = 54,                  /* REGISTER  */
  YYSYMBOL_UNSIGNED = 55,                  /* UNSIGNED  */
  YYSYMBOL_TRUE = 56,                      /* TRUE  */
  YYSYMBOL_FALSE = 57,                     /* FALSE  */
  YYSYMBOL_COMMENT = 58,                   /* COMMENT  */
  YYSYMBOL_LBRACKET = 59,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 60,                  /* RBRACKET  */
  YYSYMBOL_OR = 61,                        /* OR  */
  YYSYMBOL_NOT = 62,                       /* NOT  */
  YYSYMBOL_AND = 63,                       /* AND  */
  YYSYMBOL_PLUS = 64,                      /* PLUS  */
  YYSYMBOL_MINUS = 65,                     /* MINUS  */
  YYSYMBOL_MULT = 66,                      /* MULT  */
  YYSYMBOL_DIV = 67,                       /* DIV  */
  YYSYMBOL_MOD = 68,                       /* MOD  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_program = 70,                   /* program  */
  YYSYMBOL_declaration_list = 71,          /* declaration_list  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_variable_declaration = 73,      /* variable_declaration  */
  YYSYMBOL_scoped_variable_declaration = 74, /* scoped_variable_declaration  */
  YYSYMBOL_variable_declaration_list = 75, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_value = 76, /* variable_declaration_value  */
  YYSYMBOL_variable_declaration_id = 77,   /* variable_declaration_id  */
  YYSYMBOL_type_specifier = 78,            /* type_specifier  */
  YYSYMBOL_function_declaration = 79,      /* function_declaration  */
  YYSYMBOL_parameters = 80,                /* parameters  */
  YYSYMBOL_parameter_list = 81,            /* parameter_list  */
  YYSYMBOL_parameter_type_list = 82,       /* parameter_type_list  */
  YYSYMBOL_parameter_id_list = 83,         /* parameter_id_list  */
  YYSYMBOL_parameter_id = 84,              /* parameter_id  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_expression_statement = 86,      /* expression_statement  */
  YYSYMBOL_compound_statement = 87,        /* compound_statement  */
  YYSYMBOL_local_declarations = 88,        /* local_declarations  */
  YYSYMBOL_statement_list = 89,            /* statement_list  */
  YYSYMBOL_selection_statement = 90,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 91,       /* iteration_statement  */
  YYSYMBOL_return_statement = 92,          /* return_statement  */
  YYSYMBOL_break_statement = 93,           /* break_statement  */
  YYSYMBOL_continue_statement = 94,        /* continue_statement  */
  YYSYMBOL_expression = 95,                /* expression  */
  YYSYMBOL_simple_expression = 96,         /* simple_expression  */
  YYSYMBOL_and_expression = 97,            /* and_expression  */
  YYSYMBOL_unary_relational_expression = 98, /* unary_relational_expression  */
  YYSYMBOL_relational_expression = 99,     /* relational_expression  */
  YYSYMBOL_relop = 100,                    /* relop  */
  YYSYMBOL_sumExp = 101,                   /* sumExp  */
  YYSYMBOL_sumOp = 102,                    /* sumOp  */
  YYSYMBOL_mulExp = 103,                   /* mulExp  */
  YYSYMBOL_mulOP = 104,                    /* mulOP  */
  YYSYMBOL_unary_Exp = 105,                /* unary_Exp  */
  YYSYMBOL_unary_op = 106,                 /* unary_op  */
  YYSYMBOL_factor = 107,                   /* factor  */
  YYSYMBOL_mu_table = 108,                 /* mu_table  */
  YYSYMBOL_immu_table = 109,               /* immu_table  */
  YYSYMBOL_call = 110,                     /* call  */
  YYSYMBOL_args = 111,                     /* args  */
  YYSYMBOL_arg_list = 112,                 /* arg_list  */
  YYSYMBOL_constant = 113                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   289

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    42,    43,    47,    48,    52,    53,    57,
      58,    59,    60,    61,    62,    66,    67,    71,    71,    75,
      76,    80,    81,    82,    83,    87,    88,    97,    98,   102,
     103,   107,   111,   112,   116,   117,   121,   122,   123,   124,
     125,   126,   127,   131,   132,   136,   140,   141,   145,   146,
     150,   151,   157,   158,   159,   163,   164,   168,   172,   176,
     177,   178,   179,   180,   181,   182,   183,   187,   188,   192,
     193,   197,   198,   202,   203,   207,   208,   209,   210,   211,
     212,   216,   217,   221,   222,   226,   227,   231,   232,   233,
     236,   237,   240,   241,   244,   245,   249,   250,   254,   255,
     256,   259,   262,   263,   266,   267,   270,   271,   272,   273
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST",
  "FLOAT_CONST", "CHAR_VAL", "STRING_VAL", "EQ", "GT", "LT", "GE", "LE",
  "NE", "PLUSEQ", "MINUSEQ", "MULTEQ", "DIVEQ", "INC", "DEC", "IDENTIFIER",
  "ASSIGN", "IF", "ELSE", "WHILE", "FOR", "DO", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "CONTINUE", "RETURN", "INT", "FLOAT", "CHAR",
  "STRING", "VOID", "MAIN", "PRINTF", "SCANF", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "SEMICOLON", "COLON", "COMMA", "HASH", "ERROR",
  "PRAGMA", "EXTERN", "STATIC", "CONST", "VOLATILE", "REGISTER",
  "UNSIGNED", "TRUE", "FALSE", "COMMENT", "LBRACKET", "RBRACKET", "OR",
  "NOT", "AND", "PLUS", "MINUS", "MULT", "DIV", "MOD", "$accept",
  "program", "declaration_list", "declaration", "variable_declaration",
  "scoped_variable_declaration", "variable_declaration_list",
  "variable_declaration_value", "variable_declaration_id",
  "type_specifier", "function_declaration", "parameters", "parameter_list",
  "parameter_type_list", "parameter_id_list", "parameter_id", "statement",
  "expression_statement", "compound_statement", "local_declarations",
  "statement_list", "selection_statement", "iteration_statement",
  "return_statement", "break_statement", "continue_statement",
  "expression", "simple_expression", "and_expression",
  "unary_relational_expression", "relational_expression", "relop",
  "sumExp", "sumOp", "mulExp", "mulOP", "unary_Exp", "unary_op", "factor",
  "mu_table", "immu_table", "call", "args", "arg_list", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     224,    25,  -119,  -119,  -119,  -119,    -1,    -1,    -1,    -1,
      -1,    71,   224,  -119,  -119,  -119,    58,  -119,    -1,    59,
      59,    59,    59,    59,  -119,  -119,   -18,    13,  -119,    67,
      75,    -9,  -119,    37,    14,    18,    19,    22,    26,    -1,
      94,  -119,    59,   223,    39,  -119,  -119,   175,    -1,  -119,
    -119,  -119,  -119,  -119,    56,    60,    53,  -119,  -119,  -119,
    -119,  -119,   -14,   223,   223,  -119,  -119,    63,    55,  -119,
    -119,    11,   -24,  -119,    50,  -119,  -119,  -119,  -119,  -119,
      65,   223,   223,    78,   175,    82,    90,   169,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    91,    63,
     266,  -119,   175,  -119,   223,   223,    93,  -119,   223,   223,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    50,    50,
    -119,  -119,  -119,    50,  -119,  -119,    98,   175,   204,   114,
    -119,  -119,  -119,    99,    57,  -119,   223,   223,   223,   223,
    -119,  -119,   223,  -119,   103,  -119,   102,   101,  -119,    55,
    -119,   -15,   -24,   -24,   131,  -119,   204,   223,  -119,  -119,
      59,   127,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   223,
     175,   223,   105,    13,  -119,  -119,  -119,  -119,   111,  -119,
     175,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     2,     4,     6,     8,     0,     5,     0,     0,
       0,     0,     0,     0,     1,     3,    19,     7,    16,    17,
       0,     0,    30,    19,     0,     0,     0,     0,     0,    28,
       0,    10,     0,     0,    34,    31,    33,     0,     0,    14,
       9,    11,    12,    13,     0,    27,     0,    15,   106,   107,
     109,   108,    96,     0,     0,    93,    92,    18,    68,    70,
      72,    74,    82,    86,     0,    91,    95,    94,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    44,
      26,    36,    37,    38,    39,    40,    41,    42,     0,    66,
      95,    29,     0,    20,     0,   103,     0,    71,     0,     0,
      75,    77,    78,    79,    80,    76,    83,    84,     0,     0,
      87,    88,    89,     0,    90,    35,     0,     0,     0,     0,
      57,    58,    55,     0,    49,    43,     0,     0,     0,     0,
      64,    65,     0,    25,     0,   105,     0,   102,    98,    67,
      69,    73,    81,    85,    50,    52,     0,     0,    56,    46,
       0,     0,    60,    61,    62,    63,    59,    97,   101,     0,
       0,     0,     0,     0,    45,    48,   104,    51,     0,    53,
       0,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,   143,  -119,    27,   -19,   120,  -119,     5,
    -119,  -119,   126,   118,  -119,  -119,   -75,  -118,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,   -57,   -36,    62,   -48,
    -119,  -119,    64,  -119,   -83,  -119,   109,  -119,  -119,   -35,
    -119,  -119,  -119,  -119,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    27,    28,    29,    30,
      17,    54,    31,    32,    45,    46,    90,    91,    92,   134,
     161,    93,    94,    95,    96,    97,    98,    99,    68,    69,
      70,   118,    71,   119,    72,   123,    73,    74,    75,   100,
      77,    78,   146,   147,    79
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    35,    36,    37,    38,    16,   106,    67,    76,   129,
     156,    19,    20,    21,    22,    23,   107,    16,   110,   111,
     112,   113,   114,   115,    39,   127,   104,   143,   105,    76,
     133,     2,     3,     4,    47,     5,   152,    48,   171,    76,
     153,    40,   120,   121,   122,   126,    76,   144,   145,   116,
     117,   154,   155,    58,    59,    60,    61,    41,    49,    42,
      42,   150,    50,    51,    42,    42,    52,    18,    42,    62,
      53,    24,    42,    76,    76,   116,   117,    26,    33,   162,
     163,   164,   165,    76,    76,   166,   175,    43,    76,     2,
       3,     4,    63,     5,    44,   177,    40,    56,    80,   102,
     172,    58,    59,    60,    61,   181,    48,     6,     7,     8,
       9,    10,   176,   103,   178,    65,    66,    62,   109,    81,
     128,    82,    83,    84,   108,   125,   130,    85,    86,    87,
      58,    59,    60,    61,   131,   135,   148,   157,    88,   160,
      63,   173,    89,   158,   167,   168,    62,   169,    81,   179,
      82,    83,    84,   170,   180,    25,    85,    86,    87,   108,
      64,   159,    57,    65,    66,    55,   101,    88,   174,    63,
     149,    89,    58,    59,    60,    61,     0,     0,    58,    59,
      60,    61,   151,   124,     0,     0,     0,     0,    62,    64,
       0,     0,    65,    66,    62,     0,    81,     0,    82,    83,
      84,     0,     0,     0,    85,    86,    87,    58,    59,    60,
      61,    63,     0,   132,     0,    88,     0,    63,     0,    89,
       0,     0,     0,    62,     0,     0,    58,    59,    60,    61,
       0,    64,     0,     0,    65,    66,     0,    64,     0,     0,
      65,    66,    62,     1,     0,     0,    63,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     0,
       5,     0,     0,     0,     0,    63,    64,     0,     0,    65,
      66,     0,     0,     0,     6,     7,     8,     9,    10,   136,
     137,   138,   139,   140,   141,    64,   142,     0,    65,    66
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    22,    23,     0,    63,    43,    43,    84,
     128,     6,     7,     8,     9,    10,    64,    12,     7,     8,
       9,    10,    11,    12,    42,    82,    40,   102,    42,    64,
      87,    32,    33,    34,    43,    36,   119,    46,   156,    74,
     123,    59,    66,    67,    68,    81,    81,   104,   105,    64,
      65,   126,   127,     3,     4,     5,     6,    44,    44,    46,
      46,   109,    44,    44,    46,    46,    44,    42,    46,    19,
      44,     0,    46,   108,   109,    64,    65,    19,    19,   136,
     137,   138,   139,   118,   119,   142,   161,    20,   123,    32,
      33,    34,    42,    36,    19,   170,    59,     3,    59,    43,
     157,     3,     4,     5,     6,   180,    46,    50,    51,    52,
      53,    54,   169,    60,   171,    65,    66,    19,    63,    21,
      42,    23,    24,    25,    61,    60,    44,    29,    30,    31,
       3,     4,     5,     6,    44,    44,    43,    23,    40,   134,
      42,   160,    44,    44,    41,    43,    19,    46,    21,    44,
      23,    24,    25,    22,    43,    12,    29,    30,    31,    61,
      62,   134,    42,    65,    66,    39,    48,    40,    41,    42,
     108,    44,     3,     4,     5,     6,    -1,    -1,     3,     4,
       5,     6,   118,    74,    -1,    -1,    -1,    -1,    19,    62,
      -1,    -1,    65,    66,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    30,    31,     3,     4,     5,
       6,    42,    -1,    44,    -1,    40,    -1,    42,    -1,    44,
      -1,    -1,    -1,    19,    -1,    -1,     3,     4,     5,     6,
      -1,    62,    -1,    -1,    65,    66,    -1,    62,    -1,    -1,
      65,    66,    19,    19,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    42,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    50,    51,    52,    53,    54,    13,
      14,    15,    16,    17,    18,    62,    20,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    32,    33,    34,    36,    50,    51,    52,    53,
      54,    70,    71,    72,    73,    74,    78,    79,    42,    78,
      78,    78,    78,    78,     0,    72,    19,    75,    76,    77,
      78,    81,    82,    19,    75,    75,    75,    75,    75,    42,
      59,    44,    46,    20,    19,    83,    84,    43,    46,    44,
      44,    44,    44,    44,    80,    81,     3,    76,     3,     4,
       5,     6,    19,    42,    62,    65,    66,    96,    97,    98,
      99,   101,   103,   105,   106,   107,   108,   109,   110,   113,
      59,    21,    23,    24,    25,    29,    30,    31,    40,    44,
      85,    86,    87,    90,    91,    92,    93,    94,    95,    96,
     108,    82,    43,    60,    40,    42,    95,    98,    61,    63,
       7,     8,     9,    10,    11,    12,    64,    65,   100,   102,
      66,    67,    68,   104,   105,    60,    96,    95,    42,    85,
      44,    44,    44,    95,    88,    44,    13,    14,    15,    16,
      17,    18,    20,    85,    95,    95,   111,   112,    43,    97,
      98,   101,   103,   103,    85,    85,    86,    23,    44,    74,
      78,    89,    95,    95,    95,    95,    95,    41,    43,    46,
      22,    86,    95,    75,    41,    85,    95,    85,    95,    44,
      43,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    83,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    92,    92,    93,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   110,   111,   111,   112,   112,   113,   113,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     1,     4,
       3,     4,     4,     4,     4,     3,     1,     1,     3,     1,
       4,     1,     1,     1,     1,     6,     5,     1,     0,     3,
       1,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     2,     0,     2,     0,
       3,     5,     3,     5,     7,     2,     3,     2,     2,     3,
       3,     3,     3,     3,     2,     2,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       1,     4,     1,     0,     3,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: declaration_list  */
#line 39 "parser.y"
                    {printf("program\n");}
#line 1532 "y.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 42 "parser.y"
                                               {printf("declaration_list\n");}
#line 1538 "y.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 43 "parser.y"
                              {printf("declaration\n");}
#line 1544 "y.tab.c"
    break;

  case 5: /* declaration: function_declaration  */
#line 47 "parser.y"
                                     {printf("function_declaration\n");}
#line 1550 "y.tab.c"
    break;

  case 6: /* declaration: variable_declaration  */
#line 48 "parser.y"
                                      {printf("variable_declaration\n");}
#line 1556 "y.tab.c"
    break;

  case 7: /* variable_declaration: type_specifier variable_declaration_list  */
#line 52 "parser.y"
                                                                {printf("variable_declaration2\n");}
#line 1562 "y.tab.c"
    break;

  case 10: /* scoped_variable_declaration: type_specifier variable_declaration_list SEMICOLON  */
#line 58 "parser.y"
                                                                                    {printf("scoped_variable_declaration\n");}
#line 1568 "y.tab.c"
    break;

  case 16: /* variable_declaration_list: variable_declaration_value  */
#line 67 "parser.y"
                                                      {printf("variable_declaration_value\n");}
#line 1574 "y.tab.c"
    break;

  case 19: /* variable_declaration_id: IDENTIFIER  */
#line 75 "parser.y"
                                       {printf("identifier\n");}
#line 1580 "y.tab.c"
    break;

  case 21: /* type_specifier: INT  */
#line 80 "parser.y"
                      {printf("int\n");}
#line 1586 "y.tab.c"
    break;

  case 25: /* function_declaration: type_specifier IDENTIFIER LPAREN parameters RPAREN statement  */
#line 87 "parser.y"
                                                                                        {printf("type_specifier  IDENTIFIER LPAREN parameters RPAREN statement\n");}
#line 1592 "y.tab.c"
    break;

  case 27: /* parameters: parameter_list  */
#line 97 "parser.y"
                             {printf("NO PARAMETERS");}
#line 1598 "y.tab.c"
    break;

  case 29: /* parameter_list: parameter_list COMMA parameter_type_list  */
#line 102 "parser.y"
                                                             {printf("  parameter_list  COMMA  parameter_type_list\n");}
#line 1604 "y.tab.c"
    break;

  case 30: /* parameter_list: parameter_type_list  */
#line 103 "parser.y"
                                      {printf("  parameter_type_list\n");}
#line 1610 "y.tab.c"
    break;

  case 31: /* parameter_type_list: type_specifier parameter_id_list  */
#line 107 "parser.y"
                                                        {printf("type_specifier  parameter_id_list\n");}
#line 1616 "y.tab.c"
    break;

  case 33: /* parameter_id_list: parameter_id  */
#line 112 "parser.y"
                                 {printf("parameter_id\n");}
#line 1622 "y.tab.c"
    break;

  case 34: /* parameter_id: IDENTIFIER  */
#line 116 "parser.y"
                           {printf("IDENTIFIER\n");}
#line 1628 "y.tab.c"
    break;

  case 36: /* statement: expression_statement  */
#line 121 "parser.y"
                                    {printf("expression_statement\n");}
#line 1634 "y.tab.c"
    break;

  case 37: /* statement: compound_statement  */
#line 122 "parser.y"
                                    {printf("compound_statement\n");}
#line 1640 "y.tab.c"
    break;

  case 38: /* statement: selection_statement  */
#line 123 "parser.y"
                                    {printf("selection_statement\n");}
#line 1646 "y.tab.c"
    break;

  case 39: /* statement: iteration_statement  */
#line 124 "parser.y"
                                    {printf("iteration_statement\n");}
#line 1652 "y.tab.c"
    break;

  case 40: /* statement: return_statement  */
#line 125 "parser.y"
                                    {printf("return_statement\n");}
#line 1658 "y.tab.c"
    break;

  case 41: /* statement: break_statement  */
#line 126 "parser.y"
                                    {printf("break_statement\n");}
#line 1664 "y.tab.c"
    break;

  case 42: /* statement: continue_statement  */
#line 127 "parser.y"
                                    {printf("continue_statement\n");}
#line 1670 "y.tab.c"
    break;

  case 43: /* expression_statement: expression SEMICOLON  */
#line 131 "parser.y"
                                                {printf(" expression SEMICOLON \n");}
#line 1676 "y.tab.c"
    break;

  case 44: /* expression_statement: SEMICOLON  */
#line 132 "parser.y"
                                     {printf("SEMICOLON\n");}
#line 1682 "y.tab.c"
    break;

  case 45: /* compound_statement: LBRACE local_declarations statement_list RBRACE  */
#line 136 "parser.y"
                                                                          {printf("  LBRACE  local_declarations  statement_list  RBRACE\n");}
#line 1688 "y.tab.c"
    break;

  case 46: /* local_declarations: local_declarations scoped_variable_declaration  */
#line 140 "parser.y"
                                                                        {printf("local_declarations  scoped_variable_declaration \n");}
#line 1694 "y.tab.c"
    break;

  case 47: /* local_declarations: %empty  */
#line 141 "parser.y"
                                        {printf("/* empty */ ");}
#line 1700 "y.tab.c"
    break;

  case 48: /* statement_list: statement_list statement  */
#line 145 "parser.y"
                                              {printf("statement_list  statement");}
#line 1706 "y.tab.c"
    break;

  case 49: /* statement_list: %empty  */
#line 146 "parser.y"
                                        {printf("/* empty */   \n");}
#line 1712 "y.tab.c"
    break;

  case 50: /* selection_statement: IF simple_expression statement  */
#line 150 "parser.y"
                                                       {printf(" IF expression statement\n");}
#line 1718 "y.tab.c"
    break;

  case 51: /* selection_statement: IF simple_expression statement ELSE statement  */
#line 151 "parser.y"
                                                                     {printf("IF expression statement ELSE statement\n");}
#line 1724 "y.tab.c"
    break;

  case 52: /* iteration_statement: WHILE expression statement  */
#line 157 "parser.y"
                                                 {printf("WHILE expression statement\n");}
#line 1730 "y.tab.c"
    break;

  case 53: /* iteration_statement: DO statement WHILE expression SEMICOLON  */
#line 158 "parser.y"
                                                              {printf("DO statement WHILE expression SEMICOLON\n");}
#line 1736 "y.tab.c"
    break;

  case 54: /* iteration_statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 159 "parser.y"
                                                                                                       {printf("FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
#line 1742 "y.tab.c"
    break;

  case 55: /* return_statement: RETURN SEMICOLON  */
#line 163 "parser.y"
                                     {printf("RETURN SEMICOLON \n");}
#line 1748 "y.tab.c"
    break;

  case 56: /* return_statement: RETURN expression SEMICOLON  */
#line 164 "parser.y"
                                                {printf("RETURN expression SEMICOLON\n");}
#line 1754 "y.tab.c"
    break;

  case 57: /* break_statement: BREAK SEMICOLON  */
#line 168 "parser.y"
                                  {printf("BREAK SEMICOLON \n");}
#line 1760 "y.tab.c"
    break;

  case 58: /* continue_statement: CONTINUE SEMICOLON  */
#line 172 "parser.y"
                                         {printf("ONTINUE SEMICOLON\n");}
#line 1766 "y.tab.c"
    break;

  case 59: /* expression: mu_table ASSIGN expression  */
#line 176 "parser.y"
                                        {printf("expression\n");}
#line 1772 "y.tab.c"
    break;

  case 96: /* mu_table: IDENTIFIER  */
#line 249 "parser.y"
                   {printf("identifier\n");}
#line 1778 "y.tab.c"
    break;


#line 1782 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 276 "parser.y"


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
  yyparse(); 
  return 0; 
}
