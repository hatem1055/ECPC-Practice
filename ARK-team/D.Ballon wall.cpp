#include <bits/stdc++.h>
using namespace std ;
int main(){
    int c ;
    cin >> c ;
    while(c--){
        long long  t ;
        cin >> t ;
       
        if ( t % 2 == 0 && t %3 == 0 ){
            cout << 'A' << endl ; 
        }
        else if ( t %2 == 0){
            cout << 'C' << endl ;
        }
        else if ( t % 3 == 0 ){
            cout << 'D' << endl ;
        }
        else if (t % 2 == 1){
            cout << 'B' << endl ;
        }
    }
}