// A. Three Indices
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j=-1;
    while(j<n-1){
        j++;
        int val = arr[j];
        int i=j-1;
        bool flag = true;
        while(i>=0){
            if(arr[i]<val){
                flag = false;
                break;
            }
            i--;
        }
        if(flag){
            continue;
        }
        int k = j+1;
        flag = true;
        while(k<n){
            if(val > arr[k]){
                flag = false;
                break;
            }
            k++;
        }
        if(flag){
            continue;
        }

        cout<<"YES\n";
        cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
        return;
    }

    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}