#ifndef _STRING_TEST_H_
#define _STRING_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../src/str/str.h"

void stringIsPalindrome(blue_algorithm::str::Solution *s) {
    ASSERT_TRUE(s->isPalindrome(121));
    ASSERT_FALSE(s->isPalindrome(-121));
    ASSERT_FALSE(s->isPalindrome(10));
}

void testStr() {
    blue_algorithm::str::Solution s = blue_algorithm::str::Solution();

    stringIsPalindrome(&s);
}

#endif // _STRING_TEST_H_