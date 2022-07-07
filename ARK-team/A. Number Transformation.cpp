// https://codeforces.com/contest/1698/problem/C
// created by : kareem sakkary
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
       int x,y;
       cin >> x >> y;
       if(y%x==0){
           cout <<1 << " " <<y/x <<endl;
       }else{
           cout <<0<<" "<<0<<endl;
       }
    }
    return 0;

}
