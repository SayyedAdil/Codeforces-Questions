//------ADIL SAYYED--------
#include <iostream>
#include <vector>
#include <numeric>
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

// ll lcmm(ll n1,ll n2){
//     return (n1*n2) / gcd(n1 , n2);
// }
void solve(){
    ll n; cin>>n;
    ll a=0,b=0,l=0,lmin = INT_MAX;
    for(ll i=2;i<=1e5;i++){
        // l = lcmm(i,n-i);
        // if(l<=lmin){
        //     a = i;
        //     b = n-i;
        //     lmin = l;
        // }
        if(n%i==0) {
            a = i;
            break;
        }
    }
    if(a==0) a = n;    
    cout<<n/a<<" "<<n-(n/a)<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}