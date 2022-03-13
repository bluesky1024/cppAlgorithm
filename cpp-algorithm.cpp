#include "cpp-algorithm.h"
#include "src/array/array.h"
#include <stdio.h>

int main(){
    blue_algorithm::array::Solution s;

    std::vector<int> in = {1,3,5,6};
    printf("res is %d \n",s.searchInsert(in,2));

    printf("hello world \n");
}