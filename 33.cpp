// A. Kyoya and Photobooks
#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<((n+1)*26) - n <<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}