// A. Even But Not Even
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int odd=0;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2!=0){
            odd++;
        }
    }
    if(odd<=1){
        cout<<"-1\n";
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2!=0){
            cout<<s[i];
            cnt++;
        }
        if(cnt==2){
            break;
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}