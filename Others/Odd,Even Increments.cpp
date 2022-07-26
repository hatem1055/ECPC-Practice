// div 4 # 784
// Mahmoud Adel

#include<bits/stdc++.h>

void solve() {
    int n; scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
    }
    bool even1 = (arr[0] % 2 == 0);
    bool even2 = (arr[1] % 2 == 0);
    bool con = true;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (even1) {
                if (arr[i] % 2 != 0) {
                    con = false;
                    break;
                }
            }
            else {
                if (arr[i] % 2 == 0) {
                    con = false;
                    break;
                }
            }
        }
        else {
            if (even2) {
                if (arr[i] % 2 != 0) {
                    con = false;
                    break;
                }
            }
            else {
                if (arr[i] % 2 == 0) {
                    con = false;
                    break;
                }
            }
        }
    }
    if (con) printf("YES\n");
    else printf("NO\n");
}

int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}