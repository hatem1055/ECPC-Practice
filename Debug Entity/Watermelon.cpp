#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;
    while(weight < 1 || weight > 100){
        cin >> weight;
    }
    if(weight % 2 == 0 && weight > 2){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
