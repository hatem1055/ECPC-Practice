#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
using namespace std ;
int main() {
    string word {} ;
    int upperc {} ;
    int lowerc {} ;
    cin >> word ;
    for (int i {0} ; i < word.length() ; i++){
        if (isupper(word[i]))
            upperc++ ;
        else if (islower(word[i]))
            lowerc++ ;
    }
    if (upperc == lowerc || lowerc > upperc) {
        for ( int i{0} ; i < word.length() ; i++){
            word[i] = tolower(word[i]) ;
        }
    }else if (upperc >lowerc){
        for (int i{0} ; i < word.length() ; i++){
            word[i] = toupper(word[i]) ;
        }
    }
    cout << word << endl ;
    
    
    return 0 ;
}
