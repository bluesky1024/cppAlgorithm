#ifndef _BLUE_STR_H_
#define _BLUE_STR_H_

#include <vector>
#include <string>

namespace blue_algorithm {
    namespace str {

class Solution{
    private:
    /* data */
public:
    Solution();
    ~Solution();

    /* problem */
    // 回文数
    bool isPalindrome(int x);

    // 字母异位词分组 https://leetcode.cn/problems/group-anagrams/
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs);
};

    }
}

#endif // _BLUE_STR_H_