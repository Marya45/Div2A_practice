// A. A and B and Chess
#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> white = {{'Q',9} , {'R',5} , {'B',3} , {'N',3} , {'P',1} };
unordered_map<char,int> black = {{'q',9} , {'r',5} , {'b',3} , {'n',3} , {'p',1} };

void solve(){
    int w_score = 0, b_score = 0;
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(auto it:s){
            if(white.find(it)!=white.end()){
                w_score += white[it];
            }
            else if(black.find(it)!=black.end()){
                b_score += black[it];
            }
        }
    }
    if(w_score == b_score){
        cout<<"Draw\n";
    }
    else if(w_score > b_score){
        cout<<"White\n";
    }
    else{
        cout<<"Black\n";
    }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}