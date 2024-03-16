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
#define rev(v) reverse(v.begin(), v.end()
          
void solve(){
    int n; cin>>n;
    vt v(n);
    string ans = "";
    int c = 0;
    int last = 0;
    rep(i,n){
        cin>>v[i];
        if(c==0){
            if(i==0){
                ans.pb('1');
                last = v[i];
            } else{
                if(v[i]>=last){
                    ans.pb('1');
                    last = v[i];
                }else{
                    if(v[i]>v[0]){
                        ans.pb('0');
                    } else{
                        ans.pb('1');
                        last = v[i];
                        c=1;
                    }
                }
            }
        }
        else{
            if(v[i]<=v[0] && v[i]>=last){
                ans.pb('1');
                last = v[i];
            } else{
                ans.pb('0');
            }
        }
        
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