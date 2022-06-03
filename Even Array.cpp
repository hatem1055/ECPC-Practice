#include <bits/stdc++.h>
using namespace std ;

int main(){
    vector <int > result ;
    int c ;
    cin >> c ;
    while (c--){
        int n , even = 0 , odd = 0 , move = 0 ;
        cin >> n;
        for (int i =0 ; i < n ; i++){
            int num ;
            cin >> num ;
            if (num % 2 == 0 ){
                even ++;
            }
            else {
                odd++;
            }

            if( ( num % 2 == 0 && i % 2 != 0 ) || ( num % 2 != 0 && i % 2 == 0 ) ){
                move ++;
            }
        }
        if ( ( even == odd ) || ( even == (1+odd) ) ){
            result.push_back( move/2 );
        }
        else {
            result.push_back(-1);
        }
       
    }
    for (int r : result ){
        cout << r << endl ;
    }
}
