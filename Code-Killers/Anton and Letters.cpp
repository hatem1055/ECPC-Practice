#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string letters;
    int c=0;
    getline(cin,letters);
    sort(letters.begin(),letters.end());
    for(int i=0;i<letters.size();i++){
        if(letters[i] =='{}' || letters[i] == ',' || letters[i] == ' '){
            continue;
        }
        else{
            if(letters[i] != letters [i+1]){
                c++;
            }
        }
    }
    cout << c-2 << endl;

}
