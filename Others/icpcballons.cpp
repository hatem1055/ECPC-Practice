// Div 4 # 806
// Mahmoud Adel

#include<bits/stdc++.h>

void solve() {
    int n, cnt = 0; std::string str;
    std::cin >> n >> str;
    std::set<char> uniqueStr;
    for (int i = 0; i < n; i++) {
        uniqueStr.insert(str[i]);
    }
    cnt += (uniqueStr.size() * 2);
    cnt += (n - uniqueStr.size());
    printf("%i\n", cnt);
}

int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}