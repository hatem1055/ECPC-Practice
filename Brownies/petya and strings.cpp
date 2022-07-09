//https://codeforces.com/problemset/problem/112/A
#include <iostream>
using namespace std;
int main() {
    string x,y;
    int a=0,b=0;
    cin>>x>>y;
    for(int i =0;i<x.size();i++){
    x[i] = tolower(x[i]);
    a+=x[i];
    y[i] = tolower(y[i]);
    b+=y[i];
    if(x[i] == y[i]) {
    }else{
        if(x[i] < y[i]){
            cout<<"-1";
            return 0;
        }else if(x[i] >y[i]){
        cout<<"1";
            return 0;
    }
    }}
    cout<<"0";
    return 0;
}
