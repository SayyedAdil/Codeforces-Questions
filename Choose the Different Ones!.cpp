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
    ll n,m,k; cin>>n>>m>>k;
    vector<ll> a(n);
    vector<ll> b(m);
    set<ll> sa; set<ll> sb;
    set<ll> s;
    ll ans = -1;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        sa.insert(a[i]);
    }
    for(ll i=0;i<m;i++) {
        cin>>b[i];
        sb.insert(b[i]);
    }
    ll r=0;
    for(auto it:sa){
        if(it<=k){
            r++;
            s.insert(it);
        }
    }
    ll d=0;
    for(auto it:sb){
        if(it<=k){
            d++;
            s.insert(it);
        }
    }
    ll ct = 0;
    if(r>=k/2 && d>=k/2){
        for(auto it:s){
            ct++;
        }
        if(ct==k) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}