#include "test.h"
#include <stdio.h>
#include <gtest/gtest.h>

#define unit_test_suite_name BLUE_ALGORIGHT_UNIT_TEST

TEST(unit_test_suite_name,first_demo) {
    printf("hello my first gtest demo");
    ASSERT_TRUE(true);
}