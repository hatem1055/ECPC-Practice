#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < b){
        cout << a;
        b -= a;
        cout << " " << b/2;
    } else {
        cout << b;
        a -= b;
        cout << " " << a/2;
    }

}
