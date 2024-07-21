// A. Stones
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ca=a, cb=b, cc=c;
    int ans = 0;
    if(b==0){
        cout<<"0\n";
        return;
    }
    if(b>c){
        int tmp = b/2;
        int mn = min(tmp,a);
        if(a>tmp){
            ans += tmp*2;
            b -= ans;
            ans += tmp;
            a -= ans;
        }
        else{
            ans += a;
            ans += a*2;
            b -= a*2;
            a = 0;
        }

        tmp = c/2;
        if(b>tmp){
            ans += tmp*2;
            ans += tmp;
        }
        else{
            ans += b;
            ans += b*2;
        }
    }
    else{
        int tmp = c/2;
        if(b>tmp){
            ans += tmp*2;
            ans += tmp;
            b -= tmp;
        }
        else{
            ans += b*2;
            ans += b;
            b = 0;
        }
        tmp = b/2;
        if(a>tmp){
            ans += tmp*2;
            ans += tmp;
        }
        else{
            ans += a*2;
            ans += a;
        }
    }
    a = ca;
    b = cb;
    c = cc;
    int ans1 = ans;
    ans = 0;
    if(b<c){
        int tmp = b/2;
        int mn = min(tmp,a);
        if(a>tmp){
            ans += tmp*2;
            b -= ans;
            ans += tmp;
            a -= ans;
        }
        else{
            ans += a;
            ans += a*2;
            b -= a*2;
            a = 0;
        }

        tmp = c/2;
        if(b>tmp){
            ans += tmp*2;
            ans += tmp;
        }
        else{
            ans += b;
            ans += b*2;
        }
    }
    else{
        int tmp = c/2;
        if(b>tmp){
            ans += tmp*2;
            ans += tmp;
            b -= tmp;
        }
        else{
            ans += b*2;
            ans += b;
            b = 0;
        }
        tmp = b/2;
        if(a>tmp){
            ans += tmp*2;
            ans += tmp;
        }
        else{
            ans += a*2;
            ans += a;
        }
    }
    cout<<max(ans1,ans)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}