#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int countt = 0;
    string letters;
    vector<char>vec = {' ', ',', '{' , '}'};
    getline(cin, letters);
    for (int i = 0; i < letters.length(); ++i) {
        if(count(vec.begin(), vec.end(), letters[i])){
            continue;
        } else {
            vec.push_back(letters[i]);
            countt++;
        }
    }
    cout << countt;
}
