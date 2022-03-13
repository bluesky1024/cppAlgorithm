#include <stdio.h>
#include <gtest/gtest.h>

#include "test.h"
#include "array_test.h"
#include "str_test.h"
#include "tree_test.h"

#define unit_test_suite_name BLUE_ALGORIGHT_UNIT_TEST

TEST(unit_test_suite_name,first_demo) {
    printf("hello my first gtest demo \n");
    ASSERT_TRUE(true);
}

TEST(unit_test_suite_name,array_test) {
    testArray();
}

TEST(unit_test_suite_name,str_test) {
    testStr();
}

TEST(unit_test_suite_name,tree_test) {
    testTree();
}