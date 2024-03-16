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
        int arr[n];
        rep(i,n){
            cin>>arr[i];
        }
        int flag=0;
        int diff1 = INT_MAX;
        forf(i,0,n-1){
            if(arr[i]>arr[i+1]){
                flag = 1;
            }
            int diff2=arr[i+1]-arr[i];
            if(diff2<diff1) diff1 = diff2;
        }
        if(flag==0){
            cout<<(diff1/2)+1<<'\n';
        } else{
            cout<<0<<'\n';
        }
    }

    return 0;
}