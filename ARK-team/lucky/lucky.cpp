// created by kareem sakkary
// last change : 23/6/2022
// link : https://codeforces.com/contest/1676/problem/A
#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n1=0 , n2=0;
        for(int i = 0 ; i < 3 ;i++)n1 = n1 + s[i] - '0';
        for(int i = 3 ; i < 6 ;i++)n2 = n2 + s[i] - '0';
        if(n1 == n2 ) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

        return  0;
}