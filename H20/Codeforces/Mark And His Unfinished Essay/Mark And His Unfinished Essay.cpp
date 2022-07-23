#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include<unordered_map>
using namespace std;




int main() {

    int t; cin >> t;
    for (int z = 0; z < t; ++z) {
        int n, c, q; cin >> n >> c >> q;
        string s; cin >> s;
        vector<vector<long long>> copies(c);
        long long run_len = n;
        for (int i = 0; i < c; ++i) {
            long long l, r; cin >> l >> r;
            run_len += r - l + 1;
            copies[i] = { l, r, run_len };
        }

        auto get_len = [&](int x) {
            return x < 0 ? n : copies[x][2];
        };

        for (int nq = 0; nq < q; ++nq) {
            long long pos; cin >> pos;
            for (int j = c - 1;~j; --j) {
                if (get_len(j) >= pos && get_len(j - 1) < pos) {
                    long long g = pos - get_len(j - 1);
                    pos = copies[j][0] + g - 1;
                }
                if (pos <= n) {
                    cout << s[pos - 1] << '\n'; break;
                }
            }
        }
    }
    return 0;
}
