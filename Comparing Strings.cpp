//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){

    int c=0;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    forf(i,0,s1.size())
    {
        if(s1[i]!=s2[i]) c++;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1==s2 && c==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

