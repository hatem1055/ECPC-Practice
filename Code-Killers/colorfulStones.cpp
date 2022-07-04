#include <iostream>

using namespace std;


int main(){
    int s = 0;
    string str1, str2;
    cin >> str1;
    cin >> str2;
    for(int i = 0; i < str2.length(); i++){
        if(str2[i] == str1[s]){
            s++;
        }
    }
    cout << s + 1;
    return 0;
}