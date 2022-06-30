// Problem link: https://codeforces.com/contest/1676/problem/B
// Author: Nada Mohammed
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, num;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <int> box;
        for (int i = 0; i < n; i++){
            cin >> num;
            box.push_back(num);
        }
        sort(box.begin(), box.end());
        int ans = 0;
        for (int i=0;i<box.size();i++){
            ans += box[i] - box[0];
        }
        cout << ans << endl;
    }
}