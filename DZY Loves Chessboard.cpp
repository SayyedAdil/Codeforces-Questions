//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

int main(){
    int r,c; cin>>r>>c;
    char arr[r][c];
    rep(i,r){
        rep(j,c){
            cin>>arr[i][j];
        }
    }
    char ans[r][c];
    rep(i,r){
        rep(j,c){
            if(i%2==0){
                if(j%2==0){
                    ans[i][j]='B';
                }else{
                    ans[i][j] = 'W';
                }
            }else{
                if(j%2==0){
                    ans[i][j]='W';
                }else{
                    ans[i][j] = 'B';
                }
            }
        }
    }
    rep(i,r){
        rep(j,c){
            if(arr[i][j]=='-'){
                ans[i][j]='-';
            }
        }
    }
    rep(i,r){
        rep(j,c){
            cout<<ans[i][j];
        }
        cout<<'\n';
    }
}