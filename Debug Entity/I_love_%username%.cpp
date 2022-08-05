#include <iostream>
using namespace std;

int main() {
    int n, amazing = 0, min, max, points;
    cin >> n;
    cin >> points;
    max = min = points;
    for (int i = 0; i < n-1; ++i) {
        cin >> points;
        if (points > max) {
            max = points;
            amazing++;
        }
        if (points < min) {
            min = points;
            amazing++;
        }
    }
    cout << amazing;
}

