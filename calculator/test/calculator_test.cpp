#include "gtest/gtest.h"

#include "calculator.h"

TEST(calculator_test, add_WhenPositiveArguments_WillReturnCorrectSum)
{
    const auto expectedResult = 52;
    EXPECT_EQ(calculator::add(50, 2), expectedResult);
}

TEST(calculator_test, add_WhenNegativeArguments_WillReturnCorrectSum)
{
    const auto expectedResult = -52;
    EXPECT_EQ(calculator::add(-50, -2), expectedResult);
}

TEST(calculator_test, add_WhenMixedSignArguments_WillReturnCorrectSum)
{
    const auto expectedResult = 48;
    EXPECT_EQ(calculator::add(50, -2), expectedResult);
}

TEST(calculator_test, subtract_WhenPositiveArguments_WillReturnCorrectSum)
{
    const auto expectedResult = 48;
    EXPECT_EQ(calculator::subtract(50, 2), expectedResult);
}

TEST(calculator_test, subtract_WhenNegativeArguments_WillReturnCorrectSum)
{
    const auto expectedResult = -48;
    EXPECT_EQ(calculator::subtract(-50, -2), expectedResult);
}

TEST(calculator_test, subtract_WhenMixedSignArguments_WillReturnCorrectSum)
{
    const auto expectedResult = 52;
    EXPECT_EQ(calculator::subtract(50, -2), expectedResult);
}

TEST(calculator_test, divide_WhenExactDivision_WillReturnCorrectResult)
{
    const auto expectedResult = 25;
    EXPECT_EQ(calculator::divide(50, 2), expectedResult);
}

TEST(calculator_test, divide_WhenNotExactDivision_WillReturnCorrectResult)
{
    const auto expectedResult = 24.5;
    EXPECT_EQ(calculator::divide(49, 2), expectedResult);
}

TEST(calculator_test, divide_WhenDivisionByZero_WillCrash)
{
    EXPECT_DEATH(calculator::divide(1, 0), "");
}
