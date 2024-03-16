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
        int n,k;
        cin>>n>>k;
        k-=1;
        if(n%2==1){
            k+=k/(n/2);
        }
        cout<<1+(k%n)<<'\n';
    }
    return 0;
} 