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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<ll> p(n,-1);
    for(ll i=1;i<n;i++){
        p[i] = p[i-1];
        if(v[i]!=v[i-1]){
            p[i]=i-1;
        }
    }
    ll q; cin>>q;
    ll st,end;
    // vector<ll> l(q),r(q);
    // for(ll i=0;i<q;i++) cin>>l[i]>>r[i];
    for(ll i=0;i<q;i++){
        cin>>st>>end;
        st--; end--;
        // ll flag=0;
        // while(st<=end){
        //     if(v[st]!=v[end]){
        //         cout<<st+1<<" "<<end+1<<'\n';
        //         flag=1;
        //         break;
        //     }
        //     end--;
        // }
        // if(flag==0) cout<<"-1 -1"<<'\n';
        if(p[end]<st) cout<<"-1 -1"<<'\n';
        else cout<<p[end]+1<<" "<<end+1<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}