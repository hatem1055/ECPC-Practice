// div 2 # 200
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 1; cin >> n;
    string arr[n];
    cin >> arr[0];
    int temp = 1;
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != arr[i - 1]) {
            temp++;
        }
    }
    if (temp > cnt) cnt = temp;
    cout << cnt;
}