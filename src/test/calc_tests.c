#include "test_runner.h"

START_TEST(s21_calc_cases_1) {
  char *input = "15+6.1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 21.1);
}
END_TEST

START_TEST(s21_calc_cases_2) {
  char *input = "sin(0)+6.1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 6.1);
}
END_TEST

START_TEST(s21_calc_cases_3) {
  char *input = "sin(0)+6.1 + x";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 5;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 11.1);
}
END_TEST

START_TEST(s21_calc_cases_4) {
  char *input = "sin(0)*1 + x/5 - 1^5";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 5;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 0);
}
END_TEST

START_TEST(s21_calc_cases_5) {
  char *input = "(5+3)*(7%3)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 5;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 8);
}
END_TEST

START_TEST(s21_calc_cases_6) {
  char *input = "-(sqrt(4))";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 5;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, -2);
}
END_TEST

START_TEST(s21_calc_cases_7) {
  char *input = "cos(0)+6.1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 7.1);
}
END_TEST

START_TEST(s21_calc_cases_8) {
  char *input = "tan(0)+6.1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 6.1);
}
END_TEST

START_TEST(s21_calc_cases_9) {
  char *input = "asin(0)+6.1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 6.1);
}
END_TEST

START_TEST(s21_calc_cases_10) {
  char *input = "acos(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 0);
}
END_TEST

START_TEST(s21_calc_cases_11) {
  char *input = "atan(0)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 0);
}
END_TEST

START_TEST(s21_calc_cases_12) {
  char *input = "(-)";
  int index = 1;
  bool result = isUnaryMinus(input, index);
  ck_assert_int_eq(result, true);
}
END_TEST

START_TEST(s21_calc_cases_13) {
  char *input = "+-";
  int index = 1;
  bool result = isUnaryMinus(input, index);
  ck_assert_int_eq(result, true);
}
END_TEST

START_TEST(s21_calc_cases_14) {
  OperationType op = LN;
  int result = getPrecedence(op);
  ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST(s21_calc_cases_15) {
  OperationType op = UNAR_SUB;
  int result = getPrecedence(op);
  ck_assert_int_eq(result, 5);
}
END_TEST

START_TEST(s21_calc_cases_16) {
  OperationType op = RIGHT_BRACKET;
  int result = getPrecedence(op);
  ck_assert_int_eq(result, 6);
}
END_TEST

START_TEST(s21_calc_cases_17) {
  OperationType op = UNKNOWN;
  int result = getPrecedence(op);
  ck_assert_int_eq(result, -1);
}
END_TEST

START_TEST(s21_calc_cases_18) {
  char *input = "#";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, UNAR_SUB);
}
END_TEST

START_TEST(s21_calc_cases_19) {
  char *input = "sqrt";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, SQRT);
}
END_TEST

START_TEST(s21_calc_cases_20) {
  char *input = "sin";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, SIN);
}
END_TEST

START_TEST(s21_calc_cases_21) {
  char *input = "cos";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, COS);
}
END_TEST

START_TEST(s21_calc_cases_22) {
  char *input = "asin";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, ASIN);
}
END_TEST

START_TEST(s21_calc_cases_23) {
  char *input = "acos";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, ACOS);
}
END_TEST

START_TEST(s21_calc_cases_24) {
  char *input = "tan";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, TAN);
}
END_TEST

START_TEST(s21_calc_cases_25) {
  char *input = "atan";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, ATAN);
}
END_TEST

START_TEST(s21_calc_cases_26) {
  char *input = "log";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, LOG);
}
END_TEST

START_TEST(s21_calc_cases_27) {
  char *input = "ln";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, LN);
}
END_TEST

START_TEST(s21_calc_cases_28) {
  char *input = ")";
  OperationType result = inputSort(input);
  ck_assert_int_eq(result, RIGHT_BRACKET);
}
END_TEST

START_TEST(s21_calc_cases_29) {
  char *input = "(";
  double result = hasBalancedParenthesis(input);
  ck_assert_int_eq(result, 1);
}

START_TEST(s21_calc_cases_30) {
  char *input = ")";
  double result = hasBalancedParenthesis(input);
  ck_assert_int_eq(result, -1);
}

START_TEST(s21_calc_cases_31) {
  char *input = "acos(x)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 1;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 0);
}
END_TEST

START_TEST(s21_calc_cases_32) {
  char *input = "-acos(x)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 1;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 0);
}
END_TEST

START_TEST(s21_calc_cases_33) {
  char *input = "sin(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, sin(1));
}
END_TEST

START_TEST(s21_calc_cases_34) {
  char *input = "cos(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, cos(1));
}
END_TEST

START_TEST(s21_calc_cases_35) {
  char *input = "tan(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, tan(1));
}
END_TEST

START_TEST(s21_calc_cases_36) {
  char *input = "atan(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, atan(1));
}
END_TEST

START_TEST(s21_calc_cases_37) {
  char *input = "sqrt(4)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, 2);
}
END_TEST

START_TEST(s21_calc_cases_38) {
  char *input = "asin(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, asin(1));
}
END_TEST

START_TEST(s21_calc_cases_39) {
  char *input = "log(10)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, log10(10));
}
END_TEST

START_TEST(s21_calc_cases_40) {
  char *input = "ln(10)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, log(10));
}
END_TEST

