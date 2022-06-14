//https://codeforces.com/contest/1692/problem/A

#include <bits/stdc++.h>
using namespace std ;
int main(){
  
   vector< int > ans ; 
   int c;
   cin >> c ;
  
   while(c--){
    int sortedDis[4], n, a;
    for (int i = 0 ; i < 4 ; i ++){
        cin >> sortedDis[i];
    }
    a = sortedDis[0];
    sort(sortedDis ,sortedDis+4);
    for(int i = 0 ; i < 4 ; i++){
        if (a == sortedDis[i]){
           n = 3 - i ;
        }
    }
    ans.push_back(n);
   }
  
   for(int a : ans){
    cout << a << endl ;
   }
  
}
