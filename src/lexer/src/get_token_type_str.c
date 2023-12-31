#include "shrimp_lexer.h"

const char *get_token_type_str(shrimp_token_type type)
{
    const char *token_str_list[SHRIMP_TOKEN_TYPE_ENUM_SIZE] = {
        "SHRIMP_TOKEN_KEYWORD_IMPORT",
        "SHRIMP_TOKEN_KEYWORD_AS",
        "SHRIMP_TOKEN_KEYWORD_FUNCDEF",
        "SHRIMP_TOKEN_KEYWORD_FUNCREF",
        "SHRIMP_TOKEN_KEYWORD_TYPEDEF",
        "SHRIMP_TOKEN_KEYWORD_IF",
        "SHRIMP_TOKEN_KEYWORD_ELIF",
        "SHRIMP_TOKEN_KEYWORD_ELSE",
        "SHRIMP_TOKEN_KEYWORD_FOR",
        "SHRIMP_TOKEN_KEYWORD_WHILE",
        "SHRIMP_TOKEN_KEYWORD_RETURN",
        "SHRIMP_TOKEN_KEYWORD_NEW",
        "SHRIMP_TOKEN_KEYWORD_UNDEF",

        "SHRIMP_TOKEN_OPERATOR_LINK",
        "SHRIMP_TOKEN_OPERATOR_INV_EQU",
        "SHRIMP_TOKEN_OPERATOR_EQU_EQU",
        "SHRIMP_TOKEN_OPERATOR_LESS_EQU",
        "SHRIMP_TOKEN_OPERATOR_GREAT_EQU",
        "SHRIMP_TOKEN_OPERATOR_PLUS_EQU",
        "SHRIMP_TOKEN_OPERATOR_MINUS_EQU",
        "SHRIMP_TOKEN_OPERATOR_MULT_EQU",
        "SHRIMP_TOKEN_OPERATOR_DIV_EQU",
        "SHRIMP_TOKEN_OPERATOR_AT",
        "SHRIMP_TOKEN_OPERATOR_DOT",
        "SHRIMP_TOKEN_OPERATOR_BIND",
        "SHRIMP_TOKEN_OPERATOR_EQUAL",
        "SHRIMP_TOKEN_OPERATOR_PLUS",
        "SHRIMP_TOKEN_OPERATOR_MINUS",
        "SHRIMP_TOKEN_OPERATOR_MULTIPLY",
        "SHRIMP_TOKEN_OPERATOR_DIVIDE",
        "SHRIMP_TOKEN_OPERATOR_LESS",
        "SHRIMP_TOKEN_OPERATOR_GREAT",
        "SHRIMP_TOKEN_OPERATOR_INVERT",

        "SHRIMP_TOKEN_SYMBOL_OPEN_PAR",
        "SHRIMP_TOKEN_SYMBOL_CLOSE_PAR",
        "SHRIMP_TOKEN_SYMBOL_OPEN_CURL",
        "SHRIMP_TOKEN_SYMBOL_CLOSE_CURL",
        "SHRIMP_TOKEN_SYMBOL_OPEN_BRACKET",
        "SHRIMP_TOKEN_SYMBOL_CLOSE_BRACKET",
        "SHRIMP_TOKEN_SYMBOL_SEMICOLON",
        "SHRIMP_TOKEN_SYMBOL_COLON",
        "SHRIMP_TOKEN_SYMBOL_REFERENCE",

        "SHRIMP_TOKEN_TYPE_ID",
        "SHRIMP_TOKEN_TYPE_LIT_INT",
        "SHRIMP_TOKEN_TYPE_LIT_CHAR",
        "SHRIMP_TOKEN_TYPE_LIT_STRING"
    };

    return (token_str_list[type]);
}