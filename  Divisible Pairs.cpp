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
    ll n,x,y; cin>>n>>x>>y;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<pair<ll,ll>,ll> m;
    ll c = 0;
    for(ll i=0;i<n;i++){
        ll xx = v[i]%x;
        if(xx==0) xx=x;
        ll yy = v[i]%y;
        auto it = m.find(make_pair(x-xx,yy));
        if(it!=m.end()){
            ll k = it->second;
            c+=k;
        }
        if(xx==x) xx=0;
        m[make_pair(xx,yy)]++;
    }
    cout<<c<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}