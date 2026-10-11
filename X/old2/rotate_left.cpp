#include "rotate_left.h"

void rotateLeft(std::vector<int>& A, int k) {
    // เขียนโปรแกรมของคุณที่นี่
    std::vector<int> temp(A.size());
    for(int i=0;i<A.size();i++){
        temp[i]=A[(i+k)%A.size()];
    }
    for(int i=0;i<A.size();i++){
        A[i]=temp[i];
    }
    return;
}
