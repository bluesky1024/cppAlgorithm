#ifndef _ARRAY_TEST_H_
#define _ARRAY_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../src/array/array.h"

namespace blue_algorithm::array {

TEST(array_test, RemoveElement) {
    Solution s = Solution();

    std::vector<int> in1 = {1,2,6,3,4,6,5};
    ASSERT_EQ(s.removeElementV1(in1,6),5);
    in1.erase(in1.begin()+5,in1.end());
    std::vector<int> out1 = {1,2,3,4,5};
    EXPECT_THAT(in1, testing::ContainerEq(out1));

    std::vector<int> in2 = {0,1,2,2,3,0,4,2};
    ASSERT_EQ(s.removeElementV1(in2,2),5);
    in2.erase(in2.begin()+5,in2.end());
    std::vector<int> out2 = {0,1,3,0,4};
    EXPECT_THAT(in2, testing::ContainerEq(out2));
}

TEST(array_test, searchInsert) {
    Solution s = Solution();
    
    std::vector<int> in1 = {1,3,5,6};
    ASSERT_EQ(s.searchInsert(in1,5),2);
    ASSERT_EQ(s.searchInsert(in1,2),1);
    ASSERT_EQ(s.searchInsert(in1,7),4);
    ASSERT_EQ(s.searchInsert(in1,0),0);

    std::vector<int> in2 = {1};
    ASSERT_EQ(s.searchInsert(in2,0),0);
}

TEST(array_test, combinationSum3) {
    Solution s = Solution();
    std::vector<std::vector<int>> res = {{1, 2, 4}};
    EXPECT_THAT(res, testing::ContainerEq(s.combinationSum3(3, 7)));
}

} // blue_algorithm::array

#endif // _ARRAY_TEST_H_