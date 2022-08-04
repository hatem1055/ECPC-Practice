#include <iostream>
using namespace std;

int main() {
    int n, opinion;
    bool hard = false;
    cin >> n;
    while(n--){
        cin >> opinion;
        if(opinion == 1){
            hard = true;
        }
    }
    if(hard){
        cout << "HARD";
    } else {
        cout << "EASY";
    }
}
