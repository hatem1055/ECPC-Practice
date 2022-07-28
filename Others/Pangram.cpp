// div 2 # 295
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; string str;
    cin >> n >> str;
    set<char> unq;
    for (int i = 0; i < n; i++) {
        str[i] = tolower(str[i]);
        unq.insert(str[i]);
    }
    if (unq.size() == 26) cout << "YES\n";
    else cout << "NO\n";
}