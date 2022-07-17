#include<iostream>
using namespace std;

int main(){
    int k,w;
    long long n;
    long long cost=0;
    cin>>k>>n>>w;
    while(k<1||w>1000||n<0||n>10e9){
        cin>>k>>n>>w;
    }
    for(int i =1; i<=w;i++){
cost+= i*k;
    }
    if(cost<n){
        cout<<"0";
    }
    else {
        cout << (cost - n);
    }
}