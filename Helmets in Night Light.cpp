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
        ll n,pc;
        cin>>n>>pc;
        vector<pair<ll , ll>>v(n);
        rep(i,n) cin>>v[i].second;
        rep(i,n) cin>>v[i].first;
        sort(v.begin() , v.end());
        ll cost = pc;
        ll p_left = n-1;
        if(p_left>0){
            rep(i,n){
                if(v[i].first<pc){
                    cost+=v[i].first * min(v[i].second , p_left);
                    p_left-=v[i].second;
                }
                else{
                    cost +=p_left * pc;
                    p_left = 0;  
                }
                
                if(p_left<=0) break;
            }
        }
        cout<<cost<<'\n';

    }
}