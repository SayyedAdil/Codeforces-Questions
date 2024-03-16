//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int t; cin>>t;
    while(t>0){
        string s; cin>>s;
        int l = s.size();
        int c=0;
        for(int i=0;i<l;i++){
            if(s[i]=='+'){
                c=i; break;
            }
        }
        string str1 = s.substr(0,c);
        string str2 = s.substr(c+1,l-c-1);
        int n1 = stoi(str1);
        int n2 = stoi(str2);
        cout<<(n1+n2)<<'\n';
        t--;
    }
}