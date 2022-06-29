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
        if(x.length()==2){
            cout << digits[1]<< endl;   
        }else{
            cout << *min_element(x.begin(),x.end()) << endl;
        }      
       
        }
    }