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
    Solution();
    ~Solution();

    /* problem */

    // 移除元素 https://leetcode-cn.com/problems/remove-element/
    int removeElementV1(std::vector<int>& nums, int val);
    int removeElementV2(std::vector<int>& nums, int val);
};   

    }
}

#endif // _ARRAY_H_