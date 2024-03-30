#include "stack.h"

void initOpStack(OperatorStack *s) { s->top = -1; }

int isOpStackEmpty(const OperatorStack *s) { return s->top == -1; }

int isOpStackFull(const OperatorStack *s) { return s->top == MAX_SIZE - 1; }

void pushOpStack(OperatorStack *s, char item) {
  if (!isOpStackFull(s)) {
    s->elements[++(s->top)] = item;
  }
  // else
  // {
  //     // Обработка ошибки переполнения стека
  //     printf("Stack overflow\n");
  // }
}

char popOpStack(OperatorStack *s) {
  char flag = -1;
  if (!isOpStackEmpty(s)) {
    flag = s->elements[(s->top)--];
  }
  // else
  // {
  //     // Обработка ошибки пустого стека
  //     printf("Stack is empty\n");
  // }
  return flag;
}

char peekOpStack(OperatorStack *s) {
  char flag = -1;
  if (!isOpStackEmpty(s)) {
    flag = s->elements[(s->top)];
  }
  // else
  // {
  //     // Обработка ошибки пустого стека
  //     printf("Stack is empty\n");
  // }
  return flag;
}

void clearOpStack(OperatorStack *s) { s->top = -1; }

void initFuncStack(FunctionStack *s) { s->top = -1; }

int isFuncStackEmpty(const FunctionStack *s) { return s->top == -1; }

int isFuncStackFull(const FunctionStack *s) { return s->top == MAX_SIZE - 1; }

void pushFuncStack(FunctionStack *s, const char *item) {
  if (!isFuncStackFull(s)) {
    // выделение памяти для новой строки
    s->elements[++(s->top)] = malloc(strlen(item) + 1);
    strcpy(s->elements[s->top], item);
  }
  // else
  // {
  //     // Обработка ошибки переполнения стека
  //     printf("Stack overflow\n");
  // }
}

char *popFuncStack(FunctionStack *s) {
  char *flag = NULL;
  if (!isFuncStackEmpty(s)) {
    flag = s->elements[(s->top)--];
  }
  // else
  // {
  //     // Обработка ошибки пустого стека
  //     printf("Stack is empty\n");
  // }
  return flag;
}

void clearFuncStack(FunctionStack *s) {
  // while (s->top >= 0)
  // {
  //     char *item = s->elements[s->top];
  //     free(item); // Освобождаем память, выделенную под строку
  //     s->top--;   // Уменьшаем индекс верхнего элемента
  // }
  // // После очистки всех элементов, сбрасываем top на начальное значение
  s->top = -1;
}

void initCalcStack(CalcStack *s) { s->top = -1; }

int isCalcStackEmpty(const CalcStack *s) { return s->top == -1; }

int isCalcStackFull(const CalcStack *s) { return s->top == MAX_SIZE - 1; }

void pushCalcStack(CalcStack *s, double item) {
  if (!isCalcStackFull(s)) {
    s->elements[++(s->top)] = item;
  }
  // else
  // {
  //     // Обработка ошибки переполнения стека
  //     printf("Stack overflow\n");
  // }
}

double popCalcStack(CalcStack *s) {
  double flag = -1;
  if (!isCalcStackEmpty(s)) {
    flag = s->elements[(s->top)--];
  }
  // else
  // {
  //     // Обработка ошибки пустого стека
  //     printf("Stack is empty\n");
  // }
  return flag;
}

void clearCalcStack(CalcStack *s) { s->top = -1; }