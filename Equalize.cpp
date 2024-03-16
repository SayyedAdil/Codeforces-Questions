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
    ll n; cin>>n;
    vt v;
    set<ll> s;
    rep(i,n){
        ll a; cin>>a;
        s.insert(a);
    }
    for(auto &it:s){
        v.pb(it);
    }
    ll l = 0,r=0,ans = 0;
    while(r<v.size()){
        while(v[r]-v[l]<n && r<v.size()) r++;
        if(r!=v.size()){
            ans = max(ans , r-l);
            l++;
        }
        else{
            ans = max(ans , r-l);
            break;
        }
    }
    cout<<ans<<'\n';

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}