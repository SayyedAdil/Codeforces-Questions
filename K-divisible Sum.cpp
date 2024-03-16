//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        int q = (n+k-1)/k;
        int f = ((k*q)+n-1)/n;
        cout<<f<<'\n';
    }
    
    return 0;
}