START_TEST(s21_calc_cases_41) {
  char *input = "(5^1+3)*(7%3)/2";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST(s21_calc_cases_42) {
  char *input = "acos(1)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, acos(1 * M_PI / 180.0));
}
END_TEST

START_TEST(s21_calc_cases_43) {
  char *input = "log(10)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, log10(10));
}
END_TEST

START_TEST(s21_calc_cases_44) {
  char *input = "ln(10)";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_ldouble_eq(result, log(10));
}
END_TEST

START_TEST(s21_calc_cases_45) {
  char *input = "8*1/2-1";
  double result = 0;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(result, 3);
}
END_TEST

START_TEST(s21_calc_cases_46) {
  char *input = "sqrt(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_47) {
  char *input = "asin(5)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_48) {
  char *input = "acos(5)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_49) {
  char *input = "log(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_50) {
  char *input = "ln(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_51) {
  char *input = "3/0";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_52) {
  char *input = "3%0";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfixForGraph(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_53) {
  char *input = "sqrt(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_54) {
  char *input = "asin(5)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_55) {
  char *input = "acos(5)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_56) {
  char *input = "log(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_57) {
  char *input = "ln(-2)";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_58) {
  char *input = "3/0";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

START_TEST(s21_calc_cases_59) {
  char *input = "3%0";
  double result = 0;
  bool flag = true;
  if (hasBalancedParenthesis(input) == 0) {
    char *postfix = tokenize(input);
    double x = 0;
    flag = calculatePostfix(postfix, &result, x);
    free(postfix);
  }
  ck_assert_int_eq(flag, false);
}
END_TEST

Suite *s21_calc_cases(void) {
  Suite *suite = suite_create("s21_calc_cases");
  TCase *tc = tcase_create("s21_calc_tc");

  tcase_add_test(tc, s21_calc_cases_1);
  tcase_add_test(tc, s21_calc_cases_2);
  tcase_add_test(tc, s21_calc_cases_3);
  tcase_add_test(tc, s21_calc_cases_4);
  tcase_add_test(tc, s21_calc_cases_5);
  tcase_add_test(tc, s21_calc_cases_6);
  tcase_add_test(tc, s21_calc_cases_7);
  tcase_add_test(tc, s21_calc_cases_8);
  tcase_add_test(tc, s21_calc_cases_9);
  tcase_add_test(tc, s21_calc_cases_10);
  tcase_add_test(tc, s21_calc_cases_11);
  tcase_add_test(tc, s21_calc_cases_12);
  tcase_add_test(tc, s21_calc_cases_13);
  tcase_add_test(tc, s21_calc_cases_14);
  tcase_add_test(tc, s21_calc_cases_15);
  tcase_add_test(tc, s21_calc_cases_16);
  tcase_add_test(tc, s21_calc_cases_17);
  tcase_add_test(tc, s21_calc_cases_18);
  tcase_add_test(tc, s21_calc_cases_19);
  tcase_add_test(tc, s21_calc_cases_20);
  tcase_add_test(tc, s21_calc_cases_21);
  tcase_add_test(tc, s21_calc_cases_22);
  tcase_add_test(tc, s21_calc_cases_23);
  tcase_add_test(tc, s21_calc_cases_24);
  tcase_add_test(tc, s21_calc_cases_25);
  tcase_add_test(tc, s21_calc_cases_26);
  tcase_add_test(tc, s21_calc_cases_27);
  tcase_add_test(tc, s21_calc_cases_28);
  tcase_add_test(tc, s21_calc_cases_29);
  tcase_add_test(tc, s21_calc_cases_30);
  tcase_add_test(tc, s21_calc_cases_31);
  tcase_add_test(tc, s21_calc_cases_32);
  tcase_add_test(tc, s21_calc_cases_33);
  tcase_add_test(tc, s21_calc_cases_34);
  tcase_add_test(tc, s21_calc_cases_35);
  tcase_add_test(tc, s21_calc_cases_36);
  tcase_add_test(tc, s21_calc_cases_37);
  tcase_add_test(tc, s21_calc_cases_38);
  tcase_add_test(tc, s21_calc_cases_39);
  tcase_add_test(tc, s21_calc_cases_40);
  tcase_add_test(tc, s21_calc_cases_41);
  tcase_add_test(tc, s21_calc_cases_42);
  tcase_add_test(tc, s21_calc_cases_43);
  tcase_add_test(tc, s21_calc_cases_44);
  tcase_add_test(tc, s21_calc_cases_45);
  tcase_add_test(tc, s21_calc_cases_46);
  tcase_add_test(tc, s21_calc_cases_47);
  tcase_add_test(tc, s21_calc_cases_48);
  tcase_add_test(tc, s21_calc_cases_49);
  tcase_add_test(tc, s21_calc_cases_50);
  tcase_add_test(tc, s21_calc_cases_51);
  tcase_add_test(tc, s21_calc_cases_52);
  tcase_add_test(tc, s21_calc_cases_53);
  tcase_add_test(tc, s21_calc_cases_54);
  tcase_add_test(tc, s21_calc_cases_55);
  tcase_add_test(tc, s21_calc_cases_56);
  tcase_add_test(tc, s21_calc_cases_57);
  tcase_add_test(tc, s21_calc_cases_58);
  tcase_add_test(tc, s21_calc_cases_59);

  suite_add_tcase(suite, tc);
  return suite;
}
