// A. Everybody Likes Good Arrays!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] = arr[i]%2;
    }
    if(n==1){
        cout<<"0\n";
        return;
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            ans++;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}