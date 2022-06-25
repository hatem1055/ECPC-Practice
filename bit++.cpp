#include <iostream>
using namespace std ;
int main () {
    int n {} ;
    int x {} ;
    string selection {} ;
    cin >> n ;
    for (int i{0} ; i < n ; i++){
        cin >> selection ;
        for(int j{0} ; j < selection.length() ; j++ ){
            selection[j] = tolower(selection[j]);
        }
        if(selection == "x++" || selection == "++x"){
            x++;
        }else if(selection == "x--" || selection == "--x"){
              x--;  
        }
    }
    cout << x << endl ;
    return 0 ;
}
