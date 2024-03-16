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
    vt v = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int flag=0;
    forf(i,0,14){
        if(n%v[i]==0){
            flag = 1; break;
        } else continue;
    }
    if(flag==1){
        cout<<"YES"<<'\n';
    } else{
        cout<<"NO"<<'\n';
    }
}


int main(){
    // ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}