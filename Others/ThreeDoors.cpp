// Educational Codeforces Round 132 (Rated for Div. 2)
// Mahmoud Adel

#include<iostream>

void solve() {
    int n, arr[3];
    scanf("%i%i%i%i", &n, &arr[0], &arr[1], &arr[2]);
    if (arr[n - 1] != 0 && arr[arr[n - 1] - 1] != 0) printf("YES\n");
    else printf("NO\n");
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}