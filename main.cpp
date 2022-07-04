#include <iostream>
using namespace std;
int div_ceil(int x, int y) {
    return x / y + (x % y > 0);
}
int main() {
    double dist;
    cin>>dist;
    cout<<div_ceil(dist,5);
}
