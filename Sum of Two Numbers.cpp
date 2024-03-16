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
    ll n; cin>>n;
    vt v;
    ll num = n;
    while(num>0){
        int c = num%10;
        v.pb(c);
        num/=10;
    }
    reverse(v.begin() , v.end());
    ll n1=0; ll n2 = 0;
    ll t1,t2 = 0;
    ll flag = 0;
    for(auto it:v){
        if(it%2==0){
            t1 = it/2;
            t2 = it/2;
            n1 = (10*n1)+t1;
            n2 = (10*n2)+t2;
        } else{
            if(flag){
                t1 = (it+1)/2;
                t2 = (it-1)/2;
                flag = 0;
            }else{
                t1 = (it-1)/2;
                t2 = (it+1)/2;
                flag = 1;
            }
            n1 = (10*n1)+t1;
            n2 = (10*n2)+t2;
        }
    }
    cout<<n1<<' '<<n2<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}