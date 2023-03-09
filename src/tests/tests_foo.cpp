/**
 * @file tests_foo.cpp
 * @author Nicolas IRAGNE (nicoragne@hotmail.fr)
 * @brief 
 * @date 2023-03-09
 * 
 * @copyright Copyright niragne (c) 2023
 */

#include "foo.h"
#include <gtest/gtest.h>

TEST(Foo, Add_TwoPositiveNumbers)
{
    EXPECT_EQ(2, starter_project::add(1, 1));
}

TEST(Foo, Add_TwoNegativeNumbers)
{
    EXPECT_EQ(-2, starter_project::add(-1, -1));
}

TEST(Foo, Add_PositiveAndNegativeNumbers)
{
    EXPECT_EQ(0, starter_project::add(1, -1));
}