#include <iostream>

using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int x = k, i = 1;
    while(((x % 10) != r) && (x % 10) != 0){
        x+= k;
        i++;
    }
    cout << i;
    return 0;
}