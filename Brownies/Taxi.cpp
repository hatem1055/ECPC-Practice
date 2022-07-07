// Problem link: https://codeforces.com/problemset/problem/158/B
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a = 0, b = 0, c = 0, d = 0, input, n;
    cin >> n;
    while (n--) {
        cin >> input;
        switch (input) {
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
            case 4:
                d++;
                break;
        }
    }
    int taxi = 0;
    taxi += d;
    taxi += c;
    a -= c;
    if (a < 0) a = 0;
    if(b % 2 == 0)
        taxi += b/2;
    else{
        taxi += b/2 + 1;
        a -= 2;
        if(a < 0) a = 0;
    }
    a = ceil(a/4.0);
    taxi += a;
    cout << taxi << endl;
}