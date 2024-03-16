//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<3){
            if(n==1){
                cout<<1;
            } else if(n==2){
                cout<<2<<" "<<1;
            }
        }else{
            int mid = (n+1)/2;
            int arr[n];
            arr[mid-1] = 1;
            arr[0]=2;
            arr[n-1] = 3; int v = 4;
            forf(i,1,n-1){
                if(i!=mid-1){
                    arr[i]=v; v++;
                }else{
                    continue;
                }
            }
            rep(i,n) cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }
}
