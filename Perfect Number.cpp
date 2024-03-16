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

void solve(){
    int k; cin>>k;
    int sum = 0,num=1;
    while(k>0){
        int n=num;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum==10) k--;
        num++;
        sum=0;
    }
    cout<<num-1<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}