#include <iostream>
using namespace std;
int main() {
    string word1;
    string word2;
    cin >> word1;
    cin >> word2;

    for (int i = 0; i < word1.size(); i++) {
        int w1 = tolower(word1[i]);
        int w2 = tolower(word2[i]);

        if (w1 < w2) {
            cout << -1 << endl;
            return 0;
        } else if (w2 < w1) {
            cout << 1 << endl;
            return 0;
        }

    }
     cout << 0 << endl;
}



