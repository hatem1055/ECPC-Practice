#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char c;
    cin >> c;
    string s;
    cin >> s;
    string st = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.size(); i++) {
            int m = st.find(s[i]);
            if(c == 'R') cout << st[m-1];
            else cout << st[m+1];
        }
    return 0;
}