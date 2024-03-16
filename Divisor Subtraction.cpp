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

ll isprime(ll a){
    for(ll j=2;j*j<=a;j++){
        if(a%j==0) return j;
    }
    return a;
}

void solve(){
    ll n; cin>>n;
    // ll sub = 0 , temp = 0;
    ll c = 0;
    // while(n>=0){
    //     ll i=1;
    //     for(i = 2; (i*i)<=n;i++){
    //         if(isprime(i)){
    //             if(n%i==0){
    //                 temp = i;
    //                 break;
    //             }
    //         }
    //     }
    //     n = n-temp;
    //     sub++;
    // }
    if(n%2==0) cout<<n/2<<'\n';
    else {
        n-=isprime(n);
        c = 1+(n/2);
        cout<<c<<'\n';

    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}