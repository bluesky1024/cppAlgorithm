#include <stdio.h>
#include <vector>

#include "str.h"

blue_algorithm::str::Solution::Solution(){
}

blue_algorithm::str::Solution::~Solution(){
}


bool blue_algorithm::str::Solution::isPalindrome(int x) {
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
