#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        int sz = str.size();
        if(sz > 10){
            cout << str[0] << sz-2 << str[sz-1] << endl;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}