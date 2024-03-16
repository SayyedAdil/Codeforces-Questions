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
#define vt vector<double>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())

int maxi(int a , int b){
    if(a>b) return a;
    return b;
}
// int gcd(int a , int b){
//     if(b==0){
//         return a;
//     }else{
//         return gcd(b,a%b);
//     }
// }

void solve(){
    ll n,l; cin>>n>>l;
    vt v(n);
    rep(i,n) cin>>v[i];
    srt(v);
    int maxd = 2* max(v[0] , l-v[n-1]);
    forf(i,0,n-1){
        maxd = maxi(maxd , v[i+1]-v[i]);
    }
    cout<<maxd/2.0<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    std::cout.precision(10);
    ll t=1; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}