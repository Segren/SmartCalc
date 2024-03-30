#include "test_runner.h"

int main(void) {
  Suite *array_tests[] = {s21_calc_cases()};

  size_t size = 1;

  for (size_t i = 0; i < size; i++) {
    printf("%s\n", SEP);
    printf("TEST NUMBER: %zu \n", i + 1);

    SRunner *runner = srunner_create(array_tests[i]);

    srunner_set_fork_status(runner, CK_NOFORK);
    srunner_run_all(runner, CK_NORMAL);
    srunner_free(runner);
  }

  return 0;
}
