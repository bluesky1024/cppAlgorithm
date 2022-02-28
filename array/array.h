#ifndef _BLUE_ARRAY_H_
#define _BLUE_ARRAY_H_

#include <vector>

namespace blue_algorithm {
    namespace array {


class Solution
{
private:
    /* data */
public:
    // Solution();
    // ~Solution();

    /* problem */

    // 移除元素 https://leetcode-cn.com/problems/remove-element/
    int removeElementV1(std::vector<int>& nums, int val);
    int removeElementV2(std::vector<int>& nums, int val);
};   

int Solution::removeElementV1(std::vector<int>& nums, int val) {
    std::vector<int>::iterator iter = nums.begin();
    for (;iter!=nums.end();) {
        if (*iter==val) {
            iter = nums.erase(iter);
            continue;
        }
        iter++;
    }
    return nums.size();
}

int Solution::removeElementV2(std::vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
}

    }
}

#endif // _BLUE_ARRAY_H_