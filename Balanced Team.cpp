//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define be begin()
#define en end()
#define pb push_back
#define all(v) v.begin(),v.end()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())

ll gcd(ll a , ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

ll lcm (ll a , ll b){
    return (a*b / gcd(a,b));  
}

void solve(){
    ll n; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    srt(v);
    ll c =0,l = 0;
    rep(i,n){
        while(c<n && (v[c] - v[i])<=5){
            ++c;
            l = max(l , c-i);
        }
    }
    cout<<l<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}