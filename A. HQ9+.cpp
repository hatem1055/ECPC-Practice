//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>
using namespace std ;
char language[5] = {'H', 'Q', '9'};
bool check (char c){
    for(int i = 0 ; i < 3 ; i++){
        if (c == language[i]){
            return true ;
        }
    }
    return false ;
}
int main(){
    
    char str[101];
    cin >> str ;
    bool flag = 0 ;
   
    for(int i = 0 ; i < strlen(str) ; i++){
        if (check(str[i])){
            flag = 1 ;
            break;
        }
    }
    if(flag ){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}