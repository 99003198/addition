#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "addition.h"
#define PROJECT_NAME "addition"

void test_sum(void);

int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_SUM", test_sum);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

void test_sum(void) {
  CU_ASSERT_EQUAL(7.000, sum(5,2));
  CU_ASSERT_EQUAL(10.00, sum(7,3));
  CU_ASSERT_EQUAL(2000.00, sum(500,1500));
}
