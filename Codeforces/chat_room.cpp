#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string desired_word {'h','e','l','l','o'};
    int current_char_index = 0;
    string typed_word;
    cin>>typed_word;
    for(char c : typed_word){
        char desired_char = desired_word[current_char_index];
        if (c == desired_char){
            current_char_index++;
            if(current_char_index >= desired_word.size()){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
