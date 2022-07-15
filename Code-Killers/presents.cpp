#include <iostream>
using namespace std;

int main() {
    int n,p;
    cin >> n;
    int arr[10];
    for(int i=1 ; i <= n ; i++){
        cin >> p;
        arr[p] = i;
    }
    for(int i=1;i<=n;i++){
        cout << arr[i] << " ";
    }
}
