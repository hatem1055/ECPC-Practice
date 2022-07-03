#include <iostream>
using namespace std;

int main() {
    int t;
    int L, R;
    cin >> t;
    while(t < 1 || t > (1e3)){
        cin >> t;
    }
    for (int i = 0; i < t; ++i) {
        cin >> L >> R;
        while(L < 0 || L > R || R < 0 || R > ((2^31)-1) || L > ((2^31)-1)){
            cin >> L >> R;
        }
        cout << (L & R) << endl;
    }
}
