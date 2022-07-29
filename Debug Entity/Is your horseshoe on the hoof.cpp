#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int horseshoes[4];
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> horseshoes[i];
    }
    sort(horseshoes, horseshoes+4);
    for (int i = 0; i < 3; ++i) {
            if(horseshoes[i] == horseshoes[i+1]){
                count++;
            }
    }
    cout << count;
}
