//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,c=1; cin>>x;
    while(x>1){
        if(x%2==0) x/=2;
        else{
            c++; x--;
        }
    }
    cout<<c<<'\n';
    return 0;

}