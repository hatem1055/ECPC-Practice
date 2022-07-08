#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int x;
    cin>>x;
    int total=x/5;
    x%=5;
    if(x!=0){
        total++;

    }
    cout<<total;

    return 0;
}