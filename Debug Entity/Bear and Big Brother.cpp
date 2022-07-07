#include <iostream>
using namespace std;

int main() {
    int weight1, weight2;
    cin >> weight1 >> weight2;
    while(weight2 < weight1){
        cin >> weight1 >> weight2;
    }
    int count = 0;
    while(weight2 >= weight1){
        weight1 *= 3;
        weight2 *= 2;
        count++;
    }
    cout << count << endl;
}

