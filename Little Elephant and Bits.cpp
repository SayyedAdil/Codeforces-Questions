//------ADIL SAYYED--------
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s; cin>>s;
    //string s = "ADIL";
    int l = s.size();
    int c=0;
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            s.erase(i,1);
            break;
        } else{
            c++;
        }
    }
    if(c==l){
        s.erase(l=1,1);
    }
    cout<<s<<'\n';
    

}   