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
    bool flag = true;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin() , v.end());
    for(ll i=1;i<n;i++){
        if(v[i]!=v[i-1]) flag = false;
    }
    if(flag==true){
        cout<<0<<" "<<n*(n-1)/2<<'\n';
        return;
    }
    ll maxx = v[n-1];
    ll minn = v[0];
    ll cmax = 0, cmin = 0;
    for(ll i=0;i<n;i++){
        if(v[i]== maxx) cmax++;
        if(v[i]== minn) cmin++;
    }
    cout<<maxx - minn<<" "<<cmax*cmin<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}