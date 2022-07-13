// div 3 #713
// Mahmoud Adel

#include<iostream>

void solve() {
    int n, num; scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] == arr[i]) {
            num = arr[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != num) {
            printf("%i\n", i + 1);
        }
    }
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}