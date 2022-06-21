// created by kareem sakkary
// last change : 18/6/2022
// link : https://codeforces.com/contest/1695/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        long long p,m = 10e9,mI;
        for(int i = 1 ; i<=n ; i++){
            cin >> p;
            if(p < m){
                m=p;
                mI=i;
            }
        }
        if(n%2==0){
            if(mI%2==1)
                cout << "Joe" << endl;
            else
                cout << "Mike" << endl;
        }else{
             cout << "Mike" << endl;
 
        }
    }
}