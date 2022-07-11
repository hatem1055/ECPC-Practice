//https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int x = 1 ;
    cin >> str ;
    for(int i =1 ; i < str.size() ; i++){
        if (str[i] == str[i-1]){
            x++;
        }
        else{
            x = 1 ;
        }
        if (x == 7){
            break;
        }
    }
    if(x == 7){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
}
