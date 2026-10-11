#include "aplusb.h"
using namespace std;

int array1[200005];
int array2[200005];

void initialize(int N, int A[], int B[]) {
  for(int i=0;i<N;i++){
    array1[i] = A[i];
    array2[i] = B[i]; 
  }  
  return;
}

int answer_question(int i, int j) {
  return array1[i]+array2[j];
}
