#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}

void add()
{
    TEST_ASSERT_EQUAL(10, add(5,5));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(add);
    return UNITY_END();
}