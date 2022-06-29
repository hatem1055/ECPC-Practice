//https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>
using namespace std ;
int main(){ 
    int n , a, b ,c ;
    cin >> n >> a >> b >> c ;
    int num = 0 ; 
    for(int i = 0 ; i*a <= n ; i++ ){
        for(int j = 0 ; (i*a + j *b) <= n ; j ++){
                int r = n - ( j * b + a* i);
                if (r % c == 0  ){
                    int k = r / c;
                    num = max(num, i + j + k);  
            }
        }
    }
    cout << num ;
}
