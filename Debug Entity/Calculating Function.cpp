#include <iostream>
using namespace std;

int main() {
    long long n, fn;
    cin >> n;
    if(n % 2 == 0){
        fn = n/2;
    } else {
        fn = ((n+1) / 2) * -1;
    }
    cout << fn;
}
