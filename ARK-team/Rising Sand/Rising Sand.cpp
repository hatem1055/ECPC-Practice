// created by kareem sakkary
// last change : 1/7/2022
// link : https://codeforces.com/contest/1698/problem/B
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
       int n ,k;
       cin >> n >> k;
       long long a[n];
       int count = 0;

        for(int i = 0 ; i <n;i++){
            cin >> a[i];
        }
       for(int i = 1 ; i <n-1;i++){
           if(a[i]>a[i-1]+a[i+1])count++;
       }
       if(k>1){

           cout << count << endl;
       }else{
           if(n%2==0) cout << n/2-1 << endl;
           else cout << (n-1)/2 << endl;
       }
    }
}