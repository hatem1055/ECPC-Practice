// created by kareem sakkary
// last change : 31/5/2022
// link : https://codeforces.com/problemset/problem/1680/B
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int digits[x.length()];
        for(int i = 0;i<x.length();i++){
            digits[i]=int(x[i])-'0';
        }
        if(x.length()==2){
            cout << digits[1]<< endl;   
        }else{
            cout << *min_element(digits,digits+x.length()) << endl;
        }      
       
        }
    }