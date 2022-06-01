// created by kareem sakkary
// last change : 1/6/2022
// link : https://codeforces.com/problemset/problem/1679/A
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        bool flag = false;
        ll n ;
        cin >> n;
        ll max_bus = n/4;
        if(n-4*max_bus==2){
            flag = true;
        }
        if((n-(4*max_bus))==0){
            flag = true;
        }
        ll min_bus = n/6;
        if(n-6*min_bus==4||n-6*min_bus==2){
            min_bus ++ ;
        }
        if(flag && n>=4){
            cout << min_bus <<" "<< max_bus << endl;
        }else{
            cout << -1<<endl;
        }
    }

}