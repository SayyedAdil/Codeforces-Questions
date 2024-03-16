//------ADIL SAYYED--------
#include <bits/stdc++.h>
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
    } else {
        return gcd(b,a%b);
    }
}

void solve(){
    ll n; cin>>n;;
    string s; cin>>s;
    string s1 = "";
    forb(i, n-1, 0){
        if(s[i]=='a' || s[i]=='e'){
            s1=s.substr(i-1,2)+"."+s1; i--;
        } else {
            s1=s.substr(i-2,3)+"."+s1; i--;
            i--;
        }
    }
    cout<<s1.substr(0, s1.length()-1).c_str()<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; scanf("%lld", &t);
    while(t--){
        solve();
    }
    return 0;
}

