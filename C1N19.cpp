#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long x;cin>>x;
	
	//answer var
	int c=0;
	while(x%10!=0){
		x=x/10;
		c++;
	}
	cout<<c;
    return 0;
}
