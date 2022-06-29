#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i =0;i < str.size();i++){
        if(islower(str[0])){
            str[0] = toupper(str[0]);
            cout << str;
            break;
        }
        else{
            cout << str;
            break;
        }
    }
}

