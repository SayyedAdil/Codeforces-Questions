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
    string s1,s2; cin>>s1;
    cin>>s2;
    string s;
    ll last = n-1 , f=0;
    s+=s1[0];
    for(ll i=0;i<n-1;i++){
        if(s1[i+1]=='1' && s2[i]=='0'){
            if(f==0) last = i;
            f=1;
        }
        if(f==0) s+=s1[i+1];
        else s+=s2[i];
    }
    s+=s2[n-1];
    ll ct=1;
    for(ll i=last-1;i>=0;i--){
        if(s2[i]!=s1[i+1]) break;
        ct++;
    }
    cout<<s<<'\n';
    cout<<ct;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}