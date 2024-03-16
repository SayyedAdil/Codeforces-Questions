//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n,x; cin>>n>>x;
    vector<int> v(n);
    ll o=0,e=0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(a%2==1) o++;
        else e++;
    }
    ll flag = 0;
    if(o==0)flag = 0;
    else{
        ll c = 1;
        while(c<=o){
            if(x<c) c=o+1;
            else if(e>=(x-c)) {
                flag = 1;
                c = o+1;
            }
            else if(e<(x-c)){
                c+=2;
            }
        }
    }
    if(flag==1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--)
    solve();
    return 0;
}