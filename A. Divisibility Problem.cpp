//https://codeforces.com/problemset/problem/1328/A
#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long c;
    cin >> c ;
    while(c--){
        long long a, b;
        cin >> a >> b ;
        if(a % b ==0){
            cout << 0 << endl;
        }
        else{
           long long x = a/b ;
           x++ ;
           cout << x * b - a << endl;
        }
    }
}
