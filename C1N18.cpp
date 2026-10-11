#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;cin>>x;

	string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	for(int i=0;i<x.size();i++){
		cout<<(num[x[i]-'0']);
		cout<<" ";
	}

    return 0;
}
