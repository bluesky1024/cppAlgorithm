#ifndef _STRING_TEST_H_
#define _STRING_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../string/string.h"

void string_is_palindrome(blue_algorithm::string::Solution *s) {
    ASSERT_TRUE(s->isPalindrome(121));
    ASSERT_FALSE(s->isPalindrome(-121));
    ASSERT_FALSE(s->isPalindrome(10));
}

void string_test() {
    blue_algorithm::string::Solution s = blue_algorithm::string::Solution();

    string_is_palindrome(&s);
}

#endif // _STRING_TEST_H_