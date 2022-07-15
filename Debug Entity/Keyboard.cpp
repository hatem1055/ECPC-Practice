#include <iostream>
using namespace std;

int main() {
    char keyboard[] = {'q', 'w', 'e', 'r', 't', 'y', 'u','i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j' , 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/' };
    char shift;
    string word, newWord;
    cin >> shift;
    while(shift != 'R' && shift != 'L' && shift != 'l' && shift != 'r'){
        cin >> shift;
    }
    cin >> word;
    while(word.length() > 100){
        cin >> word;
    }
    if(shift == 'R' || shift == 'r'){
        for (int i = 0; i < word.length(); ++i) {
            for (int j = 0; j < sizeof(keyboard); ++j) {
                if(word[i] == keyboard[j]){
                    newWord += keyboard[j-1];
                }
            }
        }
    } else{
        for (int i = 0; i < word.length(); ++i) {
            for (int j = 0; j < sizeof(keyboard); ++j) {
                if(word[i] == keyboard[j]){
                    newWord += keyboard[j+1];
                }
            }
        }
    }
    cout << newWord;
}
