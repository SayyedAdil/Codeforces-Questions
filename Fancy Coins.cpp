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
    ll m,k,a1,ak; cin>>m>>k>>a1>>ak;
    if((m<=a1) || (m%k<=a1) & (m/k<=ak)){
        cout<<0<<'\n';
        return;
    }
    // ll kc = m/k;
    // if(kc<=ak){
    //     m=m-(k*kc);
    // } else{
    //     m=m-(k*ak);
    // }
    // if(m<=a1){
    //     cout<<0<<'\n';
    //     return;
    // } else{
    //     m=m-a1;
    // }
    ll m1=m;
    if(m>a1+k*ak){
        m-=(a1+k*ak);
        if(m%k==0){
            cout<<m/k<<'\n';
            return;
        }
    
        ll fc = 0;
        fc+=m/k;
        ll kc = m%k;
        if(a1+kc>=k){
            cout<<fc+1<<'\n';
            return;
        }else{
            cout<<fc+kc<<'\n';
            return;
        }
    }
    if(m1>k*ak){
        cout<<0<<'\n';
        return;
    }
    ll fc = 0;
    if(m1<k*ak){
        ll kc = m1%k;
        if(kc<=a1){
            cout<<0<<'\n';
            return;
        }else{
            kc -= a1;
            fc=fc+kc/k+kc%k;
            cout<<fc<<'\n';
            return;

        }
    }


    

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}