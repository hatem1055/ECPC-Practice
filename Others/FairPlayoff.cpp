// Educational Codeforces Round 110 (Rated for Div. 2)
// Mahmoud Adel

#include<bits/stdc++.h>

void solve() {
    int a, b, c, d;
    int max1, min1, max2, min2;
    scanf("%i%i%i%i", &a, &b, &c, &d);
    if (a > b) {
        max1 = a; min1 = b;
    }
    else {
        max1 = b; min1 = a;
    }
    if (c > d) {
        max2 = c; min2 = d;
    }
    else {
        max2 = d; min2 = c;
    }
    if (max1 > min2 && max2 > min1) printf("YES\n");
    else printf("NO\n");
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}