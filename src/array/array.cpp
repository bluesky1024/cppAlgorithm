#include <stdio.h>
#include <vector>

#include "array.h"

blue_algorithm::array::Solution::Solution(){
}

blue_algorithm::array::Solution::~Solution(){
}

int blue_algorithm::array::Solution::removeElementV1(std::vector<int>& nums, int val) {
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

int blue_algorithm::array::Solution::removeElementV2(std::vector<int>& nums, int val) {
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