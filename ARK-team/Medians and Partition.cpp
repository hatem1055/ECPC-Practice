#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long n ;
    int m , l=0, u=0 ;
    cin >> n >> m ;

    for (int i = 0 ; i < n ; i++){
        int x ; 
        cin >> x ; 
        if (x < m){  //to detrmine the number of elements that less than m ,and bigger than m 
            l++;    
        }
        else {
            u++;
        }
    }

    if (l >= u){  // in this case , the origial array does not meet the requirement to create m-good array, so we can not get any subarrays of it
        cout << 0 ;
    }
    else {  // in this case , there many elements or all meets the requirement to create m-good array , so the number of sub arrays will be the result of subtract both u & l 
        cout << u-l;
    }
 
}
