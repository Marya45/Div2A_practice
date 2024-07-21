// A. GamingForces
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                cnt++;
            }
        }
        int ans = n-cnt+(cnt/2);
        if(cnt%2 != 0){
            ans++;
        } 
        cout<<ans<<endl;  
    }
}