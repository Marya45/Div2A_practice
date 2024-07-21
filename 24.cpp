// A. Regular Bracket Sequences
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int odd = 1;
    string ans = "";
    for(int i=0;i<n;i++){
        ans += "()";
    }
    for(int i=0;i<n;i++){
        cout<<ans<<"\n";
        swap(ans[odd],ans[odd+1]);
        odd+=2;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}