#include <iostream>
#include <cstring>

using namespace std;
int main() {
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            x++;
        }else{
            y++;
        }
    }
   for(int j =0;j<s.size();j++){
       if(x>=y){
           s[j]= tolower(s[j]);
       }else{
           s[j]= toupper(s[j]);
       }
   }
   cout<<s;
    return 0;
}
