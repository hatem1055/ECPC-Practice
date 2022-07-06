// div 2 #803
// Mahmoud Adel

#include<bits/stdc++.h>
#define scf(n) scanf("%i", &n)
#define print(n) printf("%i\n", n)

void solve() {
    int n, k;
    scf(n); scf(k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scf(arr[i]);
    }

    if (k > 1) {
        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            count += (arr[i] > arr[i + 1] + arr[i - 1]);
        }
        print(count);
    }
    else {
        print((n - 1) / 2);
    }
}


int main() {
    int t;
    scf(t);
    while (t--) {
        solve();
    }
}