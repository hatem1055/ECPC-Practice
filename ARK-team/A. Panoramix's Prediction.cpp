//https://codeforces.com/problemset/problem/80/A
//created by : Rana Essam
//last edit : 12/7/2022
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x, y , num ;
    cin >> x >> y ;
    for(int i = x+1 ; i <= y ; i++){
        bool flag = 1 ;
        for(int j = 2 ; j <= sqrt(i) ; j++){
            //cout << i << j << endl ;
            if( i % j == 0){
                flag = 0 ; 
              //  cout << 1 << endl ;
                break;
            }
        }
        if(flag){
            num = i ;
            break;
        }
    }
    if(num == y){
        cout << "YES";
    }
    else{
        cout << "NO" ;
    }
}