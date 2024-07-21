// A. Vanya and Table
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int r_min = 100, r_max = 0, c_min = 100, c_max = 0;
    vector<vector<int>> coord;
    while(n--){
        vector<int> tmp(4);
        cin>>tmp[0];
        cin>>tmp[1];
        cin>>tmp[2];
        cin>>tmp[3];
        coord.push_back(tmp);
        // cin>>y1>>x1>>y2>>x2;
        r_min = min({r_min,tmp[1],tmp[3]});
        r_max = max({r_max,tmp[1],tmp[3]});
        c_min = min({c_min,tmp[0],tmp[2]});
        c_max = max({c_max,tmp[0],tmp[2]});
    }

    for(int row = r_min;row<=r_max;row++){
        for(int col=c_min;col<=c_max;col++){
            for(auto it:coord){
                int x1,x2,y1,y2;
                x1 = it[1];
                if(x1 > it[3]){
                    x1 = it[3];
                    x2 = it[1];
                }
                else{
                    x2 = it[3];
                }
                y1 = it[0];
                if(y1 > it[2]){
                    y1 = it[2];
                    y2 = it[0];
                }
                else{
                    y2 = it[2];
                }
                if(row>=x1 && row<=x2 && col>=y1 && col<=y2){
                    ans++;
                }
            }
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