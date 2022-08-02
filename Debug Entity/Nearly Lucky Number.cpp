#include <iostream>
using namespace std;

int main() {
    long long num, count = 0;
    cin >> num;
    while(num != 0){
        if(num%10 == 4 || num%10 == 7){
            count++;
        }
        num /= 10;
    }
    if(count == 4 || count == 7){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
