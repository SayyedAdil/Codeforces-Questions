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

ll gcd(ll a,ll b){
    if(a==0) return b;
    if(b==0) return a;
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
}

void solve(){
    ll n; cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll gcdd = 0;
    for(ll i=1;i<n;i++){
        gcdd = gcd(gcdd , v[i]-v[i-1]);
    }
    sort(v.begin(),v.end());
    ll  l = v[-1];
    ll k = n-1;
    while(k>0 and v[k]==l){
        while(k>=0 && v[k]>l) k--;
        l-=gcdd;
    }
    cout<<(v[-1]*(n+1) - (sum+l))/gcdd<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}