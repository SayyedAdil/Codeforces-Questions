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
    // vector<pair<ll,ll> > v;
    ll a; 
    // for(ll i=0;i<n;i++){
    //     cin>>a;
    //     v.push_back(make_pair(a,i+1));
    // }
    // vector<ll> diff;
    // for(ll i=0;i<n;i++) diff.push_back(v[i].first-v[i].second);
    // sort(diff.begin() , diff.end());
    // ll maxf = 0,freq = 1;
    // for(ll i=0;i<n-1;i++){
    //     if(diff[i]==diff[i+1]){
    //         freq++;
    //         if(freq > maxf){
    //             maxf=freq;
    //         }
    //     }else freq=1;
    // }
    // if(n<2) cout<<0<<'\n';
    // else cout<<(maxf*(maxf-1))/2<<'\n';
    map<ll,ll>m;
    ll c = 0;
    for(ll i=0;i<n;i++){
        cin>>a;
        a-=i;
        c+=m[a];
        m[a]++;
    }
    cout<<c<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}