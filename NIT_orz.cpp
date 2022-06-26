// created by kareem sakkary
// last change : 27/6/2022
// link : https://codeforces.com/contest/1696/problem/A
#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ,z;
        cin >> n  >> z;
        long long ma= 0 ;
        for(int i =0 ; i <n;i++){
            long long a;
            cin >> a;
            if((a|z)>ma)
                ma = a|z;
        }
        cout << ma << endl;
    }
    return  0;
}