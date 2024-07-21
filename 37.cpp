// A. Cashier
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,l,a;
    cin>>n>>l>>a;
    int ans = 0;
    int start = 0;
    while(n--){
        int ti,li;
        cin>>ti>>li;
        if(ti-start >= a){
            ans += (ti-start)/a;
        }
        start = ti+li;
    }
    if(l-start >= a){
        ans += (l-start)/a;
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