#include <iostream>

using namespace std;

int main(){
    int n, sum = 0, c = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > 0){
            c+= x;
        }
        else{
            if(x + c < 0){
                sum++;
            }
            else{
                c--;
            }
        }
    }
    cout << sum;
    return 0;
}