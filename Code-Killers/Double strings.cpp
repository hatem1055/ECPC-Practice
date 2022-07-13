#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   vector<string>s;
   map<string,bool>m;
   cin>>n;
   for(int i=0;i<n;i++){
       string c;
       cin>>c;
       s.push_back(c);
       m[c]=true;
   }
   for(int i=0;i<n;i++){
       bool check = false;
       for(int j=1;j<s[i].size();j++){
           string ref = s[i].substr(0,j),pref = s[i].substr(j,s[i].length()-j);
           if(m[ref]&&m[pref]){
               check = true;
               break;
           }
       }
       if(check)
           cout<<1;
       else
           cout<<0;
   }
   cout<<endl;



    }
}




