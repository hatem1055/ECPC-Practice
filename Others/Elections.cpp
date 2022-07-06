// Problem A
// Codeforces div 3 # 748
// Mahmoud Adel

#include<iostream>

void solve() {
    int arr[3], max = 0, maxcount = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%i", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == max) maxcount++;
    }

    if (maxcount == 1) {
        for (int i = 0; i < 3; i++) {
            if (arr[i] == max) printf("%i ", 0);
            else printf("%i ", max - arr[i] + 1);
        }
        printf("\n");
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (arr[i] == max) printf("%i ", 1);
            else printf("%i ", max - arr[i] + 1);
        }
        printf("\n");
    }
}

int main() {
    int t; scanf("%i", &t);
    while (t--) {
        solve();
    }
}