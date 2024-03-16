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
        int arr[n];
        rep(i,n) cin>>arr[i];
        if(is_sorted(arr,arr+n) || k>1){
            cout<<"YES"<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }
    }
}