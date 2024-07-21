// A. Alex and a Rhombus
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1\n";
        return;
    }
    cout<< (n*(n-1)*2)+1 <<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}