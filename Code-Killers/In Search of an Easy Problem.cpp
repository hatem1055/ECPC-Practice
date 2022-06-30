#include <iostream>
using namespace std;

int main() {
    int n,input;
    cin >> n;

    while(n > 0){
        cin >> input;
        if(input == 1){
            cout << "HARD" << endl;
            return 0;
        }
        n--;
    }
    cout << "EASY" << endl;
}
