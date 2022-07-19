// div 3 # 805
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string m; cin >> m;
    string copym = m;
    copym[0] = '1';
    for (int i = 1; i < m.length(); i++) {
        copym[i] = '0';
    }

    cout << stoi(m) - stoi(copym) << endl;
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}