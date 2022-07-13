//https://codeforces.com/problemset/problem/80/B
#include <bits/stdc++.h>
using namespace std ;
int main(){
    string time  ;
    cin >> time ;
    int pos = time.find(':');
    int h = stoi(time.substr(0, 2)) ;
    int m = stoi(time.substr(pos+1, 2));
    double a1 = (h+ m/60.0) *30 , a2 = (m /60.0) *360 ;
    a1 >= 360 ? a1 -=360 : a1 = a1;
    cout << a1 << " " << a2 ;


}