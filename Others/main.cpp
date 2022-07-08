#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1,s2;
    cin >> s1 >> s2;
    if(s1 == s2) cout << "-1";
    else cout << max(s1.length(),s2.length());
    return 0;
}
