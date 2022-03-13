#ifndef _STRING_TEST_H_
#define _STRING_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../src/string/string.h"

void stringIsPalindrome(blue_algorithm::string::Solution *s) {
    ASSERT_TRUE(s->isPalindrome(121));
    ASSERT_FALSE(s->isPalindrome(-121));
    ASSERT_FALSE(s->isPalindrome(10));
}

void testString() {
    blue_algorithm::string::Solution s = blue_algorithm::string::Solution();

    stringIsPalindrome(&s);
}

#endif // _STRING_TEST_H_