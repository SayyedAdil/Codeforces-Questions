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

ll gcd(ll a , ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

ll lcm (ll a , ll b){
    return (a*b / gcd(a,b));  
}

void solve(){
    vector<pair<int,int> > v;
    int x,y;
    rep(i,4){
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    int arr = 0;
    int c1 = v[0].first;
    int c = v[0].second;
    int c2;
    forf(i,1,4){
        if(v[i].first==c1){
            c2 = v[i].second;
        }
    }
    arr = abs(c2-c);
    arr = arr*arr;
    cout<<arr<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}