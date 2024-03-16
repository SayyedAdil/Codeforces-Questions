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
    ll n, x, y;
    cin >> n >> x >> y;
    ll diff = y - x;
    ll d = 0;
    for (ll i = n - 1; i >= 0; i--){
        if (diff%i==0){
            d = diff / i;
            break;
        }
    }
    ll a1 =y-(n - 1)*(d);
    if (a1 <= 0){
        ll a2 = (-1 * a1 + d - 1) / d;
        a1 += a2 * d;
        if(a1-d>0){
            a1-=d;
        }
        if(a1<=0){
            a1+=d;
        }
        
    }
    for(ll i = 0; i<n; i++)
    {
        cout<<a1<<" ";
        a1 += d;
    }
    cout <<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}