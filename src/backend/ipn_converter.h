#ifndef IPN_CONVERTER_H
#define IPN_CONVERTER_H

#include "s21_smart_calc.h"
#include "stack.h"

typedef enum
{
    SUM,
    SUB,
    MUL,
    DIV,
    MOD,
    SQR,
    SQRT,
    SIN,
    COS,
    ASIN,
    ACOS,
    TAN,
    ATAN,
    LOG,
    LN,
    LEFT_BRACKET,
    RIGHT_BRACKET,
    UNAR_SUB,
    UNKNOWN
} OperationType;

bool isDigit(const char input);
bool isAlpha(const char input);
bool isParenthesis(const char input);
bool isOperator(const char input);
bool isUnaryMinus(const char *expression, int index);
bool isX(const char input);
int getPrecedence(OperationType op);
char *tokenize(char *expression);
OperationType inputSort(char *input);
void addTokenToPostfixExpression(char *postfix, const char *token);
bool calculatePostfix(char *postfix, double *result, double x);

#endif // IPN_CONVERTER_H