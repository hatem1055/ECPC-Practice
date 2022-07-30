#include <iostream>
using namespace std;

int main() {
    int k , n , w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; ++i) {
        sum += i*k;
    }
    if(sum - n < 0){
        cout << 0;
    } else {
        cout << sum - n;
    }
}
