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

ll calc(ll n){
    ll ct = 0;
    ct+=n/15; n%=15;
    ct+=n/6; n%=6;
    ct+=n/3; n%=3;
    ct+=n;
    return ct;
}
void solve(){
    ll n; cin>>n;
    ll ans = 0;
    if(n<10) ans = calc(n);
    else if (n < 20) {
        ans = min(calc(n), calc(n-10)+1);
    } else {
        ans = min({calc(n), calc(n-10)+1, calc(n-20)+2});
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

