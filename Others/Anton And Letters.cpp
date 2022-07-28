// div 2 # 253
// Mahmoud Adel

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    set<char> unq;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) unq.insert(s[i]);
    }
    cout << unq.size();
}