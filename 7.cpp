// A. Two Permutations
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b+2<=n){
        cout<<"YES\n";
    }
    else if(a==b && b==n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}