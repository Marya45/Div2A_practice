// A. Alarm Clock
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
        cout<<b<<endl;
    }
    else{
        ll left = a-b;
        ll tmp = c-d;
        if(tmp>0){
            ll cnt = (left+tmp-1)/tmp;
            ll ans = b+(cnt*c);
            cout<<ans<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}