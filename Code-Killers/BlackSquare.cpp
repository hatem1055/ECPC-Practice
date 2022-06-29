#include <iostream>

using namespace std;

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    string str;
    cin >> str;
    int sum = 0;\
    for(char ch: str){
        sum+= arr[ch-'0'-1];
    }
    cout << sum;
    return 0;
}