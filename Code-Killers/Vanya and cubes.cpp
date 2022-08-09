#include <iostream>
using namespace std;

int main() {
    int c, i = 0, l = 0, now = 0;
    cin >> c;
    while (c > 0) {
        i++;
        now = l + i;
        l = now;
        c -= now;
        if (c < 0) {
            i--;
        }
    }
    cout << i;

}
