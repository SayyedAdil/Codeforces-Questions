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
        string s="abc";
        string s1; cin>>s1;
        string flag = "NO";
        if((s[0]==s1[0]) || (s[1]==s1[1]) ||
        (s[2]==s1[2])) flag = "YES";
        cout<<flag<<'\n';
    }
}