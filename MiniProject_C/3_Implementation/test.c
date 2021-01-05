#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}

void test_add()
{
    TEST_ASSERT_EQUAL(10, add(5,5));
    TEST_ASSERT_EQUAL(1, add(5,5));
}
void test_sub()
{
    TEST_ASSERT_EQUAL(10, sub(20,10));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}