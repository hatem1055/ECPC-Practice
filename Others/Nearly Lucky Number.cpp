// div 2 # 84
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            cnt++;
        }
    }
    if (cnt == 7 || cnt == 4) cout << "YES";
    else cout << "NO";
}