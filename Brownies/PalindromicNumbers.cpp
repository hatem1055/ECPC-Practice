// Problem link: https://codeforces.com/problemset/problem/1700/B
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int length = 0;
        string num;
        cin >> length >> num;
        if (num[0] == '9'){
            string ans = "1";
            for (int i = 0;i < length;i++){
                ans += '1';
            }
            string output = "";
            for(int i = length - 1;i >= 0;--i) {
                if (ans[i] < num[i]) {
                    ans[i - 1]--;
                    output += ans[i] + 10 - num[i] + '0';
                }
                else
                    output += ans[i] - num[i] + '0';
            }
            reverse(output.begin(), output.end());
            cout << output << endl;
        }
        else {
            for(int i = 0;i < length;i++) {
                int temp = num[i] - '0';
                temp = 9 - temp;
                num[i] = '0' + temp;
            }
            cout << num << endl;
        }
    }
}
