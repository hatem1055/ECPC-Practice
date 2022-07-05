//https://codeforces.com/problemset/problem/1462/B
//created by: Rana Essam
//last edit: 5/7/2022
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin >> c ;
    while(c--){
        string str;
        int  n;
        cin >> n ;
        cin >> str;  
        if ( str.substr(0, 4) == "2020" || str.substr(n-4,4) =="2020"){
            cout << "YES" << endl;
        }
        else if (str.substr(0,3) == "202" && str.substr(n-1,1) == "0"){
            cout << "YES" <<endl ;
        }
         else if (str.substr(0,2) == "20" && str.substr(n-2,2) == "20"){
            cout << "YES" <<endl ;
        }
         else if (str.substr(0,1) == "2" && str.substr(n-3,3) == "020"){
            cout << "YES" <<endl ;
        }
        else{
            cout << "NO" << endl ;
        }
        
    }
}
