#include <iostream>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;
    while(x > 0){
        x -= 5;
        count++;
    }
    cout << count;
}
