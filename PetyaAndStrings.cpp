#include<iostream>
#include<string>
#include<cstring>
using namespace std ;
int main() {
    char s1[100] {} ;
    char s2 [100] {} ;
    cin >> s1 ;
    cin >> s2 ;
    for(int i{0} ; i < strlen(s1) ; i++ ){
        //s1[i] = tolower(s1[i]) ; 
        if(s1[i] < 97){
            s1[i]+=32;
        }
    }
     for(int j{0} ; j < strlen(s2) ; j++ ){
        //s2[j] = tolower(s2[j]) ;
        if(s2[j] < 97){
            s2[j]+=32;
        }
    }
    cout << strcmp(s1, s2) ;


    return 0 ;
}
