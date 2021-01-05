#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}

void test_add()
{
    TEST_ASSERT_EQUAL(10, add(5,5));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}