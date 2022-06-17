//https://codeforces.com/problemset/problem/1343/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long c, len ;
    cin >> c ;
    while(c--){
        long long sum1=0 , sum2 =0;
        cin >> len ;
        if (len % 4 != 0) {
            cout << "NO" << endl ; 
        }
        else{
            cout << "YES"<< endl ;
            for(int i = 2 ; i <= len ; i +=2 ){
                cout << i << " " ;
                sum1+= i;
            }
            for (int i = 1 ; i <= len -2 ; i+=2){
                cout << i << " ";
                sum2 += i;
            }
            cout << sum1 - sum2 <<endl ;
        }
    
    }
}
