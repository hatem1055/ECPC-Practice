// div 3 # 805
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    set<char> letters;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        letters.insert(s[i]);
        if (letters.size() == 4) {
            res++;
            letters.clear();
            letters.insert(s[i]);
        }
    }
    if (letters.size() > 0) res++;
    printf("%i\n", res);
}


int main() {
    int t; scanf("%i", &t);
    while (t--) solve();
}