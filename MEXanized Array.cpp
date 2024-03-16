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
        int n,k,x; cin>>n>>k>>x;
        if(min(n,x+1)<k){
            cout<<-1<<'\n';
        } else{
            int sum=0;
            if(k==x){
                rep(i,k-1) sum+=i;
                sum = sum+((n-(k-1))*(k-1));
            } else{
                rep(i,k) sum+=i;
                sum+=(n-k)*x;
            }
            cout<<sum<<'\n';
        }
    }
}