// A. Min Or Sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans |= arr[i];
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}