#include <iostream>
using namespace std;

int main(){
    int M, N, result;
    cin >> M >> N;
    result = M * N;
    if(result % 2 == 0){
        cout << result / 2;
    } else {
        cout << (result - 1) / 2;
    }
}
