//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    ll a,b,c; cin>>a>>b>>c;
    int tot = (a*c + b -1)/b;
    forf(i , 1 , tot+1){
        if((tot*b)>=(tot-i)*a) { cout<<i; break;}
    }
    return 0;

}