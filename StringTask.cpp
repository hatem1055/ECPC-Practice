#include <iostream>
#include <string>
#include <vector>
using namespace std ;
int main() {
    string s1 {} ;
    vector<char> final {};
    cin >> s1 ;
    for(int i{0} ; i < s1.length() ; ++i ){
        s1[i] = tolower(s1[i]) ;
        if(s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u' && s1[i] != 'y'){
            final.push_back('.') ;
            final.push_back(s1[i]) ;
        }
    }
    for(auto c : final){
        cout << c ;
    }
    return 0;
}
