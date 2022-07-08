#include <iostream>
using namespace std;

void domino(){

    int n;
    cin >> n;
    char s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    char letter[n];
    for(int i = 0; i < n; i++){
        if(s[i] == 'R')
            letter[i] = 'R';

        else if(s[i] == 'L')
            letter[i] = 'L';

        else if(s[i] == 'U')
            letter[i] = 'D';

        else if(s[i] == 'D')
            letter[i] = 'U';
    }

    for(int i = 0; i < n; i++){

        cout << letter[i];
    }

    cout << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--){

        domino();
    }

}