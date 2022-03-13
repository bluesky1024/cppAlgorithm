#include <stdio.h>
#include <vector>

#include "string.h"

blue_algorithm::string::Solution::Solution(){
}

blue_algorithm::string::Solution::~Solution(){
}


bool blue_algorithm::string::Solution::isPalindrome(int x) {
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
