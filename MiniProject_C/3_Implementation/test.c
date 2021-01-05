#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void sum()
{
    TEST_ASSERT_EQUAL(3, add(1,2));
}
void subtract()
{
    TEST_ASSERT_EQUAL(3, sub(5,2));
}
void multi()
{
    TEST_ASSERT_EQUAL(10, multi(5,2));
}
void dollar()
{
    TEST_ASSERT_EQUAL(1885.00, dollar(29));
}
void rupees()
{
    TEST_ASSERT_EQUAL(76.92, rupees(5000));
}


int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(sum);
    RUN_TEST(subtract);

    return UNITY_END();
}