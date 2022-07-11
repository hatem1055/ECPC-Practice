#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    int countUpper = 0, countLower = 0;
    cin >> word;
    for (auto letter: word) {
        if (letter >= 'A' && letter <= 'Z'){
            countUpper++;
        } else if(letter >= 'a' && letter <= 'z'){
            countLower++;
        }
    }
    if(countUpper > countLower){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    } else{
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    cout << word;
}
