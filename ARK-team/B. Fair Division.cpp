//https://codeforces.com/problemset/problem/1472/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c ;
    cin >> c ;
    while(c--){
        int n ;
        cin >> n;
        int ones = 0 , sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            int x ;
            cin >> x ;
            if(x == 1){
                ones++; 
                sum++;
            }
            else{
                sum += 2 ;
            }
        }
        if (sum % 2 == 1){
            cout << "NO" << endl ;
        }
        else{
            sum /= 2 ;
            if(sum % 2 == 0 ){
                cout << "Yes" << endl ;
            }
            else if ( ones > 0){
                cout << "YES" << endl ;
            }
            else{
                cout << "NO" <<endl ;
            }
        }
       
    }
}
