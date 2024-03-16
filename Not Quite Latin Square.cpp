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
    set<char> sc;
    sc.insert('A');
    sc.insert('B');
    sc.insert('C');
    vector<string> v;
    rep(i,3){
        string s; cin>>s;
        v.pb(s);
    }
    rep(i,3){
        string s=v[i];
        ll flag = 0;
        rep(j,s.length()){
            if(s[j]=='?') flag = 1;
        }    
        if(flag==1){
            rep(j,3){
                if(s[j]!='?'){
                    sc.erase(s[j]);
                }
            }    
            set<char>::iterator it = sc.begin();
            cout<<*it<<'\n';
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}