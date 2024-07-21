// A. Entertainment in MAC
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m = s.length();
    // if(s[0]<=s[m-1]){
    //     if(m>=4 && s[0]==s[m-1]){
    //         int i=1,j=m-2;
    //         bool rev = false;
    //         while(true){
    //             if(s[j]<s[i]){
    //                 rev = true;
    //                 break;
    //             }
    //             if(s[i]<s[j]){
    //                 break;
    //             }
    //             else{
    //                 i++;j--;
    //                 if(i==j){
    //                     break;
    //                 }
    //             }
    //         }
    //         if(rev){
    //             string tmp = s;
    //             reverse(s.begin(),s.end());
    //             cout<<s<<tmp<<"\n";
    //         }
    //         else{
    //             cout<<s<<"\n";
    //         }
    //     }
    //     else{
    //         cout<<s<<"\n";    
    //     }
    // }
    // else{
    //     string tmp = s;
    //     reverse(s.begin(),s.end());
    //     cout<<s<<tmp<<"\n";
    // }
    string tmp = s;
    reverse(s.begin(),s.end());
    cout<<min(s,tmp+s)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}