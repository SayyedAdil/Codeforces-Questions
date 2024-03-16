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
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    map<ll,ll> m;
    for(auto  x : v){
        ll temp = x;
        for(ll i=2;i<=sqrt(x);i++){
            while(temp%i==0){
                temp/=i;
                m[i]++;
            }
        }
        if(temp!=1) m[temp]++;
    }
    ll flag=0;
    for(auto &x:m){
        if(x.second%n!=0){
            flag=1; break;
        }
    }
    if(flag) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}