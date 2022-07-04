#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
       string s; cin>>s;
       bool flag=true;
       if(s[0]=='B' || s[s.size()-1]=='A'||s.size()==1) flag=false;
       else {
           int sum=0;
           for (char i : s) {
               if(i=='A') sum++;
               else sum--;
               if(sum<0) {flag=false;break;}
           }
       }
       if(!flag) cout << "NO\n";
       else cout<<"YES\n";
    }
    return 0;
}
