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
    int n; cin>>n;
    string s; cin>>s;
    string f; cin>>f;
    int d = 0;
    rep(i,n){
        if(s[i]!=f[i]) d++;
    }
    
    int oz=0,zo=0;
    rep(i,n){
        if(s[i]=='0' && f[i]=='1') oz++;
        if(s[i]=='1' && f[i]=='0') zo++;
    }
    if(oz==n || zo==n){
        cout<<n<<'\n';
        return;
    }
    cout<<d - min(oz,zo)<<'\n';

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}