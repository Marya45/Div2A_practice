// A. 2-3 Moves
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"2\n";
        return;
    }
    if(n==2){
        cout<<"1\n";
        return;
    }
    if(n%3==0){
        cout<<n/3<<"\n";
        return;
    }
    cout<<min(n/3+(n%3>0),n/2+n%2)<<"\n";
    // int rem = n%3;
    // int ans = (n%2==0?n/2:INT_MAX);
    // if(rem%2==0){
    //     cout<< min(ans,n/3 + 1) <<"\n";
    //     return;
    // }
    // cout<<n/2<<"\n";
    // 3 , 4 , 5 , 6 , 7 , 8
    //  5 , 7 , 11 , 13 , 17 , 19
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}