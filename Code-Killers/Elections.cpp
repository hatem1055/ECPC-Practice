#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,count=0;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << max(0,max(b,c) + 1 - a) << ' ';
        cout << max(0,max(a,c) + 1 - b) << ' ';
        cout << max(0,max(a,b) + 1 - c) << ' ' << endl;
    }
}
