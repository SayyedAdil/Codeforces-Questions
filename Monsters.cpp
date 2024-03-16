//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())

bool compare(pair<ll,ll>&p1 , pair<ll,ll>&p2){
    if(p1.first!=p2.first) return p1.first>p2.first;
    return p1.second<=p2.second;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vp v(n);
        forf(i,0,n){
            int a; cin>>a;
            if(a%k==0){
                v[i].first = k;
            }else{
                v[i].first = a%k;
            }
            v[i].second = i+1;
        }
        sort(v.begin() , v.end() , compare);
        forf(i,0,n){
            cout<<v[i].second<<" ";
        }
        cout<<'\n';
    }
}