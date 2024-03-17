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

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> vt1(n + 1, 0), vt2(n + 1, 0);
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        vt1[c]++;
    }
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        vt2[c]++;
    }
    vector<int> v1, v2;
    int ct = 0;
    for (int i = 1; i <= n; i++){
        if (vt1[i] && vt2[i]){
            v1.pb(i);
            v2.pb(i);
            ct++;
        }
        if (ct == 2 * k)
            break;
    }
    if (ct % 2){
        v1.pop_back();
        v2.pop_back();
        ct--;
    }

    k = k - ct / 2;
    int ct1 = 0, ct2 = 0;
    for (int i = 1; i <= n; i++){
        if (ct1 < k && (vt1[i] && !vt2[i])){
            v1.pb(i);
            v1.pb(i);
            ct1++;
        }
        if (ct2 < k && (!vt1[i] && vt2[i])){
            v2.pb(i);
            v2.pb(i);
            ct2++;
        }
    }
    for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << "\n";
    for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}