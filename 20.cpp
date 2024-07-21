// A. Median of an Array
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    sort(arr.begin(),arr.end());
    ll med = (n+1)/2;
    ll cnt = 0;
    if(arr[med]+1<=arr[med+1]){
        cout<<"1\n";
        return;
    }
    for(ll i=med;i<=n;i++){
        if(arr[i]==arr[med]){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}