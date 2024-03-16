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
#define MAXN 100005

void solve(){
    ll n; cin>>n;
    // vector<ll> v(n);
    // for(ll i=1;i<=n;i++) cin>>v[i];
    // vector<ll> c(n,0);
    ll v[MAXN], c[MAXN];
    for(ll i=1;i<=n;i++) cin>>v[i]; 
    memset(c, 0, sizeof(c));
    for(ll i=1;i<=n;i++){
        if(i==1) c[i]=2;
        else if(i==n) c[i]=n-1;
        else{
            if(v[i]-v[i-1]>v[i+1]-v[i]){
                c[i]=i+1;
            }else{
                c[i]=i-1;
            }
        } 
    }
    for(ll i=0;i<n;i++) cout<<c[i]<<" ";
    cout<<'\n';
    ll m; cin>>m;
    for(ll i=0;i<m;i++){
        ll p=0;
        ll s,e; cin>>s>>e;
        if(s==e) {
            cout<<0<<'\n';
            // continue;
        }
        if(s<e){
            if(e-s==1) {
                cout<<1<<'\n';
            }
            else{
                p = 1;
                for(ll j=s+1;j<e;j++){
                    if(v[j+1]-v[j]>v[j]-v[j-1]){
                        p+=v[j+1]-v[j];
                    }else{
                        p+=1;
                    }
                }
            }
            cout<<p<<'\n';
        }
        if(s>e){
            if(s-e==1){
                if(e==c[s]) {
                    cout<<1<<'\n';
                    // continue;
                }else{
                    cout<<v[s]-v[e]<<'\n';
                }
            }else{
                p=0;
                for(ll j=s;j>e;j--){
                    if(j-1==c[j]){
                        p+=1;
                    }else{
                        p+=v[j]-v[j-1];
                    }
                }
                cout<<p<<'\n';
                // continue;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}