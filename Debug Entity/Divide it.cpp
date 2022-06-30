#include <iostream>
using namespace std;

int main(){
    int q, count;
    unsigned long long n;
    bool iterate;
    cin >> q;
    while(q > 1000 || q < 1){
        cin >> q;
    }
    while(q--) {
        count = 0;
        cin >> n;
        iterate = true;
        while(iterate) {
            if(n == 1){
                iterate = false;
            }else if(n%5 == 0){
                count++;
                n = 4*n/5;
            } else if (n%3 == 0){
                count++;
                n = 2*n/3;
            } else if (n%2 == 0){
                count++;
                n /= 2;
            } else {
                iterate = false;
            }
        }
        if(n == 1){
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
