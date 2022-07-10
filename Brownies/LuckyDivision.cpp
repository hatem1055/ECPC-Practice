// Problem link: https://codeforces.com/problemset/problem/122/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string ans = "NO";
    cin >> n;
    for (int i = 1;i<=n;i++){
        bool lucky = false;
        int number = i;
        while(number != 0){
            int curr_digit = number % 10;
            if (curr_digit == 7 || curr_digit == 4){
                lucky = true;
            }
            else {
                lucky = false;
                break;
            }
            number /= 10;
        }
        if(lucky){
            if(n % i == 0)
                ans = "YES";
        }
    }
    cout << ans;
}