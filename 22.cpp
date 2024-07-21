// A. Prefix and Suffix Array
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int l = 2*n-2;
    vector<string> arr;
    for(int i=0;i<l;i++){
        string s;
        cin>>s;
        if(s.length()==n-1){
            arr.push_back(s);
        }
    }
    string s1 = arr[0];
    string s2 = arr[1];
    reverse(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}