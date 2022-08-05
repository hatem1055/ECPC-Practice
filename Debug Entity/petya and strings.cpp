#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string string1, string2;
    cin >> string1 >> string2;
    while(string1.length() < 1 || string1.length() > 100 || string2.length() < 1 || string2.length() > 100 || string2.length() != string1.length()){
        cin >> string1;
        cin >> string2;
    }
    transform(string1.begin(), string1.end(), string1.begin(), :: tolower);
    transform(string2.begin(), string2.end(), string2.begin(), :: tolower);
    if (string1 == string2){
        cout << 0;
    }
    else if(string1 < string2){
        cout << -1;
    }
    else if (string1 > string2){
        cout << 1;
    }
}
