//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int s=0,c=0;
    int n; cin>>n;
    int arr[n];
    rep(i,n) cin>>arr[i];
    rep(i,n){
        if(arr[i]==i) c++;
        else if(arr[arr[i]]==i) s++;
    }
    if(c==n) cout<<c<<'\n';
    else if(s>0) cout<<c+2<<'\n';
    else cout<<c+1<<'\n';
}