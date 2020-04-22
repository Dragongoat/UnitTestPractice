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

TEST(PracticeTest, is_racecar_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_odd_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aba");
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

TEST(PracticeTest, is_unreadable_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\n\r");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, alphanumeric_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("!a67g?g76a!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a g g a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, simple_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 2);
}

TEST(PracticeTest, simple_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, simple_reverse_first_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, simple_reverse_second_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 2);
}

TEST(PracticeTest, simple_reverse_third_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, equal_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, equal_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 2);
}

TEST(PracticeTest, equal_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, one_two_alike_lesser_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, one_two_alike_lesser_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, one_two_alike_lesser_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 3;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, one_two_alike_greater_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 0;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 1);
}

TEST(PracticeTest, one_two_alike_greater_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 0;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, one_two_alike_greater_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 0;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 0);
}

TEST(PracticeTest, one_three_alike_lesser_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 3;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, one_three_alike_lesser_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 3;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, one_three_alike_lesser_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 3;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, one_three_alike_greater_first_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 0;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 1);
}

TEST(PracticeTest, one_three_alike_greater_second_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 0;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, one_three_alike_greater_third_sortDescending)
{
    Practice obj;
	int first = 1;
	int second = 0;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 0);
}

TEST(PracticeTest, two_three_alike_lesser_first_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 3);
}

TEST(PracticeTest, two_three_alike_lesser_second_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, two_three_alike_lesser_third_sortDescending)
{
    Practice obj;
	int first = 3;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, two_three_alike_greater_first_sortDescending)
{
    Practice obj;
	int first = 0;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(first, 1);
}

TEST(PracticeTest, two_three_alike_greater_second_sortDescending)
{
    Practice obj;
	int first = 0;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(second, 1);
}

TEST(PracticeTest, two_three_alike_greater_third_sortDescending)
{
    Practice obj;
	int first = 0;
	int second = 1;
	int third = 1;
    bool actual = obj.sortDescending(&first, &second, &third);
    ASSERT_EQ(third, 0);
}