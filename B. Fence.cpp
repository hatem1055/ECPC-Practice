//https://codeforces.com/problemset/problem/363/B
#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long  n, k, w = 15000020 ,pos;
    cin >> n >> k ;
    long long  arr [150001] = {0};
    for(int i = 1 ; i <= n ; i ++){
        cin >> arr[i];
        arr [i] += arr[i-1];
    } 
    for(int i = k ; i <= n ; i++){
        if ( w > arr[i] - arr[i-k]){
            w = arr[i] - arr[i-k];
            pos = i ;
        }
    }
    cout << pos - k +1  ;
    
}