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

long double dist(ll x1 , ll y1 , ll x2 , ll y2){
    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}

void solve(){
    ll px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    long double oa = dist(0,0,ax,ay);
    long double ob = dist(0,0,bx,by);
    long double ap = dist(px,py,ax,ay);
    long double bp = dist(px,py,bx,by);
    long double ab = dist(bx,by,ax,ay);
    long double ans = max(min(oa,ob) , min(ap,bp));

    if((oa<=ob && ap<=bp) || (oa>=ob && ap>=bp)){}
    else{
        ans = max(ans , ab/2.0);
    }
    cout<<fixed<<setprecision(10)<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}