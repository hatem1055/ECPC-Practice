#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int T, countU;
    cin >> T;
    string steps;
    while (T--) {
        countU = 0;
        cin >> steps;
        for (char letter: steps) {
            if (letter == 'D' || letter == 'd') {
                break;
            }
            if (letter == 'U' || letter == 'u') {
                countU++;
            }
        }
        if (countU == 0) {
            cout << 0 << endl;
        } else {
            cout << countU << endl;
        }
    }
}