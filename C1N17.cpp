#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;

	//answer var
	int ma=INT_MIN,mi=INT_MAX;
	while(x!=0){
		cin>>x;
		if(x==0){
			break;
		}
		ma = max(x,ma);
		mi = min(x,mi);
	}
	if(ma==INT_MIN || mi==INT_MAX){
		cout<<"No data";
	}else{
		cout<<ma<<" "<<mi;
    }
    return 0;
}
