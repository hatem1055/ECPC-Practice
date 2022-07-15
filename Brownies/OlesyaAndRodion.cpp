// Problem Link: https://codeforces.com/problemset/problem/584/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
        cout << -1 << endl;
    else if(t != 10) {
        int x = n - 1;
        cout << t;
        while(x--)
            cout << 0;
    }
    else if (t == 10){
        int x = n - 2;
        cout << t;
        while(x--)
            cout << 0;
    }
}