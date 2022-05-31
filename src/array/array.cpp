#include <stdio.h>
#include <vector>
#include <math.h>

#include "array.h"

namespace blue_algorithm::array {

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

int Solution::searchInsert(std::vector<int>& nums, int target) {
    int head = 0;
    int tail = nums.size()-1;
    for (;head<=tail;){
        int mid = (head+tail) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            head = mid+1;
        }
        if (nums[mid] > target) {
            tail = mid-1;
        }
    }
    return head;
}

std::vector<std::vector<int>> Solution::combinationSum3(int k, int n) {
    std::vector<std::vector<int>> res;
    combinationSum3Sub(k, n, 1, {}, res);
    return res;
}

void Solution::combinationSum3Sub(int k, int n, int cur, std::vector<int> curArr, std::vector<std::vector<int>> &res) {
    if ((k == 0) && (n == 0)) {
        res.push_back(curArr);
    }
    
    if ((k == 0) || (n == 0) || (cur > n)) {
        return;
    }

    combinationSum3Sub(k, n, cur+1, curArr, res);
    curArr.push_back(cur);
    combinationSum3Sub(k-1, n-cur, cur+1, curArr, res);
    return;
}

std::vector<std::vector<int>> Solution::insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
    int left = newInterval[0];
    int right = newInterval[1];
    bool placed = false;
    std::vector<std::vector<int>> ans;
    for (const auto& interval: intervals) {
        if (interval[0] > right) {
            // 在插入区间的右侧且无交集
            if (!placed) {
                ans.push_back({left, right});
                placed = true;                    
            }
            ans.push_back(interval);
        }
        else if (interval[1] < left) {
            // 在插入区间的左侧且无交集
            ans.push_back(interval);
        }
        else {
            // 与插入区间有交集，计算它们的并集
            left = std::min(left, interval[0]);
            right = std::max(right, interval[1]);
        }
    }
    if (!placed) {
        ans.push_back({left, right});
    }
    return ans;
}

} // blue_algorithm::array