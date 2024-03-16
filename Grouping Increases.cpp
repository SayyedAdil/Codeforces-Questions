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

int gcd(int a , int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

void solve(){
    int n; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    ll c1,c2 = INT_MAX;
    ll p = 0;
    rep(i,n){
        if(c1>c2){
            swap(c1,c2);
        }
        if(v[i]<=c1){
            c1 = v[i];
        }else if(v[i]<=c2){
            c2 = v[i];
        }else{
            c1 = v[i];
            p++;
        }
    }
    cout<<p<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}