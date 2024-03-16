//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int n; cin>>n;
    int arr[n];
    rep(i,n) cin>>arr[i];
    set<int> s;
    vector<int> final;
    forb(i,n-1,0){
        if(s.find(arr[i])==s.end()){
            final.push_back(arr[i]);
            s.insert(arr[i]);
        }
    }
    cout<<final.size()<<'\n';
    forb(i,final.size()-1,0){
        cout<<final[i]<<" ";
    }
}