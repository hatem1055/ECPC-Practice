#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int c=1;
    while(true){
        int moves=5;
        if(x > moves){
            x = x - moves;
            moves--;
            c++;
        }
        else{
            cout << c << endl;
            break;
        }
    }
}
