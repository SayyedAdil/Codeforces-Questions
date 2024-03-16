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
    ll ct=0;
    vector<ll> b(n);
    vector<ll> c(m);
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<m;i++) cin>>c[i];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) if(b[i]+c[j]<=k) ct++;
    }
    cout<<ct<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}