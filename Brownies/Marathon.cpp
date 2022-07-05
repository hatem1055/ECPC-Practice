// Problem link: https://codeforces.com/contest/1692/problem/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num, ans = 0;
        vector <int> numbers;
        for(int i = 0;i<4;i++){
            cin >> num;
            numbers.push_back(num);
            if (num > numbers[0])
                ans++;
        }
        cout << ans << endl;
    }
}
