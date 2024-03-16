//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(v) v.begin(),v.end()
#define vin(v,n) for(ll i=0;i<n;i++) cin>>v[i]
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define pn cout<<"NO"<<'\n'
#define py cout<<"YES"<<'\n'

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    ll zero,one;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(n%2==1 ){
        cout<<"-1"<<'\n';
        return;
    }
    string s1="01";
    vector<ll> v;
    ll i=0,j=n-1;
    while(i<j && v.size()<300){
        if(s[i]==s[j] && s[i]=='0'){
            v.push_back(j+1);
            s=s.substr(0,j+1)+s1+s.substr(j);
            i++; j++;
        }else if(s[i]==s[j] && s[i]=='1'){
            v.push_back(i);
            s=s.substr(0,i)+s1+s.substr(i);
            i++; j++;
        }else{
            i++;j--;
        }
    }
    if(v.size()>=300){
        cout<<"-1"<<'\n';
    }else{
        cout<<v.size()<<'\n';
        for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<'\n';
    }


}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}