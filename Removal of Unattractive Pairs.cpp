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
        string s; cin>>s;
        map<char , int> m;
        forf(i,0,n){
            m[s[i]]++;
        }
        int max_e = 0;
        for (auto i:m){
            max_e = max(max_e , i.second);
        }
        int ans = 0;
        if(n-max_e<max_e) ans = (2*max_e) - n;
        if(n%2==1) ans = max(ans , 1);
        cout<<ans<<'\n';
    }

}