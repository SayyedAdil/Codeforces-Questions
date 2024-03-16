//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];        
        }
        int sum=0,c=0;
        if(n==1){
            cout<<1<<'\n';
        } else{
            sum = v[0];
            for(int i=0;i<n;i++){
                sum = sum & v[i];
                if(sum==0){
                    c++; 
                    if(i<n-1){
                        sum = v[i+1];
                    } else sum=0;
                }
            }
            if(c==0) c=1;
            cout<<c<<'\n';
        }
    }
}