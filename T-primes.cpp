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

bool square(ll n){
    if(n>=0){
        ll sq = sqrt(n);
        return sq*sq == n;
    }
    return false;
}

bool isprime(ll n){
    for(ll i= 2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    ll a; cin>>a;
    if(a==1) {
        cout<<"NO"<<'\n';
        return;
    }
    if(square(a)){
        if(isprime(sqrt(a))){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; cin>>t;
    while(t--)
    solve();
    return 0;
}