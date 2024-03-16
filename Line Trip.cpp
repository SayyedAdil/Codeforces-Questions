//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    ll t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int> v(n);
        rep(i,n) cin>>v[i];
        int l = 0,ans = 0;
        forf(i,0,n){
            ans = max(ans , v[i] - l);
            l=v[i];
        }
        ans = max(ans , 2*(x-l));
        cout<<ans<<'\n';
    }
}