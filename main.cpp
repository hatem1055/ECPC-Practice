#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    int low{0},up{0};
    char ch;
    string tot;
    cin>>tot;
    for(int i=0;i<tot.size();i++){
        if(isupper(tot[i])){
            up+=1;
        }else if(islower(tot[i])){
            low+=1;
        }
    }
   if(low > up){
        for(int j=0;j<tot.size();j++){
            ch= tolower(tot[j]);
            cout<<ch;
        }
   }else if(up>low){
        for(int x=0;x<tot.size();x++){
            ch= toupper(tot[x]);
            cout<<ch;
        }
   }else{
       for(int j=0;j<tot.size();j++){
               ch= tolower(tot[j]);
               cout<<ch;
       }

   }


}
