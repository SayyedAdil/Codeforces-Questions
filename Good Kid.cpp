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
        int n; cin>>n;
        vector<int> v(n);
        rep(i,n){
            cin>>v[i];
        }
        int p=1,max=0;
        rep(i,n){
            p=1;
            rep(j,n){
                if(i==j){
                    p=p*(v[j]+1);
                } else p=p*v[j];
            }
            if(p>max) max=p;
        }
        cout<<max<<'\n';
    }
}