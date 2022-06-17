#include <iostream>
using namespace std;
int main () {
    int n {} ;
    int petya {} ;
    int vasya {} ;
    int sonya {} ;
    int counter {} ;
    cin >> n ;
    for (int i{0} ; i < n ; i++) {
        cin >> petya ;
        cin >> vasya ; 
        cin >>sonya ;
        if ( petya && vasya == 1 || petya && sonya == 1 || vasya && sonya == 1 || petya && vasya && sonya ==1){
            counter ++ ;
        }
    }
    cout << counter ;
    
    return 0 ;
}
