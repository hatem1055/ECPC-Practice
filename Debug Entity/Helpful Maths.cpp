#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string equation;
    int size;
    cin >> equation;
    while(equation.length() < 1 || equation.length() > 100){
        cin >> equation;
    }
    size = equation.length();
    char numbers[size];
    for (int i = 0; i < size; ++i) {
        if(equation[i] != '+'){
            numbers[i] = equation[i];
        }
    }
    sort(numbers, numbers+size);
    for (int i = size/2; i < size; ++i) {
        if(i != size-1){
            cout << numbers[i] << "+";
        } else {
            cout << numbers[i];
        }
    }
}
