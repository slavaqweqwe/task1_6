// my_sin.cpp: определяет точку входа для приложения.
//

#include <gtest/gtest.h>
#include "task.h"
using namespace testspace;
TEST(stack_lib_test, ten)
{
    int a = Fibonacci<10>::ret;
    ASSERT_EQ(a, 55);
}
TEST(stack_lib_test, zero)
{
    int a = Fibonacci<0>::ret;
    ASSERT_EQ(a, 0);
}
TEST(stack_lib_test, one)
{
    int a = Fibonacci<1>::ret;
    ASSERT_EQ(a, 1);
}


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}