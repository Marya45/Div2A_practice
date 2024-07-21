// A. Professor GukiZ's Robot
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(abs(x2-x1)==abs(y2-y1)){
        cout<<abs(x2-x1)<<"\n";
    }
    else{
        cout<<abs(x2-x1)+1<<"\n";
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}