#include <iostream>
using namespace std;

int main() {
    long long n,ans;
    cin >> n;
    if(n % 2 ==0){
        ans = n/2;
    }
    else{
        ans = ((n+1)/2)*(-1);
    }
    cout << ans;
}
