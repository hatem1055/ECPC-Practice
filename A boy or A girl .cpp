#include <iostream>
using namespace std;
int main() {
    string user;
    int count;
    cin>>user;
    bool x = false;
    if(user.size()>100){
        x = true;
    }else{
        for(int i =0;i<user.size();i++){
            if(islower(user[i])){
            }else{
                cout<<"wrong input";
                x = true;
                break;
            }}}
    while(x){
        cin>>user;}
    count = user.size();
    for(int i = 0;i<user.size();i++){
        for(int j = i+1;j<user.size();j++){
            if(user[i]==user[j]){
                count--;
                break;
            }}}
    cout<<count<<endl;
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}