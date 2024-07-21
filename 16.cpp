// A. We Got Everything Covered!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s="";

    for(int i=0;i<k;i++){
        char ch ='a'+i;
        s += ch;
    }
    string o = s;
    while(n>1){
        s += o;
        n--;
    }
    cout<<s<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}