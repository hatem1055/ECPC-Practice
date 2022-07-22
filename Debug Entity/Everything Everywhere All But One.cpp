#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int integers[n];
        int sum = 0;
        bool acceptance = false;
        for (int i = 0; i < n; ++i) {
            cin >> integers[i];
            sum += integers[i];
        }
        for (int i = 0; i < n; ++i) {
            if(float(sum - integers[i])/(n-1) == float(integers[i])){
                acceptance = true;
            }
        }
        if(acceptance){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}

