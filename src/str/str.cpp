#include <stdio.h>
#include <vector>
#include <map>

#include "str.h"

namespace blue_algorithm::str {

Solution::Solution(){
}

Solution::~Solution(){
}


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

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string>& strs) {
    auto genMapKey = [](std::string& str) -> std::string {
        std::map<char,int> statMap;
        for (int i=0;i<str.size();i++) {
            if(statMap.find(str[i]) != statMap.end()) {
                statMap[str[i]] = statMap[str[i]] + 1;
            } else {
                statMap[str[i]] = 1;
            }
        }
        std::string resStr = "";
        for (auto &[k, v] : statMap) {
            resStr.push_back(k);
            resStr += std::to_string(v);
        }
        return resStr;
    };

    std::map<std::string, std::vector<std::string>> fullStatMap;
    for (auto str : strs) {
        std::string mapKey = genMapKey(str);
        if(fullStatMap.find(mapKey) != fullStatMap.end()) {
            fullStatMap[mapKey].push_back(str);
        } else {
            fullStatMap[mapKey] = {str};
        }
    }

    std::vector<std::vector<std::string>> res;
    for (auto &[_,v] : fullStatMap) {
        res.push_back(v);
    }
    return res;
}



} // namespace blue_algorithm::str