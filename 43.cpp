// A. Petr and Book
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(7);
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int ind = 0;
    while(true){
        n -= arr[ind];
        if(n<=0){
            cout<<ind+1<<"\n";
            return;
        }
        ind = (ind+1)%7;
    }
    cout<<-1<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}