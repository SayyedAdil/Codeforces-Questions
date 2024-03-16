//------ADIL SAYYED--------
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin>>t;
    while(t>0){
        ll n; cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            ll a; cin>>a; arr.push_back(a);
            //cin>>arr[i];
        }
        sort(arr.begin() , arr.end());
        if(arr[n-1]==arr[0]){
            cout<<n*(n-1)<<'\n';
        } else{
            ll cl=0,ch=0;
            for(ll i=0;i<n;i++){
                if(arr[i]==arr[0]) cl++;
                else if(arr[i]==arr[n-1]) ch++;
            }
            ll ans = (2*cl*ch);
            cout<<ans<<'\n';
        }

        t--;
    }
    return 0;
}