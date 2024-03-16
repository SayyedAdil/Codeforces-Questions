//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a; cin>>a; v.push_back(a);
        }
        if(n==2){
            cout<<"yes"<<'\n';
        } else{
            int c=0;
            for(int i=0;i<n-2;i++){
                if((v[i]+v[i+1])==(v[i+1]+v[i+2])){
                    c++;}
                else {
                    swap(v[i+1],v[i+2]);
                }
            }
            if(c==n-1){
                cout<<"yes"<<'\n';
            } else{
                cout<<"no"<<'\n';
            }  
        }
    }
}
