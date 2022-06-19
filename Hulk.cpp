#include <iostream>
#include <string>
#include <cstring>
using namespace std ;
int main() {
    string s1 {"I hate"} ;
    string s2 {"I love"} ;
    string final {} ;
    bool state {true} ;
    int n {} ;
    cin >> n ;
    
    for ( int i {1} ;  i <= n ; i++ ) {
        if ( n == 1){
            final = "I hate it" ;
            state = false ;
            //cout << "i hate it" ; 
        }else if ( i % 2 == 0 ){
            final += s2 + " " + "that " ;
        }else
            final += s1 + " " + "that ";
    }
    if(state){
        final = final.erase(final.length()-5) ;
        final += "it" ;
        cout << final << endl  ;
    }else if (!state){
        cout << final << endl  ;
    }
    
    
    return 0;
}
