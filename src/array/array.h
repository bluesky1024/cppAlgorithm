#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <vector>

namespace blue_algorithm {
    namespace array {


class Solution
{
private:
    /* data */
public:
    /* problem */

    // 移除元素 https://leetcode-cn.com/problems/remove-element/
    int removeElementV1(std::vector<int>& nums, int val);
    int removeElementV2(std::vector<int>& nums, int val);

    // 搜索插入位置 https://leetcode-cn.com/problems/search-insert-position/
    int searchInsert(std::vector<int>& nums, int target);

    // 获取k对最小和组合
    int getMinSum(const std::vector<int> arr1, const std::vector<int> arr2, int k);

    // 组合总和III https://leetcode.cn/problems/combination-sum-iii/
    std::vector<std::vector<int>> combinationSum3(int k, int n);
    void combinationSum3Sub(int k, int n, int cur, std::vector<int> curArr, std::vector<std::vector<int>> &res);
};

    }
}

#endif // _ARRAY_H_