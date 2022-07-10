#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    for(int i =0; i < 10 ;i++){
        if(a <= b){
            a=a * 3;
            b=b * 2;
        }
        else{
            cout << i << endl;
            break;
        }
    }
}
