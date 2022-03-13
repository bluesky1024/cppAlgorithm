#include "tree.h"
#include <vector>

// using namespace blue_algorithm::tree;

// Tree ConstructTree(std::vector<int> nums) {
//     if (nums.size() == 0) {
//         return nullptr;
//     }
//     TreeNode *root = new TreeNode(nums[0]);
//     // 先进先出
//     std::vector<TreeNode *> curHeadNode = {root}; 
//     int i = 1;
//     for (;i < nums.size();){
//         int headCnt = curHeadNode.size();
//         for (int ii=0;ii<headCnt;ii++){
//             if (i >= nums.size()){
//                 break;
//             }
//             if (nums[i] != -1) {
//                 curHeadNode[ii]->left = new TreeNode(nums[i]);
//                 curHeadNode.push_back(curHeadNode[ii]->left);
//             }
//             i++;
//             if (i >= nums.size()){
//                 break;
//             }
//             if (nums[i] != -1) {
//                 curHeadNode[ii]->right = new TreeNode(nums[i]);
//                 curHeadNode.push_back(curHeadNode[ii]->right);
//             }
//             i++;
//         }
//         curHeadNode.erase(curHeadNode.begin(),curHeadNode.begin()+headCnt);
//     }

//     return root;
// }

// void FreeMyTree(Tree root) {
//     if (root != nullptr) {
//         FreeMyTree(root->left);
//         FreeMyTree(root->right);
//         delete root;
//     }
// }

blue_algorithm::tree::Solution::Solution() {}

blue_algorithm::tree::Solution::~Solution() {}

// ConstructTree 层序遍历方式构建二叉树，-1 表示节点为空
blue_algorithm::tree::Tree blue_algorithm::tree::Solution::ConstructTree(std::vector<int> nums) {
    if (nums.size() == 0) {
        return nullptr;
    }
    TreeNode *root = new TreeNode(nums[0]);
    // 先进先出
    std::vector<TreeNode *> curHeadNode = {root}; 
    int i = 1;
    for (;i < nums.size();){
        int headCnt = curHeadNode.size();
        for (int ii=0;ii<headCnt;ii++){
            if (i >= nums.size()){
                break;
            }
            if (nums[i] != -1) {
                curHeadNode[ii]->left = new TreeNode(nums[i]);
                curHeadNode.push_back(curHeadNode[ii]->left);
            }
            i++;
            if (i >= nums.size()){
                break;
            }
            if (nums[i] != -1) {
                curHeadNode[ii]->right = new TreeNode(nums[i]);
                curHeadNode.push_back(curHeadNode[ii]->right);
            }
            i++;
        }
        curHeadNode.erase(curHeadNode.begin(),curHeadNode.begin()+headCnt);
    }

    return root;
}

// FreeTree 释放二叉树动态申请的内存
void blue_algorithm::tree::Solution::FreeMyTree(Tree root) {
    if (root != nullptr) {
        this->FreeMyTree(root->left);
        this->FreeMyTree(root->right);
        delete root;
    }
}

std::vector< std::vector<int> > blue_algorithm::tree::Solution::levelOrder(TreeNode* root) {
    std::vector< std::vector<int> > res;
    if (root == nullptr) {
        return res;
    }
    std::vector< TreeNode* > curHeadNodes = {root};
    for (;curHeadNodes.size()!=0;){
        std::vector<int> singleLevel;
        int curCnt = curHeadNodes.size();
        for (int i=0;i<curCnt;i++){
            singleLevel.push_back(curHeadNodes[i]->val);
            if (curHeadNodes[i]->left!=nullptr) {
                curHeadNodes.push_back(curHeadNodes[i]->left);
            }
            if (curHeadNodes[i]->right!=nullptr) {
                curHeadNodes.push_back(curHeadNodes[i]->right);
            }
        }
        curHeadNodes.erase(curHeadNodes.begin(),curHeadNodes.begin()+curCnt);
        res.push_back(singleLevel);
    }
    return res;
}