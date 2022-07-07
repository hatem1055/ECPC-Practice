#include<iostream>
#include<cmath>
using namespace std;

int main (){
   int x;
   int m, n;
    for(int i =0; i<5; i++){
        for(int j = 0; j<5;j++){
            cin>> x;
            if(x==1)
            {
m = i;
n = j;
            }
        }
    }
    cout<<abs(m-2)+abs(n-2);
}

