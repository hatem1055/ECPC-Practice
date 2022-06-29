// created by kareem sakkary
// last change : 6/6/2022
// link : https://codeforces.com/problemset/problem/1686/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int sum=0;
        for(int i =0 ; i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        bool flag = false;
        for(int i = 0 ; i<n ; i++) {
            if (float((sum - a[i])) / (n - 1) == float(a[i])) {
                flag = true;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return  0;
}