// A. Sasha and the Beautiful Array
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx = max(x,mx);
        mn = min(mn,x);
    }
    cout<<mx-mn<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}