#include "cpp-algorithm.h"
#include "src/array/array.h"
#include "src/str/str.h"
#include "src/tree/tree.h"
#include <stdio.h>
#include <vector>
#include <string>

int main(){
    blue_algorithm::str::Solution s;
    std::vector<std::string> in = {"eat", "tea", "tan", "ate", "nat", "bat"};
    s.groupAnagrams(in);

    printf("hello world \n");
}