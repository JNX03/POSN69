#include "Georgette.h"
using namespace std;
#include <bits/stdc++.h>

void answer(int N, int &mn, int &mx) {
  mn = 0,mx=0;
  vector<int> temp;
  for(int i=1;i<N;i++){
    // if((ask(mn,i)) != i){
    //   mn = i;
    // }
    if((ask(i,mx)) != mx){
      mx = i;
      mx
    }  
  }
  return;
}