#ifndef _BLUE_STRING_H_
#define _BLUE_STRING_H_

#include <vector>

namespace blue_algorithm {
    namespace string {

class Solution{
    private:
    /* data */
public:
    // Solution();
    // ~Solution();

    /* problem */
    // 回文数
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x) {
    if ( x < 0 ) {
        return false;
    }
    std::vector<int> nums;
    for (;x > 1;) {
        nums.push_back(x%10);
        x = x/10;
    }
    nums.push_back(x);
    int head = 0;
    int tail = nums.size()-1;
    for (;head<tail;){
        if (nums[head] != nums[tail]) {
            return false;
        }
        head++;
        tail--;
    }
    return true;
}


    }
}

#endif