#include <bits/stdc++.h>
using namespace std;

int main() {
	int sum=0;
	for(int i=0;i<10;i++){
		int x;cin>>x;
		if(x%2==0){
			sum+=x;
		}
	}
	cout<<sum;

    return 0;
}
