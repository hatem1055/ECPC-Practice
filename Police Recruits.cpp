//https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n, ans = 0, p =0 , c =0;
    cin >> n ;
    int * arr = new int [n];
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
        if(arr[i] > 0){
            p+= arr[i];
        }
        else if (p > 0) {
            p -- ;
        }
        else{
            ans++ ; 
        }
    }
    cout << ans;
    delete [] arr;
}
