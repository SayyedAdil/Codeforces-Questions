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
    int n; cin >> n;
    // vt v1, v2, v3;
    ll l=INT_MIN,u = INT_MAX;
    vt v1;
    ll a, x;
    rep(i, n){
        cin >> a >> x;
        if(a == 1) l=max(l,x);
        else if(a == 2) u=min(u,x);
        else if(a == 3) v1.pb(x);
    }

    // srt(v1); srt(v2);

    // ll l = !v1.empty() ? v1[v1.size() - 1] : 0;
    // ll u = !v2.empty() ? v2[0] : 0;

    // vt v;
    ll c=0;
    // if (!v1.empty() && !v2.empty() && l<=u) {
    forf(i,0,v1.size()){
        if(v1[i]>=l && v1[i]<=u) c++;
    }        
    
    cout<<max(u - l + 1 - c, 0ll)<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}