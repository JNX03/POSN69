#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;cin>>x;
	for(int i=0;i<x-1;i++){
		for(int j=0;j<x-1;j++){
			if(i+1>j || j-1<i){
				cout<<"*";
			}
		}
		cout<<endl;
	}
    return 0;
}
