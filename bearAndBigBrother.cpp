#include <iostream>
using namespace std ;
int main () {
    int limak {} ;
    int brother {} ;
    bool state {false} ;
    int years {} ;
    cin >> limak >> brother ;
    while(!state) {
        if(limak > brother)
            state = true ;
        limak *= 3;
        brother *= 2;
        years++ ;
    }
    cout << years -1 ;
    
    return 0 ;
}
