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

const ll P = 5;


ll powmod(ll x, ll n, ll P) {
    x %= P;
    ll res = 1 % P;
    while (n) {
        if ((n & 1)) {
            res = (res * x) % P;
            n--;
        }
        else {
            x = (x * x) % P;
            n >>= 1;
        }
    }
    return res;
}
 
ll myPow(ll x, string s, ll P) {
    x %= P;
    ll res = 1 % P;
    ll now = x;
    for (ll i = (ll)s.size() - 1; i >= 0; i--) {
        res = (res * powmod(now, s[i] - '0', P)) % P;
        now = powmod(now, 10, P);
    }
    return res;
}

void solve(){
    ll n; 
    //cin>>n;
    // if(n%4!=0){
    //     cout<<"0"<<'\n';
    // } else{
    //     cout<<"4"<<'\n';
    // }
    // cout<<(n%4?"0":"4")<<'\n';
    string s;
    cin >> s;
 
    int res = myPow(1, s, P) + myPow(2, s, P) + myPow(3, s, P) + myPow(4, s, P);
    res %= P;
 
    cout << res << '\n';
}



int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;



    
}