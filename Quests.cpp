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
#define rev(v) reverse(v.begin(), v.end())

void vin(vector<ll> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}


ll gcd(ll a , ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

ll lcm (ll a , ll b){
    return (a*b / gcd(a,b));  
}

void solve(){
    ll n,k; cin>>n>>k;
    vt a,b;
    vin(a,n);
    vin(b,n);
    vt v(n);
    v[0] = a[0];
    forf(i,1,n){
        v[i] = v[i-1]+a[i];
    }
    vt v1(n);
    v1[0] = b[0];
    forf(i,1,n){
        v1[i] = max(v1[i-1] , b[i]);
    }
    ll c=0;
    forf(i,0,min(n,k)){
        c = max(c , v[i]+(k-i-1)*v1[i]);
    }
    cout<<c<<'\n';
 
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}