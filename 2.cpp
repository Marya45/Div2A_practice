// A. Halloumi Boxes
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0){
            if(arr[i]<arr[i-1]){
                flag = false;
            }
        }
    }
    if(k==1 && !flag){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}