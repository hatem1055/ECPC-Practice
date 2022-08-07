#include <iostream>
using namespace std;

int main() {
    int t,h,m,day,time;
    cin >> t;
    while(t--){
        cin >> h >> m;
        day = 24*60;
        time = 60*h+m;
        cout << day-time << endl;
    }
}
