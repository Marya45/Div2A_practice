// A. Playing with Paper
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans = 0;
    while(a>0 && b>0){
        ans += (a/b);
        a = a%b;
        if(a<b){
            swap(a,b);
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}