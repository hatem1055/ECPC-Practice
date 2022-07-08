// div 3 # 661
// Mahmoud Adel

#include<bits/stdc++.h>

void solve() {
    int n, min1, min2; std::cin >> n;
    long long arr1[n], arr2[n], cnt = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    min1 = arr1[0];
    for (int i = 0; i < n; i++) {
        std::cin >> arr2[i];
        if (arr1[i] < min1) {
            min1 = arr1[i];
        }
    }
    min2 = *std::min_element(arr2, arr2 + n);

    for (int i = 0; i < n; i++) {
        cnt += std::max(arr1[i] - min1, arr2[i] - min2);
    }

    std::cout << cnt << '\n';
}


int main() {
    int t;  std::cin >> t;
    while (t--)
        solve();
}