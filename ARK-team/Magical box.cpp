//The problem available from "problemset.pdf" (on the repo)
//created by : Rana Essam
//last edit : 3/7/2022
//purpose : Magical box solution "Girls ACPC 2022"
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int c ;
    cin >> c ;
    
    while (c--){
        long long left,  right ;
        cin >> left >> right ;
          int count=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            count++;
        }
        cout << (left << count )<< endl ;
        }
        
}