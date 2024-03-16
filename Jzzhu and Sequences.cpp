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
    ll x,y,n; cin>>x>>y>>n;
    ll f[6]={0};
    f[0] = x; f[1] = y;
    if(f[0]<0) f[0]+=1e9+7;
    if (f[1]<0) f[1]+=1e9+7;
    for(ll i=2;i<6;i++){
        f[i] = f[i-1]-f[i-2];
        if(f[i]<0) f[i]+=(1e9)+7;
    }
    cout<<f[(n-1)%6]<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}


