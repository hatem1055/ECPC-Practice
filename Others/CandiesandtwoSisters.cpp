// div 3 # 634
// Mahmoud Adel

#include<iostream>

void solve() {
    int n; scanf("%i", &n);
    if (n % 2 == 0)
        printf("%i\n", n / 2 - 1);
    else printf("%i\n", n / 2);
}

int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}