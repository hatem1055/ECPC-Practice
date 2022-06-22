
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    string str1,str2;
    cin>>str1>>str2;
    bool big{false},small{false};
    for(int i=0;i<str1.size();i++){
        if(int(toupper(str1[i])>int(toupper(str2[i])))){
            big = true;
            break;
        }else if(int(toupper(str1[i])<int(toupper(str2[i])))){
            small = true;
            break;
        }
    }
    if(small){
        cout<<-1<<endl;
    }else if(big){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    
    return 0;
}
