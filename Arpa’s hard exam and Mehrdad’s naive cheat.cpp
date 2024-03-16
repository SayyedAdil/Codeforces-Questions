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

void solve(){
    int n; cin>>n;
    if(n==0){
        cout<<1<<'\n';
        return;
    }
    int r = 0;
    if(n%4==1) r = 8;
    else if(n%4==2) r = 4;
    else if(n%4==3) r=2;
    else if(n%4==0) r = 6;
    cout<<r<<'\n'; 
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}