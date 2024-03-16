//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int a = s[0];
        int n = s[1];
        // cout<<a<<" "<<n;
        forf(i,1,9){
            if(96+i!=a){
                cout<<char(96+i)<<s[1]<<'\n';
            }
            if(48+i!=n){
                cout<<s[0]<<i<<'\n';
            }
        }
    }
}