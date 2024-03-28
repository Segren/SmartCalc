#include "test_runner.h"

START_TEST(s21_calc_cases_1)
{
    char *input = "15+6.1";
    double result = 0;
    if (hasBalancedParenthesis(input) == 0)
    {
        char *postfix = tokenize(input);
        double x = 0;
        calculatePostfix(postfix, &result, x);
        free(postfix);
    }
    ck_assert_ldouble_eq(result, 21.1);
}
END_TEST

Suite *s21_calc_cases(void)
{
    Suite *suite = suite_create("s21_calc_cases");
    TCase *tc = tcase_create("s21_calc_tc");

    tcase_add_test(tc, s21_calc_cases_1);

    suite_add_tcase(suite, tc);
    return suite;
}
