#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    long long arr[n];
    if(n > 1)
        sum = n - 2;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = 1; i < n - 1; i ++){
        if(arr[i] == arr[0]){
            sum--;
        }
        else if(arr[i] == arr[n-1]){
            sum--;
        }
    }
    cout << sum;
    return 0;
}