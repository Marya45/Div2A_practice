// A. Buying Torches
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll ans = 0;
    ll tmp = (y*k)+k-1;
    ans += (tmp/(x-1));
    if(tmp%(x-1)!=0){
        ans++;
    }
    cout<<ans+k<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}