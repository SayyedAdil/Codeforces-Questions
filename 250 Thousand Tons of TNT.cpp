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

void vin(vector<ll> &a, int n)
{
    for (int i = 0; i < n; i++)
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
    int n; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    ll ans = -1;
    ll sum=0,maxx=INT_MIN,minn=INT_MAX;
    forf(i,1,n+1){
        if(n%i==0){
            ll maxx = INT_MIN;
            ll minn = INT_MAX;
            for(int j=0; j<=n; j+=i){
                ll sum = 0;
                for(int k=j;k<(i+j);++k){
                    sum+=v[k];
                }
            }
            maxx = max(maxx,sum);
            minn = min(minn,sum);

        }
        ans = max(ans,maxx-minn);
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}