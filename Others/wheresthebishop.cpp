// div 4 #799
// Mahmoud Adel

#include<bits/stdc++.h>
#define scn(n) scanf("%i", &n)


void solve() {
    char arr[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cin >> arr[i][j];
        }
    }
    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (arr[i][j] == '#' && arr[i + 1][j + 1] == '#'
                && arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#') {
                printf("%i %i\n", i + 1, j + 1);
            }
        }
    }
}



int main() {
    int t; scn(t);
    while (t--) solve();
}