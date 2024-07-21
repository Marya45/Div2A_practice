// A. Help Vasilisa the Wise 2
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    // a,b
    // c,d
    int c = (d2-r1+c1)/2;
    int b = r1-c1+c;
    int d = b+d1-r1;
    int a = r1-b;
    unordered_map<int,int>mp;
    mp[a]++;mp[b]++;mp[c]++;mp[d]++;
    if(a>0 && a<10 && b>0 && b<10 && c>0 && c<10 && d>0 && d<10 && a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2 && mp[a]==1 && mp[b]==1 && mp[c]==1 && mp[d]==1){
        cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}