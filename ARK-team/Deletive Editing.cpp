    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int t; cin>>t;
        while(t--){
            bool flag=true;
            string s,q;cin >> s >> q;
            for(int i= q.size() - 1; i > -1; i--){
               bool found=false;
               for(int j=s.size()-1;j>-1&&!found;j--){
                   if(s[j] == q[i]){
                       found=true;
                       for(int k=s.size()-1;k>j;k--){
                           for(int y=0;y<i;y++){
                               if(s[k] == q[y]){
                                   flag=false;}}}
                       if(flag){
                           s.erase(j,j+1);}}}
               if(!found){
                   flag=false;
                   break;}}
            if(flag)cout<<"YES\n";
            else cout<<"NO\n";}
        return 0;}
