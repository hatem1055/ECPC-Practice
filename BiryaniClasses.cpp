// Code link --> https://www.codechef.com/submit/BIRYANI
// Author: Nada Mohammed

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int x,y;

    while(T--){
        cin >> x >> y;
        int totalCost;
        totalCost = x*y;
        cout << totalCost << endl;
    }
    return 0;
}