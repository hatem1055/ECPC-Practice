#include<iostream>
#include<string>
using namespace std;

int main(){
    long long n;
    int c=0;
    cin>>n;
    string number = to_string(n);
    for(char i: number){
        if(i=='4' || i=='7'){
            c++;
        }
    }
    string count = to_string(c);
    bool nearlyLucky;
    for(char i: count){
        if(i=='4' || i=='7'){
            nearlyLucky= true;
        }
        else{
            nearlyLucky=false;
            break;
        }
    }
    if(nearlyLucky){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}