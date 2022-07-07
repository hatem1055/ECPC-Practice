#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> words;
    string word;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> word;
        for (int j = 0; j < word.size(); j++){
            word[j] = tolower(word[j]);
        }
        words.push_back(word);
    }
    for (string word : words){
        if (word.size() > 10){
            cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
}