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
    string s; cin>>s;
    int n = s.length();
    string ans = "";
    bool flag = true;
    if(s[0]<=90){
        forf(i,1,n){
            if(s[i]>90){
                flag = false; break;
            }
        }
        if(flag){
            forf(i,0,n){
                s[i] = s[i] + 32;
                cout<<s[i];
            }
        }else{
            cout<<s<<'\n';
        }
    } else{
        forf(i,1,n){
            if(s[i]>91){
                flag = false; break;
            }
        }
        if(flag){
            s[0] = s[0] - 32;
            cout<<s[0];
            forf(i,1,n){
                s[i] = s[i] + 32;
                cout<<s[i];
            }
        } else{
            cout<<s<<'\n';
        }
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // ll t; cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}