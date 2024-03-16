//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(v) v.begin(),v.end()
#define vin(v,n) for(ll i=0;i<n;i++) cin>>v[i]
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i > e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define pn cout<<"NO"<<'\n'
#define py cout<<"YES"<<'\n'

void solve(){
    ll n; cin>>n ;
    ll arr[n];
    ll maxx=INT_MIN;
    rep(i,n){
        cin>>arr[i];
        if(arr[i]>=maxx) maxx=arr[i];
    }
    vt v(maxx+1,0);
    rep(i,n){
        v[arr[i]]=1;
    }
    ll a=-1;
    for(ll i=0;i<=maxx;i++){
        if(v[i]==0){
            a=i;
            break;
        }
    }
    if(a==-1) {
        a=maxx+1;
    };
    vt v1(a,0),v2(a,0);
    ll c1=0,c2=0,p=-1,f=-1;
    rep(i,n){
        if(arr[i]<a && v1[arr[i]]==0){
            v1[arr[i]]=1;
            c1++;
        }
        if(c1==a){
            p=i;
            break;
        }
    }
    forb(i,n-1,0){
        if(arr[i]<a && v2[arr[i]]==0){
            v2[arr[i]]=1;
            c2++;
        }
        if(c2==a){
            f=i;
            break;
        }
    }
    if(p>=f){
        cout<<-1<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<p+1<<endl;
        cout<<p+2<<" "<<n<<endl;
    }

    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}

