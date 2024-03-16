/*//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
 
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int c=0;
        string new_s = "";
        vt u(100001);
        vt l(100001);
        int len = s.size();
        forf(i,0,len){
            if(s[i]!='B' && s[i]!='b'){
                new_s = new_s + s[i];
                if(int(s[i])>=65 && int(s[i])<=90){
                    u.push_back(i);
                } else if(int(s[i])>=97 && int(s[i])<=122){
                    l.push_back(i);
                }
                c+=1;
            }else if(s[i]=='B'){
                if(u.size()!=0){
                    new_s.erase(u[-1],1);
                    u.pop_back();
                } else{
                    continue;
                }
            } else if(s[i]=='b'){
                if(l.size()!=0){
                    new_s.erase(l[-1],1);
                    l.pop_back();
                } else{
                    continue;
                }
            }
        }
        cout<<new_s<<'\n';        

        }
    }
*/

/*//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s; cin>>s;
        string new_s = "";
        ll cap = 0;
        ll sml = 0;
        reverse(s.begin() , s.end());
        forf(i,0,s.length()){
            if(s[i]=='b')
            {
                sml++;
            }
            else if(s[i]=='B')
            {
                cap++;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                if(cap>0){
                    cap--;
                }else
                    new_s=new_s+s[i];
            }
            else 
            {
                if(sml>0){
                    sml--;
                }else {
                    new_s=new_s+s[i];
                }    
            }
        }       
        reverse(new_s.begin() , new_s.end());
        cout<<new_s<<'\n';
    }
}*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s; 
        cin >> s;
        reverse(s.begin() , s.end());
        stringstream new_s; // Use a stringstream to build the string

        ll cap = 0;
        ll sml = 0;

        forf(i, 0, s.length()){
            if(s[i] == 'b') {
                sml++;
            } else if(s[i] == 'B') {
                cap++;
            } else if(s[i] >= 'A' && s[i] <= 'Z') {
                if(cap > 0) {
                    cap--;
                } else {
                    new_s << s[i]; // Append to the stringstream
                }
            } else {
                if(sml > 0) {
                    sml--;
                } else {
                    new_s << s[i]; // Append to the stringstream
                }    
            }
        }
        string ss = new_s.str();
        reverse(ss.begin() , ss.end());
        cout << ss << '\n'; // Convert stringstream to string and print
    }
}



