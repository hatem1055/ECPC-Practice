#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int t; 
    cin >> t;
    while(t--){
        int x, y;
        cin >> x;
        cin >> y;
        x--;
        if(x == 0){
            arr[x+1] += (arr[x] - y);
            arr[x] = 0;
        }
        else if(x == n-1){
            arr[x-1] += (y - 1);
            arr[x] = 0;
        }
        else{
            arr[x+1] += (arr[x] - y);
            arr[x-1] += (y - 1);
            arr[x] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}