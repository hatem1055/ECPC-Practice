#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int first, mid , last;
    cin >> a >> b >> c;
    if(a < b && a < c){
        first = a;
        if(b < c){
            mid = b;
            last = c;
        } else {
            mid = c;
            last = b;
        }
    } else if(b < a && b < c){
        first = b;
        if(a < c){
            mid = a;
            last = c;
        } else {
            mid = c;
            last = a;
        }
    } else {
        first = c;
        if(b < a){
            mid = b;
            last = a;
        } else {
            mid = a;
            last = b;
        }
    }
    cout << (last - mid) + (mid - first);
}
