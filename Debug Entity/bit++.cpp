#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string operation;
    while(n--){
        cin >> operation;
        if(operation[0] == '+' || operation[1] == '+' || operation[2] == '+'){
            count++;
        } else {
            count--;
        }
    }
    cout << count;
}
