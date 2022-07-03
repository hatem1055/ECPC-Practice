#include <iostream>

using namespace std;

int main(){
    int sum = 0, arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            if(arr[i] == arr[j]){
                sum++;
                break;
            }
        } 
    }
    cout << sum;
    return 0;
}