//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t>0){
        int n; cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                ans = max(ans,arr[i]);
            }
        }
        cout<<ans<<'\n';

        t--;
    }
}