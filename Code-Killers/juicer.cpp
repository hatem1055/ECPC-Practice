#include <iostream>

using namespace std;

int main(){
    long long n, b, d, sum = 0, waste = 0;
    cin >> n;
    cin >> b;
    cin >> d;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x <= b){
            sum+= x;
        }
        if(sum > d){
            sum = 0;
            waste++;
        }
    }
    cout << waste;
    return 0;
}