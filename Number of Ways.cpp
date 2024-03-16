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
    ll n; cin>>n;
    vector<ll> v;
    ll sum = 0;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        v.push_back(a);
        sum+=a;
    }
    ll c[1000005] = {0};
    ll ans = 0;
    if(sum%3!=0){
        cout<<0<<'\n';
        return;
    } else{
        ll s1 = sum/3;
        ll s2 = 0;
        for(ll i=n-1;i>=0;i--){
            s2+=v[i];
            if(s2==s1){
                c[i] = 1;
            }
        }
        s2 = 0;
        for(ll i=n-2;i>=0;i--){
            c[i]+=c[i+1];
        }
        for(ll i=0;i<n-2;i++){
            s2+=v[i];
            if(s2==s1){
                ans+=c[i+2];
            }
        }
        cout<<ans<<'\n';
    }

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}