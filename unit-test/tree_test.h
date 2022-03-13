#ifndef _TREE_TEST_H_
#define _TREE_TEST_H_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>

#include "../src/tree/tree.h"

void treeLevelOrder(blue_algorithm::tree::Solution *s) {
    blue_algorithm::tree::Tree myTree = s->ConstructTree({1,3,5,6});
    std::vector< std::vector<int> > res = s->levelOrder(myTree);
    std::vector< std::vector<int> > expectRes = {{1},{3,5},{6}};
    EXPECT_THAT(res,::testing::ContainerEq(expectRes));
    s->FreeMyTree(myTree);
}

void testTree() {
    blue_algorithm::tree::Solution s = blue_algorithm::tree::Solution();

    treeLevelOrder(&s);

    ASSERT_TRUE(true);
}

#endif // _TREE_TEST_H_