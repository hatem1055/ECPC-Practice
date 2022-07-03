#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string str;
    cin >> str;
    int a=0;
    for(int i=0 ; i < str.length();i++){
        if(str[i] == 'a'){
            a++;
        }
    }
    cout << min((int)str.length(),2*a-1) << endl;
}
