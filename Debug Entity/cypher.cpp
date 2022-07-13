#include <iostream>
using namespace std;

int main() {
    int t,n, b;
    string str;
    cin >> t;
    while(t < 1 || t > 100){
        cin >> t;
    }
    int arr[t];
    for (int i = 0; i < t; ++i) {
        cin >> n;
        while(n < 1 || n > 100){
            cin >> n;
        }
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> b;
            while(b < 1 || b > 10){
                cin >> b;
            }
            cin >> str;
            for (int k = 0; k < b; ++k) {
                if(str[k] == 'D' && arr[j] == 9){
                    arr[j] = 0;
                } else if (str[k] == 'D' && arr[j] != 9){
                    arr[j]++;
                } else if(str[k] == 'U' && arr[j] == 0){
                    arr[j] = 9;
                } else if(str[k] == 'U' && arr[j] != 0){
                    arr[j]--;
                }
            }
        }
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << ' ';
        }
        cout << endl;
    }
}
