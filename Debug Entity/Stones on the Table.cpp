#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string stones;
    cin >> stones;
    int array[n-1];
    for (int i = 0; i < n; ++i) {
        array[i] = stones[i];
    }
    for (int i = 0; i < n; ++i) {
        if(array[i] == array[i+1]){
            count++;
        }
    }
    cout << count;
}
