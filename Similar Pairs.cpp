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

void vin(vector<ll> &a, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

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
    ll n; cin>>n;
    vt v;
    vin(v,n);
    ll e=0,o=0;
    rep(i,n){
        if(v[i]%2) o++;
        else e++;
    }
    if(e%2 != o%2){
        cout<<"NO"<<'\n';
        return;
    }
    if(e%2==0){
        cout<<"YES\n";
    } else{
        forf(i,0,n){
            forf(j,i+1,n){
                if(v[i]%2!=v[j]%2 && abs(v[i]-v[j])==1){
                    cout<<"YES\n";
                    return;
                }
            }
        }
        cout<<"NO\n";
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