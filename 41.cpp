// A. Supercentral Point
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> pts(n);
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>pts[i].first>>pts[i].second;
    }
    
    for(int i=0;i<n;i++){
        int x = pts[i].first;
        int y = pts[i].second;
        int l=0,r=0,u=0,d=0;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            int nx = pts[j].first;
            int ny = pts[j].second;
            if(nx > x && ny == y){
                r++;
            }
            else if(nx < x && ny==y){
                l++;
            }
            else if(nx==x && ny>y){
                u++;
            }
            else if(nx==x && ny<y){
                d++;
            }
        }
        if(l>0 && r>0 && u>0 && d>0){
            ans++;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}