#include <iostream>
using namespace std;

int main() {
    int n;
    int countA = 0, countD = 0;
    cin >> n;
    while(n < 1 || n > 100000){
        cin >> n;
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if(s[i] == 'A'){
            countA++;
        } else {
            countD++;
        }
    }
    if(countD > countA){
        cout << "Danik" << endl;
    } else if(countA > countD){
        cout << "Anton" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}
