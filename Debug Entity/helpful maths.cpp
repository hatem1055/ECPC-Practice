#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len;
    while(s.length() < 1 || s.length() > 100){
        cin >> s;
    }
    len = s.length();
    char arr[(len/2)+1];
    for (int i=0; i<len; i++){
        if (s[i] != '+'){
            arr[((i+2)/2)-1] = s[i];
        }
    }
    sort(arr,arr+(len/2)+1);
    for (int i = 0; i < len/2 +1; ++i) {
        if(i != len/2){
            cout << arr[i] << "+";
        } else {
            cout << arr[i];
        }
    }
}
