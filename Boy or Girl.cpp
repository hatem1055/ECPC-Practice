
#include<iostream>
#include<string>
using namespace std;

int main(){
    string userName;
    int length;

    cin >> userName;
    length = userName.length();
    int count = length;

    while(length > 100){
        cout << "invalid username must be at most 100 characters, please try again: " << endl;
        cin >> userName;
        length = userName.length();
        int count = length;
    }
    for (int i = 0; i < length-1; ++i) {
        for (int j = i+1; j < length; ++j) {
                if(userName[i] == userName[j]){
                    count--;
                    break;
                }
        }
    }
    if(count%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}
