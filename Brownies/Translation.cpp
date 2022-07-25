#include <iostream>
using namespace std;
int main() {
   string s,t;
   int z=0;
   cin>>t; cin>>s;
   for(int i=0 ;i<s.size();i++){
       if(t[i] == s[(s.size()-1)-i]){
           z++;
       }
   }
   if(z == t.size()){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    return 0;
}
