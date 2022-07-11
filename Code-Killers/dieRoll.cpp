#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x;
    cin >> y;
    int nom = max(x, y);
    nom = 7 - nom;
    int den = 6;
    for(int i = nom; i > 0; i--){
        if(den%i == 0 && nom % i == 0){
            nom/= i;
            den /= i;
            break;
        }
    }
    cout << nom << '/' << den;
    return 0;
}