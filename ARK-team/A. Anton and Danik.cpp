//https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n , a=0, d;
    cin >> n ;
    string games ;
    cin >> games ;
    for(int i = 0 ; i < n ; i++){
        if (games[i] == 'A'){
            a++;
        }
    }
    d= n - a ;
    if (a > d ){
        cout << "Anton";
    }
    else if (d > a)
    cout << "Danik";
    else 
    cout << "Friendship";

}
