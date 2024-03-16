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

int gcd(int a , int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

void solve(){
    int n; cin>>n;
    vt v;
    ll e; cin>>e; v.pb(e);
    ll j=0;
    forf(i,0,n-1){
        cin>>e; 
        if(e!=v[j]){
            v.pb(e); j++;
        }
    }
    ll c = v.size();
    ll ans = c;
    forf(i,0,c-2){
        if(((v[i]<v[i+1])&&(v[i+1]<v[i+2])) || ((v[i]>v[i+1])&&(v[i+1]>v[i+2]))){
            ans--;
        }
    }
    cout<<ans<<'\n';
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}