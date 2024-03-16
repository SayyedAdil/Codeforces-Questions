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
    ll n ,a=0;cin>>n;
    // vector<ll> v(n);
    vector<ll> v1(n+1) , v2(n+1);
    for(ll i=0;i<n;i++) {
        cin>>a;
        if(a<=n) v1[a]++;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            v2[j] += v1[i];
        }
    }
    sort(v2.begin() , v2.end());
    cout<<v2[n]<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}