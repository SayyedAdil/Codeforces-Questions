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

ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

ll range_sum(ll l, ll r) {
    if (l > r) {
        return 0;
    }
    return (l + r) * (r - l + 1) / 2;
}

void solve(){
    ll n,x,y; cin>>n>>x>>y;
    ll a,b,l,c;
    // a = n/x;
    // b = n/y;
    // l = (x*y)/gcd(x,y);
    // c = n/l;
    ll sum = 0 , sum1 = 0;
    l = lcm(x,y);
    sum = n/x - n/l;
    sum1 = n/y - n/l;
    // for(ll i=n;i>=(n-(a-c-1));i--) sum+=i;
    // for(ll i=1;i<=(b-c);i++) sum1+=i;
    cout<<range_sum(n - sum + 1, n) - range_sum(1, sum1)<<'\n';
    // cout<<sum-sum1<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}