#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i){
            arr[i] = arr[i]+arr[i-1];
        }
    }
    if(arr[n-1]%x!=0){
        cout<<n<<"\n";
    }
    else{
        int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%x==0){
                continue;
            }
            else{
                ans = max(ans,max(i+1,n-i-1));
            }
        }
        if(ans==0){
            cout<<"-1\n";
        }
        else{
            cout<<ans<<"\n";
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