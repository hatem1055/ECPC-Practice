#include <iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    if(a == b){
        cout << -1;
    }
    else if(a.length() > b.length()){
        cout << a.length();
    }
    else if(a.length() < b.length()){
        cout << b.length();
    }
    else{
        cout << a.length();
    //     int longest = 0, i = 0;
    //     for(char ch : b){
    //         if(a[i] == ch){
    //             i++;
    //         }
    //         else{
    //             longest++;
    //         }
    //     }
    }
    return 0;
}