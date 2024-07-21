// A. Make it Beautiful
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[n-1]){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        int cnt = 0;
        int s=0,e=n-1;
        while(cnt<n){
            cout<<arr[s++]<<" ";
            cnt++;
            if(cnt==n){
                break;
            }
            cout<<arr[e--]<<" ";
            cnt++;
        }cout<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}