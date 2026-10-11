#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;cin>>n;

    int cc=0,ct=0,am=0;
    for(int i=0;i<n.size();i++){
        for(int j=0;j<n.size();j++){
            cerr<<i<<"|"<<n<<endl;
            if(n[i]=='('&&n[i+1]!=')'){
                if(n[j]==')' && n[j-1]!='('){
                    cc=cc+2;
                    am++;
                    // n.erase(i,1);
                    // n.erase(j,1);
                }
                break;
            }else if(n[i]=='('&& n[i+1]==')'){
                // n.erase(i,1);
                // n.erase(i+1,1);
                cc=cc+2;
                break;
            }else if(n[i]==')'){
                // n.erase(i,1);
                // ct=max(cc,ct);
                cc=0;
                break;
            }
        }
    }
    cout<<ct;
    return 0;
}
