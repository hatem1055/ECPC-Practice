#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, p, q, count = 0;
    int arr[250];
    cin >> n >> p;
    for (int i = 0; i < p; ++i) {
        cin >> arr[i];
    }
    cin >> q;
    for (int i = p; i < (p+q); ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+p+q);
    for (int i = 0; i < p+q; ++i) {
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    if(n == count){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

}
