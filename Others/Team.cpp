#include <iostream>

using namespace std;

int main(){
    int n, countOnes = 0 , countProblems = 0;
    int Petya, Vasya, Tonya;
    cin >> n;
    while(n > 1000 || n < 1){
        cin >> n;
    }
    for(int i = 0; i < n; ++i) {
        cin >> Petya >> Vasya >> Tonya;
        if(Petya + Vasya + Tonya >= 2){
            countProblems++;
        }
    }
    cout << countProblems;
}
