#include <iostream>
using namespace std;

int main() {
    long long t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a%b == 0){
            cout << 0 << "\n";
        } else{
            int c = a%b;
            cout << b-c << "\n";
        }
    }
}
