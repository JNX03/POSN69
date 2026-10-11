#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    // cerr<<n<<endl;
    //ans var
    string ph = "abcdefghijklmnopqrstuvwxyz";
    int count=0;
    for(int i=0;i<n.size();i++){
        for(int j=0;j<ph.size();j++){
            if(char(tolower(n[i]))==char(ph[j])){
                cerr<<char(tolower(n[i]))<<char(ph[j])<<" ";
                count++;
                ph.erase(j,1);
            }
        }
        // cerr<<ph<<endl;
    }
    cerr<<count;
    if(count>=26){
        cout<<"YES";
    }else{
        cout<<"NO"<<endl;
        cout<<ph;
    }
    return 0;
}
