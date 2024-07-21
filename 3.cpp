//A. Beautiful Matrix 
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int v;
            cin>>v;
            if(v==1){
                x = i;
                y = j;
            }
        }
    }
    int cx=3,cy=3;
    cout<<abs(cy-x)+abs(cy-y)<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}