#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin >> str;
    int arrSz = (str.size()/2)+1;
    int arr[arrSz];
    for(int i = 0, j = 0; i < str.size(); i+= 2, j++){
        arr[j] = str[i] - '0';
    }
    sort(arr, arr+arrSz);
    for(int i = 0; i < arrSz-1; i++){
        cout << arr[i] << '+';
    }
    cout<<arr[arrSz-1];
    return 0;
}