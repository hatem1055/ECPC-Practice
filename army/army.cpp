// created by kareem sakkary
// last change : 25/6/2022
// link : https://codeforces.com/problemset/problem/38/A
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int an[n-1];
    for(int i = 0 ;i<n-1;i++){
        cin >> an[i];
    }
    int x , y,sum=0;
    cin >> x >> y;
    for(int i = x-1 ; i<y-1;i++){
        sum += an[i];
    }
    cout << sum ;
    return  0;
}