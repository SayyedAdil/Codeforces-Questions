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

void solve(){
    int n; cin>>n;
    vt v(n);
    rep(i,n) cin>>v[i];
    ll a=0,b=0,c=0,d=0;
    rep(i,n){
        if(v[i]==1) a++;
        else if(v[i]==2) b++;
        else if(v[i]==3) c++;
        else if(v[i]==4) d++;
    }
    ll taxi = 0;
    taxi+=d;

    if(c>=a){
        taxi+=c;
        a=0;
    } else{
        taxi+=c;
        a=a-c;
    }

    if(b%2==0){
        taxi+=b/2;
        if(a%4==0){
            taxi+=a/4;
        }else{
            taxi+=a/4;
            taxi+=1;
        }
    }else{
        taxi+=b/2;
        b=1;
        if(a<=2){
            taxi+=1;
        }else{
            taxi+=1;
            a=a-2;
            b=0;
            if(a%4==0){
                taxi+=a/4;
            } else{
                taxi+=a/4;taxi+=1;
            }
        }
    }

    // if(c>=a){
    //     taxi+=c;
    //     a=0;
    // } else{
    //     taxi+=c;
    //     a=a-c;
    // }
    cout<<taxi<<'\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}