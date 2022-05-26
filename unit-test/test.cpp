#include <stdio.h>
#include <gtest/gtest.h>

#include "test.h"
#include "array_test.h"
#include "str_test.h"
#include "tree_test.h"

TEST(first_demo,first_demo) {
    printf("hello my first gtest demo \n");
    ASSERT_TRUE(true);
}

TEST(str_test,str_test) {
    testStr();
}

TEST(tree_test,tree_test) {
    testTree();
}