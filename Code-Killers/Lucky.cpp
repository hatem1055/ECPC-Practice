#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    while(n1--){
        string numbers;
        cin >> numbers;
        int a = numbers[0] - '0',b = numbers[1] - '0',c = numbers[2] - '0';
        int d = numbers[3] - '0',e = numbers[4] - '0',f = numbers[5] - '0';
        if(a + b + c == d + e + f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
