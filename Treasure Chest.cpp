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
        int x,y,k;
        cin>>x>>y>>k;
        if(x>y){
            cout<<x<<'\n';
        } else{
            if((y-x)<=k){
                cout<<y<<'\n';
            }else{
                cout<<y+y-(x+k)<<'\n';
            }
        }
    }    
}