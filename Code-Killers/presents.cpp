#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x-1] = i+1;
    }
    for(int i: arr){
        cout << i << ' ';
    }
    return 0;
}