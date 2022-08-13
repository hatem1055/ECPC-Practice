#include <iostream>
using namespace std;

int main() {
    int n;
    string text;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if(i % 2 != 0){
            text += "I hate ";
        } else {
            text += "I love ";
        }
        if(i != n){
            text += "that ";
        } else {
            text += "it";
        }
    }
    cout << text;
}
