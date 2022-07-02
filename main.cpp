#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string user;
        cin>>user;
        if(user.size()>10){
            cout<<user.at(0)<<user.size()-2<<user.at(user.size()-1)<<endl;
        }else{
            cout<<user<<endl;
        }

    }
}