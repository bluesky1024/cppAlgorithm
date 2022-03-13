#ifndef _BLUE_TREE_H_
#define _BLUE_TREE_H_

#include <vector>

namespace blue_algorithm {
    namespace tree {

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

typedef TreeNode* Tree;

class Solution{
    private:
    /* data */
public:
    Solution();
    ~Solution();

    /* problem */
    Tree ConstructTree(std::vector<int> nums);
    void FreeMyTree(Tree root);

    
    // 二叉树的层序遍历 https://leetcode-cn.com/problems/binary-tree-level-order-traversal/
    std::vector< std::vector<int> > levelOrder(TreeNode* root);
};

    }
}

#endif // _BLUE_TREE_H_