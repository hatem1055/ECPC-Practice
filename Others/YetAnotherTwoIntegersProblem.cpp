// div 3 #667
// Mahmoud Adel

#include<bits/stdc++.h>

void solve() {
    int a, b, cnt = 0;
    scanf("%i%i", &a, &b);
    if (a < b) {
        b -= a;
        if (b % 10 == 0) {
            cnt += b / 10;
        }
        else
            cnt += (b / 10 + 1);
    }
    else if (a > b) {
        a -= b;
        if (a % 10 == 0) {
            cnt += a / 10;
        }
        else
            cnt += (a / 10 + 1);
    }
    printf("%i\n", cnt);
}

int main() {
    int t; scanf("%i", &t);
    while (t--) {
        solve();
    }
}