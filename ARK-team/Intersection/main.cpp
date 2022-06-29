// created by kareem sakkary
// last change : 29/5/2022
// link : https://atcoder.jp/contests/abc199/tasks/abc199_b?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int A[n],B[n];
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    for(int i=0;i<n;i++) {
        cin >> B[i];
    }
    int ma = *max_element(A,A+n);
    int mi = *min_element(B,B+n);
    if(ma > mi){
        cout << 0 << endl;
    }else cout << mi-ma+1 << endl;
    return 0;
}