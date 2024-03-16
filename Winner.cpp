//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string , int>m1;
    vector<string> name;
    vector<int> score;
    map<string , int>m2;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string st; int s;
        cin>>st>>s;
        name.push_back(st);
        score.push_back(s);
        m1[st]+=s;
    }

    int max = INT_MIN;
    for(auto&x : m1){
        if(x.second>max){
            max = x.second;
        }
    }

    for(int i=0;i<n;i++){
        m2[name[i]]+=score[i];
        if(m2[name[i]]>=max && m1[name[i]]==max){
            cout<<name[i]<<'\n';
            break;
        }

    }
}