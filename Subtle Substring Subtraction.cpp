#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
       string s;
       cin>>s;
       int sum=0;
       for(char i:s)
       {
           sum+=(i-'a'+1);
       }
       if(s.size()==1) cout<<"Bob "<<sum<<'\n';
       else if(s.size()%2==0) cout<< "Alice "<<sum<<'\n';
       else {
           if(sum-2*int(s[s.size()-1]-'a')>sum-2*int(s[0]-'a')) cout<< "Alice "<<sum-2*(int(s[s.size()-1]-'a')+1)<<'\n';
           else cout<< "Alice "<<sum-2*(int(s[0]-'a')+1)<<'\n';
       }
    }
    return 0;
}
