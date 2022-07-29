#include <iostream>
using namespace std;

int main() {
    int n, events, available = 0;
    int countnegative = 0 , treated = 0;
    cin >> n;
    while(n < 1 || n > 1e5){
        cin >> n;
    }
    for (int i = 0; i < n; ++i) {
        cin >> events;
        if(events == -1){
            countnegative++;
            if (available > 0){
                treated++;
                available--;
            }
        } else {
            available += events;
        }
    }
    cout << countnegative - treated;
}
