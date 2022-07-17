#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], sum = 0, stolen = 0, c = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(int i = 0; i < n; i++){
        stolen += arr[i];
        sum -= arr[i];
        if(stolen > sum){
            c = i + 1;
            break;
        }
    }
    cout << c;
}
