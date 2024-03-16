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
        int s =0;
        forf(i,0,n){
            cin>>arr[i];
            s+=arr[i];
        }
        int d=0;
        int flag =0;
        forf(i,0,n){
            d = (s-arr[i])/(n-1);
            if(arr[i]==d){
                cout<<"YES"<<'\n';
                flag = 1; 
                break;
            }
        }
        
        if(flag==0) cout<<"NO"<<'\n';


    }
}



