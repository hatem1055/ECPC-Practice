#include <iostream>
using namespace std;

int main() {
    int year;
    string s;
    cin >> year;
    while(true){
        year++;
        s= to_string(year);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout << s << endl;
            break;
        }
    }
}
