#include <iostream>
using namespace std;

int main() {
    int n , k, count = 0;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    for (int i = 0; i < n; ++i) {
        if(array[i] >= array[k-1] && array[i] > 0){
            count++;
        }
    }
    cout << count;
}
