//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define be begin()
#define en end()
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


void solve(){
    ll n; cin>>n;
    vector<string> s(n); 
    rep(i,n) cin>>s[i];
    ll ans = 0;
    forf(i, 0, n/2){
        forf(j, 0, n/2){
            vector<char> v;
            v.push_back(s[i][j]);
            v.push_back(s[n - 1 - j][i]);
            v.push_back(s[n - 1 - i][n - 1 - j]);
            v.push_back(s[j][n - 1 - i]);

            char c = *max_element(v.begin(), v.end());
            forf(k, 0, v.size()) ans += c - v[k];
        }
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


