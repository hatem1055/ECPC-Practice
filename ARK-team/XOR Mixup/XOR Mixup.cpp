#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
       int n ;
       cin >> n;
       int a[n];
       int xor_num=0;
       for(int i = 0 ; i < n ; i++){
           cin >> a[i];
           xor_num ^= a[i];
       }
       for(int i = 0 ;i<n ; i++){
           int x = xor_num ^ a[i];
           if(x==a[i]) { cout << x << endl; break; }
       }
    }
}