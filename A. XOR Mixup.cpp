//https://codeforces.com/contest/1698/problem/A
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int c ;
    cin >> c ;
    while(c--){
        int n ;
        cin >> n;
        vector <long long >arr ;
        vector <long long >ans ;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            arr.push_back(x);
        }
        if (n == 1 ){
            ans.push_back(arr[0]);
        }
        else{
            for(int i = 0 ; i < n ; i++ ){
                long long x = 0 ;
                for(int j = 0 ; j < n ; j++){
                    if (j != i){
                        x = x ^ arr[j];
                    }
                }
                ans.push_back(x);
            }
        }
        sort(ans.begin(), ans.end());
        int j = 0 ;
        bool flag = 1 ;
        while (flag){
            for(int i = 0 ; i < n ; i++){
                if (ans[j] == arr[i]){
                    cout << arr[i] << endl ;
                    flag = 0 ;
                    break;
                }
            }
            j++;
        }

    }
}

