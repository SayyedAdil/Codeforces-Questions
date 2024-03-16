//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t>0){
        string s; cin>>s;
        if(s.length()<=10){
            cout<<s<<'\n';
        } else{
            int c=0;
            c=s.size()-2;
            cout<<s[0]<<c<<s[s.size()-1]<<'\n';
        }
        t--;

    }
    return 0;
}