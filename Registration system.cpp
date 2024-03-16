//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int n; cin>>n;
    map<string , int> m;
    while(n--){
        string s; cin>>s;
        if(m[s]==0){
            cout<<"OK"<<'\n';
            m[s]++;
        } else{
            cout<<s<<m[s]<<'\n';
            m[s]++;
        }
    }
}