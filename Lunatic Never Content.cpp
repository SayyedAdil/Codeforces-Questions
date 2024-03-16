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
    ll n; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    int v1[n/2];

    for(ll i=0;i<n/2;i++){
        v1[i]=abs(v[i]-v[n-i-1]);
    }
    int x = gcd(v1[0],v1[n/2-1]);
    sort(v1,v1+n/2);
    for(ll i=0;i<n/2;i++){
        x = gcd(x,v1[i]);
    }
    cout<<x<<'\n';

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}