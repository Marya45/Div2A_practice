// A. Odd Set
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int odd=0;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        if(x%2!=0){odd++;}
    }
    if(odd==n){
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