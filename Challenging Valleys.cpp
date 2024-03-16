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
#define rev(v) reverse(v.begin(), v.end()
          
void solve(){
    int n; cin>>n;
    vt v(n);
    rep(i,n){
        int x; cin>>x;
        if(i==0 || x!=v.back()){
            v.pb(x);
        }
    }
    int l = v.size();
    int c=0;
    rep(i,l){
        if((i==0 || v[i]<v[i-1]) && (i==(l-1) || v[i]<v[i+1])){
            c++;
        }
    }
    if(c==1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}