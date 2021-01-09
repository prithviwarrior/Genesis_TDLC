#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

void setUp(){}
void tearDown(){}

void test_add()
{
    TEST_ASSERT_EQUAL(10, add(5,5));
    
}
void test_add_fail()
{
    TEST_ASSERT_EQUAL(1, add(5,5));
}
void test_sub()
{
    TEST_ASSERT_EQUAL(10, sub(20,10));
}

void test_square()
{
    TEST_ASSERT_EQUAL(16, square(4));
}

void test_cube()
{
    TEST_ASSERT_EQUAL(8, cube(2));
}

void test_sqroot()
{
    TEST_ASSERT_EQUAL(4, sqroot(25));
}

int test_Dec()
{
    TEST_ASSERT_EQUAL(25,Dec("1a"));
}


int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    //RUN_TEST(test_add_fail);
    RUN_TEST(test_sub);
    return UNITY_END();
}

