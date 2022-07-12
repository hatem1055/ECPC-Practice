#include <iostream>
#include <string>
using namespace std;


int main() {
    int t;
    string word;
    cin >> t;
    if (t < 1 || t > 10e3) {
        cin >> t;
    }
    for (int i = 0; i < t; i++) {
        cin >> word;

        for (int i = 0; i < word.size(); i++) {
            word[i] = toupper(word[i]);
        }
        if (word == "YES") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}