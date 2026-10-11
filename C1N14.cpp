
#include <bits/stdc++.h>
using namespace std;

int main() {
	string n;cin>>n;
	for(int i=0;i<n.size();i++){
		if(i%2==0){
			cout<<char(toupper(n[i]));
		}else{
			cout<<n[i];
		}
	}                                                                                                                                                                                                                                                                                                                                                                                     

    return 0;
}
