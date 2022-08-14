#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[a],max=0,min=100,max2,min2;
    for(int i=0;i < a;i++){
        cin >> arr[i];
        if(arr[i] > max){
            max=arr[i];
            max2=i;
        }
        if(arr[i] <= min){
            min=arr[i];
            min2=i;
        }
    }
    if(max2 > min2){
        min2++;
    }
    cout << max2 + (a-1) - min2;
}
