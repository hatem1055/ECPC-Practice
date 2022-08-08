#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if (n==2){
            cout << "1" << endl;
            continue;
        }
        if(n==1){
            cout << "2" << endl;
            continue;
        }
        if(n%3==0){
            cout << n/3 << endl;
            continue;
        }
        cout << n/3+1 << endl;
    }
}
