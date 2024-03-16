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
#define pq priority_queue<long long>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define pn cout<<"NO"<<'\n'
#define py cout<<"YES"<<'\n'

void solve(){
    ll n; cin>>n;
    ll arr[n];
    rep(i,n){
        cin>>arr[i]; arr[i]+=i+1;
    }
    pq p;
    rep(i,n) p.push(arr[i]);
    ll l=p.top();
    cout<<l<<" ";
    p.pop();
    while(!p.empty()){
        ll a=p.top();
        if(a>=l) {
            cout<<l-1<<" ";l=l-1;
        }
        else{
            cout<<a<<" ";l=a;
        }
        p.pop();
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}

