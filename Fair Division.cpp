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
    vector<ll> v(n);
    ll s = 0;
    for(ll i=0;i<n;i++) {cin>>v[i]; s+=v[i];}
    if(s%2){
        cout<<"NO"<<'\n';
        return;
    }else{
        ll o= 0;
        for(ll i=0;i<n;i++) if(v[i]==1) o++;
        if(o>=2) cout<<"YES"<<'\n';
        else if(o==0) {
            if(n%2==0) cout<<"YES"<<'\n'; 
            else cout<<"NO"<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}