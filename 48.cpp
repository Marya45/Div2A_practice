// A. Donut Shops
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<c){
        cout<<"1 ";
        double tmp = (c/(b*1.0));
        if(tmp<a){
            cout<<b<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    else{
        cout<<"-1 2\n";
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}