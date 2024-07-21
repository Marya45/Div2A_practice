// A. Unit Array
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin>>n;
    int a[n];
    int sum = 0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        if(a[i]<0){
            cnt++;
        }
    }
    if(sum>=0){
        if(cnt%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else if(sum<0){
        int ans=0;
        while(sum<0){
            sum+=2;
            ans++;
        }
        cnt += ans;
        if(cnt%2==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+1<<endl;
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