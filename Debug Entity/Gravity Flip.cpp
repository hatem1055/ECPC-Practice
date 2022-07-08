#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;
    while(number < 1 || number > 100){
        cin >> number;
    }
    int column[number], row = 0;
    for (int i = 0; i < number; ++i) {
        cin >> column[i];
        while (column[i] < 1 || column[i] > 100) {
            cin >> column[i];
        }
    }
    sort(column,column+number);
    for (int i = 0; i < number; ++i) {
        cout << column[i] << " ";
    }
}
