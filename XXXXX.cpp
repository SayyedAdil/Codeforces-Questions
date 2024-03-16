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
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    ll c=0,s=0 ,l=-1 ,r=0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        v.push_back(a);
        if(a%x){
            if(l==-1) l=i;
            r = i;
        }
        s+=a;
        // if(a%x==0){
        //     c++;
        // }
    }
    // if(c==n){
    //     cout<<"-1"<<'\n';
    //     return;
    // }
    if(s%x!=0){
        cout<<n<<'\n';
        return;
    }else if(l==-1) cout<<"-1"<<'\n';
    else cout<<n - min(l+1 , n-r)<<'\n'; 
    // sort(v.begin() , v.end());
    // ll st = 0 , e=0;
    // for(int i=0;i<n;i++){
    //     if(v[i]%x==0 && st==0) st = i;
    //     if(v[n-i-1]%x==0 && e==0) e = i;
    // }
    // if(st<=(n-e)) cout<<n-e<<'\n';
    // else cout<<st<<'\n';
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}