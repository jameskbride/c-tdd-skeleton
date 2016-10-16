#include <check.h>

START_TEST(test_this_should_fail)
{
  //Fix this test to get things passing
  ck_assert_int_eq(0, 1);
}
END_TEST

int main(void)
{
  Suite *suite = suite_create("Core");
  TCase *testCases = tcase_create("Core");
  SRunner *suiteRunner = srunner_create(suite);
  int numberFailed;

  suite_add_tcase(suite, testCases);
  tcase_add_test(testCases, test_this_should_fail);
  srunner_run_all(suiteRunner, CK_ENV);
  numberFailed = srunner_ntests_failed(suiteRunner);
  srunner_free(suiteRunner);

  return numberFailed == 0 ? 0 : 1;
}
