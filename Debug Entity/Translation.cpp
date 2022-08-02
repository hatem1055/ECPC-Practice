#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, word2, reversed = "";
    bool result = true;
    long long length;
    cin >> word >> word2;
    length = word.length();
    for (int i = 0; i < word.length(); ++i) {
        reversed[i] = word[length-1];
        length--;
    }
    for (int i = 0; i < word.length(); ++i) {
        if(reversed[i] != word2[i]){
            result = false;
        }
    }
    if(result){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
