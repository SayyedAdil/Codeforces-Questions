//-----------ADIL SAYYED----------
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

//---------------------------------GCD---------------------------------
ll gcd(ll a , ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
//---------------------------------LCM---------------------------------
ll lcm (ll a , ll b){
    return (a*b / gcd(a,b));  
}
//---------------------------------SOLVE-------------------------------
void solve(){
    ll n; cin>>n;
    vt a(1,0);
    ll x;
    bool flag = true;
    rep(i,n){
        cin>>x;
        if(x!=0 && a.back()-x>=0){
            flag = false;
            break;
        } else{
            a.pb(a.back()+x);
        }
    } 


    if(!flag){
        cout<<-1<<'\n';
    }else{
        if(a.back()>=0){
            forf(i,1,n+1){
                cout<<a[i]<<' ';
            }
            cout<<'\n';
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

