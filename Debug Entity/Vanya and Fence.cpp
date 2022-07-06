#include <iostream>
using namespace std;

int main() {
    int number, height,eachHeight, count = 0;
    cin >> number >> height;
    while(number < 1 || number > 1000 || height < 1 || height > 1000){
        cin >> number >> height;
    }
    while (number--){
        cin >> eachHeight;
        if(eachHeight > height){
            count += 2;
        } else {
            count += 1;
        }
    }
    cout << count << endl;
}

