//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int n; cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    int min = INT_MAX;
    rep(i,n){
        if(abs(v[i])<=min) min=abs(v[i]);
    }
    cout<<min<<'\n';
}