//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(v) v.begin(),v.end()
#define vin(v,n) for(ll i=0;i<n;i++) cin>>v[i]
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define pn cout<<"NO"<<'\n'
#define py cout<<"YES"<<'\n'

void solve(){
    ll n,m; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    forf(i,1,n) v[i]+=v[i-1];
    cin>>m;
    ll r = 0;
    rep(i,m){
        ll s; cin>>s;
        r = lower_bound(v.begin() , v.end() , s) - v.begin() + 1;
        cout<<r<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}