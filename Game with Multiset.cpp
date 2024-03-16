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
    ll arr[30];
    forf(i,0,30) arr[i] = 0;
    ll k = 0,maxx = 0;
    while(n--){
        ll x,y; cin>>x>>y;
        if(x==1) arr[y]++;
        else{
            forb(i,30,0){
                ll a = pow(2,i);
                ll b = arr[i];
                ll c = y/a;
                y-=min(b,c)*a;
            }
            if(y==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
        solve();
    
    return 0;
}