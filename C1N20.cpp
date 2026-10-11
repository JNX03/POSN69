#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;cin>>x;
	for(int j=0;j<x;j++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=0;i<x-2;i++){
		cout<<"*";
		for(int j=0;j<x-2;j++){
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for(int j=0;j<x;j++){
		cout<<"*";
	}
    return 0;
}
