//https://codeforces.com/problemset/problem/1676/B
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ; 
    cin >> n ;
    while (n--){
        int len , ans = 0 ;
        cin >> len ;
        int *arr = new int [len];
        for(int i = 0 ; i < len ; i++){
            cin >> arr[i];
        }
        sort(arr, arr+len);
        int temp = arr[0];
        for(int i = 0 ; i < len ; i++){
            ans += (arr[i] - temp );
        }
        cout << ans << endl ;
    }
}
