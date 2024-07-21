// A. ConneR and the A.R.C. Markland-N
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,s,k;
    cin>>n>>s>>k;
    unordered_map<ll,ll> mp;
    for(int i=0;i<k;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    if(mp.find(s)==mp.end()){
        cout<<"0\n";
        return;
    }
    ll left = s-1;
    ll right = s+1;
    ll ans1 = 1e18;
    ll ans2 = 1e18;
    while(left>0){
        if(mp.find(left)==mp.end()){
            ans1 = s-left;
            break;
        }
        left--;
    }
    while(right<=n){
        if(mp.find(right)==mp.end()){
            ans2 = right-s;
            break;
        }
        right++;
    }
    cout<<min(ans1,ans2)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}