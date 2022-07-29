#include <iostream>
using namespace std;

int main() {
    int n, size;
    cin >> n;
    while(n < 1 || n > 100){
        cin >> n;
    }
    string word;
    while(n--){
        cin >> word;
        size = word.length();
        if(size > 10){
            cout << word[0] << size-2 << word[size-1] << endl;
        } else {
            cout << word << endl;
        }
    }
}
