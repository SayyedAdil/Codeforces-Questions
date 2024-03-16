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

ll fac(ll num){
    if(num==0 || num==1) return 1;
    else return num * fac(num-1);
}

void solve(){
    string s1,s2; cin>>s1>>s2;
    ll n = s1.length();
    ll p1=0,p2=0,m1=0,m2=0,q=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='+') p1++;
        else m1++;

        if(s2[i]=='+') p2++;
        else if (s2[i]=='-') m2++;
        else q++;
    }
    double ans = 0;
    if(p1==p2 && m1==m2){
        // cout<<"1"<<'\n';
        // return;
        ans = 1;
    }
    else if(p2>p1 || m2>m1){
        // cout<<"0"<<'\n';
        // return;
        ans = 0;
    } 
    else if((p1==0&&p2==0&&q>=0)||(m1==0&&m2==0&&q>=0)) ans = 1/pow(2,q);
    else{
        ll k = fac(q)/(fac(p1-p2)*fac(m1-m2));
        ans = k/pow(2,q);
    }

    cout<<fixed<<setprecision(14)<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--)
    solve();
    return 0;
}