// A. Level Statistics
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> tmp(n);
    for(int i=0;i<n;i++){
        cin>>tmp[i].first>>tmp[i].second;
    }
    int prev_p = -1,prev_c = -1;
    for(int i=0;i<n;i++){
        int p = tmp[i].first;
        int c = tmp[i].second;
        if(prev_p > p || p<c || prev_c > c || (p==prev_p && c!=prev_c) || (c-prev_c > p-prev_p) || (p-prev_p==1 && c-prev_c>1)){
            cout<<"NO\n";
            return;
        }
        prev_c = c;
        prev_p = p;
    }
    cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}