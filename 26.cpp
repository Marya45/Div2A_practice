// A. Round Down the Price
#include<bits/stdc++.h>
using namespace std;

vector<int> pre(10);

void solve(){
    long long int m; 
    cin>>m;
    auto val = lower_bound(pre.begin(),pre.end(),m);
    if(*val==m){
        cout<<"0\n";
    }
    else{
        val--;
        cout<<m-*val<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    pre[0] = 1;
    for(int i=1;i<10;i++){
        pre[i] = pre[i-1]*10;
    }
    while(t--){
        solve();
    }
}