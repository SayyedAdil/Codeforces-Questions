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
    // ll c[n];
    string c; cin>>c;
    string a="";
    string b="";
    // if(c[0]==0){
    //     a[0] = 2; b[0]=1;
    // } else if(c[0]==1){
    //     a[0]=2; b[0]=2;
    // }else{
    //     a[0]=1;b[0]=1;
    // }
    // for(ll i=1;i<n;i++){
    //     if(c[i]==0){
    //         a[i]=0;b[i]=0;
    //     } else if(c[i]==1){
    //         a[i]=1;b[i]=0;
    //     }else{
    //         a[i]=1;b[i]=1;
    //     }
    // }
    ll ct = 0;
    for(ll i=0;i<n;i++){
        if(c[i]=='2'){
            if(ct==1){
                a+='0'; b+='2';
            } else{
                a+='1'; b+='1';
            }
        }
        if(c[i]=='0'){
            a+='0';b+='0';
        }
        if(c[i]=='1'){
            if(ct==1){
                a+='0'; b+='1';
            } else{
                a+='1'; b+='0';ct=1;
            }
        }
    }
    cout<<a<<'\n';
    cout<<b<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}