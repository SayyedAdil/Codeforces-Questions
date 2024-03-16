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
    string s; cin>>s;
    ll ct=0;
    for(ll i=0;i<n-2;i++){
        if(s[i]=='m'){
            if(s[i+1]=='a' && s[i+2]=='p'){
                if(s[i+3]=='i' && s[i+4]=='e'){
                    ct++;
                    i+=4;
                }else{
                    ct++;
                    i+=2;
                }
            }
        }else if(s[i]=='p'){
            if(s[i+1]=='i' && s[i+2]=='e'){
                ct++; i+=2;
            }
        }
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