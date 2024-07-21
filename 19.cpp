// A. Contest Proposal
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]>b[i]){
            flag = false;
        }
    }
    if(flag){
        cout<<"0\n";
        return;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ans++;
            for(int j=n-1;j>i;j--){
                a[j] = a[j-1];
            }
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