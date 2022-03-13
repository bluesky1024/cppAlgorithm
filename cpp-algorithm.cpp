#include "cpp-algorithm.h"
#include "src/array/array.h"
#include "src/tree/tree.h"
#include <stdio.h>
#include <vector>

int main(){
    blue_algorithm::tree::Solution s;
    std::vector<int> in = {1,3,5,6};
    blue_algorithm::tree::Tree myTree = s.ConstructTree(in);
    std::vector< std::vector<int> > res = s.levelOrder(myTree);
    for(int i=0;i<res.size();i++) {
        for(int ii=0;ii<res[i].size();ii++){
            printf("%d ",res[i][ii]);
        }
        printf("\n");
    }

    s.FreeMyTree(myTree);

    printf("hello world \n");
}