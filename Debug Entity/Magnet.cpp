#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    cin >> n;
    while(n < 1 || n > 100000){
        cin >> n;
    }
    int magnet[n-1];
    cin >> magnet[0];
    for (int i = 1; i < n; ++i) {
        cin >> magnet[i];
        if(magnet[i] != magnet[i-1]){
            count++;
        }
    }
    cout << count;
}
