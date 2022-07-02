#include<iostream>
#include<string>
using namespace std ;
int main(){
    int number {} ;
    string num {} ;
    bool state {false} ;
    cin >> num ;
    for(int i{0} ; i < num.length() ; i++){
        if(num[i] == '4' || num[i] == '7' ){
            state = true ;
        }else{
            state = false ;
            break ;
        }
    }
    if( num.length() == 3 ){
        number = ( (num[0] - '0') * 100 ) + ( (num[1] - '0') * 10) + (num[2] - '0') ;
    }else if(num.length() == 2){
        number = ((num[0] - '0') * 10) + (num[1] - '0') ; 
    }else if (num.length() == 1){
        number = num[0] - '0' ;
    }
    if( state || number % 4 == 0 || number % 7 == 0 || number % 47 == 0 || number % 74 == 0){
        cout << "YES" ;
    }else
        cout << "NO" ;
}
