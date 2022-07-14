#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        if(s.size()<3)cout<<"1\n";
        else {
            string q;
            int c=0;
            int ans=0;
            for(int i=0;i<s.size();i++){
                if(q.find(s[i])==string::npos&&c<3){
                    q+=s[i];c++;
                }
                else if(c==3&&q.find(s[i])!=string::npos){
                    //continue;
                }
                else if(c==3&&q.find(s[i])==string::npos){
                    c=1;
                    ans++;
                    q.clear();
                    q+=s[i];
                }
                if(i==s.size()-1 && (c==1||c==2||c==3)){
                    ans++;
                }
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
