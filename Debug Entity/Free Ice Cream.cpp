#include <iostream>
using namespace std;

int main() {
    long long n, x, count = 0, d;
    char choice;
    cin >> n >> x;
    while(n < 1 || n > 1000 || x < 0 || x > 1e9){
        cin >> n >> x;
    }
    for (int i = 0; i < n; ++i) {
       cin >> choice >> d;
       if(choice == '+'){
           x += d;
       } else if(choice == '-' && (x-d >= 0)){
           x -= d;
       } else{
           count++;
       }
    }
    cout << x << " " << count;
}
