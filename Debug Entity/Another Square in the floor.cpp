#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, x, y;
    vector<int> area;
    cin >> T;
    while(T--){
        cin >> x >> y;
        if(x >= y){
            x *= x;
            area.push_back(x);
        } else {
            y *= y;
            area.push_back(y);
        }
    }
    for (int i = 0; i < area.size(); ++i) {
        cout << area[i] << "\n";
    }
}
