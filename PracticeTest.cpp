/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_single_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, different_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("xX");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_digit_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("11");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_digit_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("21");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("??");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("?.");
    ASSERT_FALSE(actual);
}