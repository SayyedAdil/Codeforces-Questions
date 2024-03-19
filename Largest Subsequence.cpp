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
    string s; cin>>s;
    string s1(s.begin(),s.end());
    string s2 = "";
    sort(s1.begin(),s1.end());
    if(s.compare(s1)==0){
        cout<<0<<'\n';
        return;
    }
    ll ct = 0;
    char c = s[n-1];
    vector<ll> v;
    for(ll i=n-1;i>=0;i--){
        if(s[i]>=c){
            v.push_back(i);
            s2.push_back(s[i]);
            if(c!=s[i]){
                c=s[i];
                ct=1;
            }else ct++;
        }
    }
    reverse(v.begin(),v.end());
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}