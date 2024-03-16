// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define int long long
// #define mod 1000000007


// void solve()
// {
//     int n; cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     vector<int> v[21];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=20;j++)
//         {
//             if(a[i]&(1<<j)) v[j].push_back(i+1);
//         }
//     }
//     int q; cin>>q;
//     while(q--){
//         int ans = 1e6, ans2 = -1, ans3 = 1e6;
//         int idx, val; cin>>idx>>val;
//         for(int i = 20; i>=0; i--){
//             if (v[i].size() == 0) continue;
//             auto it = lower_bound((v[i]).begin(), (v[i]).end(), idx);
//             if ( val < (1<<i) && ans2 == -1 ){
//                 auto it = lower_bound((v[i]).begin(), (v[i]).end(), idx);
//                 if ( it != (v[i]).end() ){
//                     ans = min(ans, *it);
//                 }
//             }
//             else if (val < (1<<i)){
//                 auto it = lower_bound((v[i]).begin(), (v[i]).end(), idx);
//                 if ( it != (v[i]).end() ){
//                     if (ans3 == 1e6){
//                     ans3 = min(ans3, *it);
//                     ans3 = max(ans2,ans3);
//                     }
//                     else{
//                         int newans = min(ans3, *it);
//                         newans = max(ans2,newans);
//                         ans3 = min(ans3, newans);
//                     }
//                 }
//                 // cout<<ans2<<" "<<ans3<<endl;
//             }
//             else{
//                 auto it = lower_bound((v[i]).begin(), (v[i]).end(), idx);
//                 if ( it != (v[i]).end() ){
//                     ans2 = max(ans2, *it);
//                     // cout<<*it<<endl;
//                     val -= (1<<i);
//                 }
//                 // cout<<ans2<<" "<<ans3<<endl;
//             }
//         }
//         if ( val > 0){ans2 = -1;}
//         // cout<<val<<" "<<ans<<" "<<ans2<<" "<<ans3<<endl;
//         if ( ans2 > 0){
//             cout<<min(min(ans,ans2),ans3)<<" ";
//         }
//         else if (min(ans,ans3) == 1e6){
//             cout<<-1<<" ";
//         }
//         else{
//             cout<<min(ans,ans3)<<" ";
//         }
//     }

// }


// int32_t main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


//     ll test=1;
//     //cin>>test;
//     while(test--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void build(int ind,int low,int high,vector<int>&a,vector<int>&segment)
{
    if(low==high)
    {
        segment[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid,a,segment);
    build(2*ind+2,mid+1,high,a,segment);
    segment[ind]=(segment[2*ind+1])|(segment[2*ind+2]);
}
int query(int ind,int low,int high,int l,int r,vector<int>&segment)
{
    if(low>=l && high<=r)
    {
        return segment[ind];
    }
    if(high<l || low>r)
    {
        return 0;
    }
    int mid=(low+high)/2;
    int left=query(2*ind+1, low, mid, l, r, segment);
    int right=query(2*ind+2, mid+1, high, l, r, segment);
    return left|right;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>segment(4*n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build(0,0,n-1,a,segment);
    int q;
    cin>>q;
    while(q--)
    {
        int i,v;
        cin>>i>>v;
        i--;
        int high=n-1;
        int low=i;
        int ans=n-1;
        if(query(0,0,n-1,i,n-1,segment)<v)
        {
            cout<<-1<<' ';
        }
        else
        {
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(query(0,0,n-1,i,mid,segment)>=v)
                {
                    ans=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            cout<<ans+1<<' ';
        }
        
    }
}