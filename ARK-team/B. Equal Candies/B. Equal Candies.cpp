// created by kareem sakkary
// last change : 29/6/2022
// link : https://codeforces.com/contest/1676/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int mi = 10e7;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] < mi) {
                mi = a[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += (a[i]-mi);
        }
        cout << sum << endl;
    }
}