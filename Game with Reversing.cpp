//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define be begin()
#define en end()
#define pb push_back
#define all(v) v.begin(),v.end()
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())

int gcd(int a , int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

void solve(){

    ll n;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    ll c1=0,c2=0;
    rep(i,n)
    {
        if(s[i]!=t[i])c1++;
        if(s[i]!=t[n-i-1])c2++;
    }
    //cout<<c1<<" "<<c2;
    ll ans;

        if(c1%2==0)
        {
            ans=(2*c1);
        }
        else
        {
            ans=(2*(c1-1)+1);
        }
        if(c2%2==0)
        {
            ans=min(ans,(2*(c2-1)+1));
        }
        else
        {
            ans=min(ans,2*c2);
        }
        if(c1==0)
        ans=0;
        else if(c2==0)
        ans=2;
    cout<<ans<<'\n';

    return;

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}