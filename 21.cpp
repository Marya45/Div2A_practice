// A. Cipher Shifer
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    char temp = s[0];
    int i=1;
    for(i;i<n;i++){
        if(temp == s[i]){
            ans += temp;
            temp = s[i+1];
            i = i+1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}