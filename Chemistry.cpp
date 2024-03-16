//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        map<char,int> m;
        forf(i,0,n){
            m[s[i]]++;
        }
        int c=0;
        for (auto i : m){
            if(i.second%2!=0) c++;
        }
        if(c>(k+1)) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}
    
