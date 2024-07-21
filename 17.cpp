// A. Rigged!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int val = arr[0].first;
    int mx = arr[0].second;
    for(int i=1;i<n;i++){
        if(arr[i].first>=val && arr[i].second>=mx){
            cout<<"-1\n";
            return;
        }
    }
    cout<<val<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}