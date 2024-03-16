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
        int n; cin>>n;
        vector<int>s(n); vector<int> e(n);
        rep(i,n) cin>>s[i]>>e[i];
        bool flag = true;
        forf(i,1,n){
            if(s[i]>=s[0] && e[i]>=e[0]){
                flag = false;
            }   
        } 
        if(flag) cout<<s[0]<<'\n';
        else cout<<"-1"<<'\n';
    }
}