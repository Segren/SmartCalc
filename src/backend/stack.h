#ifndef STACK_H
#define STACK_H

#include "ipn_converter.h"
#include "s21_smart_calc.h"

#define MAX_SIZE 255

// стек для хранения операторов
typedef struct {
  int top;
  char elements[MAX_SIZE];  // Массив символов для хранения операторов
} OperatorStack;

// стек для хранения функций
typedef struct {
  int top;
  char *elements[MAX_SIZE];  // Массив символов для хранения функций
} FunctionStack;

// стек для вычислений постфикса
typedef struct {
  int top;
  double elements[MAX_SIZE];  // Массив символов для хранения чисел
} CalcStack;

void initOpStack(OperatorStack *s);
int isOpStackEmpty(OperatorStack *s);
int isOpStackFull(OperatorStack *s);
void pushOpStack(OperatorStack *s, char item);
char popOpStack(OperatorStack *s);
char peekOpStack(OperatorStack *s);
void clearOpStack(OperatorStack *s);

void initFuncStack(FunctionStack *s);
int isFuncStackEmpty(FunctionStack *s);
int isFuncStackFull(FunctionStack *s);
void pushFuncStack(FunctionStack *s, char *item);
char *popFuncStack(FunctionStack *s);
char *peekFuncStack(FunctionStack *s);
void clearFuncStack(FunctionStack *s);

void initCalcStack(CalcStack *s);
int isCalcStackEmpty(CalcStack *s);
int isCalcStackFull(CalcStack *s);
void pushCalcStack(CalcStack *s, double item);
double popCalcStack(CalcStack *s);
double peekCalcStack(CalcStack *s);
void clearCalcStack(CalcStack *s);

#endif  // STACK_H
