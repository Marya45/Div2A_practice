// A. Tavas and Nafas
#include<bits/stdc++.h>
using namespace std;
string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string b[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string c[10] = {"tmp", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void solve(){
    int n;
    cin>>n;
    if(n<10){
        cout<<a[n];
    }
    else if(n<20){
        cout<<b[n%10];
    }
    else{
        cout<<c[n/10];
        if(n%10){
            cout<<"-"<<a[n%10];
        }
    }
    cout<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}