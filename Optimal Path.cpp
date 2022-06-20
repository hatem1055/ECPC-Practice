//https://codeforces.com/contest/1700/problem/A
#include <bits/stdc++.h>
using namespace std ;
int main(){
        int n ;
        cin >> n ;
        while(n--){
        long long r , c, ans =0, a;
        cin >> r >> c ;
            a = r*c ;
                for(int i = 1 ; i <= c ; i++  ){
                        ans += i ;
                }
                long long  t = c;
                c += t ;
                while(c <= a){
                        ans += c ;
                        c += t ;
                }
                cout << ans << endl ; 
       }
}
