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
    // ll n; cin>>n;
    // vt v(n);
    // for(ll i=0;i<n;i++) cin>>v[i];
    // ll c = 0;
    
    // for(ll i=0;i<n;i++){
    //     for(ll j=i+1;(j<n) && ((v[i]*v[j])<(2*n));j++){
    //         if((v[i]*v[j])==(i+j+2)) {
    //             c++; 
    //         } 
            
    //     }
    // }
    // cout<<c<<'\n';


    ll n; cin>>n;
    vector<pair<ll,ll> > v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    srt(v);
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (v[i].first * v[i].first > (n + n - 1))
            break;
        for (ll j = i + 1; j <= n; j++)
            if (v[i].first * v[j].first == v[i].second + v[j].second)
                count++;
    }
    cout << count <<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}