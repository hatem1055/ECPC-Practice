#include<iostream>
using namespace std;

int main(){
    int a,b,n;
    cin>>a>>b;
    if(a<1||a>b||b>10){
        cin>>a>>b;
    }
    while(a<=b){
        a*=3;
        b*=2;
        n++;
    }
    cout<<n;
}
