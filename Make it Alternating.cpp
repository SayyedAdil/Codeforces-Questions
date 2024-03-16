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


void fac(ll &a, ll b) {
    a = (a * 1LL * b) % 998244353;
}

void solve(){
    string s; cin>>s;
    ll r1= 1;
    ll l1 = s.size();
    ll l2 = s.size();
    for(ll i=0;i<l2;){
        ll r2 = i+1;
        while(r2<l2 && s[i]==s[r2]) r2++;
        fac(r1 , r2-i);
        --l1;i=r2;
    }
    for(ll j=1;j<=l1;j++){
        fac(r1,j);
    }
    cout<<l1<<" "<<r1<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}