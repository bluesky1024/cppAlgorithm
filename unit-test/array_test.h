#ifndef _ARRAY_TEST_H_
#define _ARRAY_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../array/array.h"

void array_remove_element(blue_algorithm::array::Solution *s) {
    std::vector<int> in1 = {1,2,6,3,4,6,5};
    ASSERT_EQ(s->removeElementV1(in1,6),5);
    in1.erase(in1.begin()+5,in1.end());
    std::vector<int> out1 = {1,2,3,4,5};
    EXPECT_THAT(in1, ::testing::ContainerEq(out1));

    std::vector<int> in2 = {0,1,2,2,3,0,4,2};
    ASSERT_EQ(s->removeElementV1(in2,2),5);
    in2.erase(in2.begin()+5,in2.end());
    std::vector<int> out2 = {0,1,3,0,4};
    EXPECT_THAT(in2, ::testing::ContainerEq(out2));
}

void array_test() {
    blue_algorithm::array::Solution s = blue_algorithm::array::Solution();

    array_remove_element(&s);

    ASSERT_TRUE(true);
}

#endif // _ARRAY_TEST_H_