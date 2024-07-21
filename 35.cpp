// A. Wet Shark and Odd and Even
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll ans = 0, odd = 0, cnt = 0;
    multiset<ll> mt;
    while(n--){
        ll x;
        cin>>x;
        if(x%2==0){
            ans += x;
        }
        else{
            cnt++;
            odd += x;
            mt.insert(x);
        }
    }
    if(cnt%2==0){
        cout<<ans+odd<<"\n";
    }
    else{
        cout<<ans+odd-(*mt.begin())<<"\n";
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}