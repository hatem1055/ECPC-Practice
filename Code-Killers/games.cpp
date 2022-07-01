#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][2], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][0] == arr[j][1]){
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}