// A. City Day
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=i-1;j>=i-x && j>=0;j--){
            if(arr[j]<=arr[i]){
                flag = false;
            }
        }
        for(int j=i+1;j<n && j<=i+y;j++){
            if(arr[j]<=arr[i]){
                flag = false;
            }
        }
        if(flag){
            cout<<i+1<<"\n";
            return;
        }
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}