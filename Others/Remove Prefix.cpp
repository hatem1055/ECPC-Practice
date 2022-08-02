// div 3 # 811
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n; scanf("%i", &n);
    int arr[n];
    for (int i{ 0 }; i < n; i++) {
        scanf("%i", &arr[i]);
    }
    set<int> cnt;
    for (int i = n - 1; i >= 0; i--) {
        if (cnt.find(arr[i]) != cnt.end()) break;
        else cnt.insert(arr[i]);
    }

    printf("%i\n", n - cnt.size());

}

int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}