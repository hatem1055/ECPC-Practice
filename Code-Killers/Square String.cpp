#include <iostream>
using namespace std;

void run(){
    string s;
    cin >> s;
    int length = s.length();
    if(length % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    for(int i=0;i < length/2;i++){
        if(s[i] != s[i + length/2]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        run();
    }
}
