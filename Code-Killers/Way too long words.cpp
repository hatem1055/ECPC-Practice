#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() > 10){
            cout << s[0] << s.size() - 2 << s[s.size()-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
}