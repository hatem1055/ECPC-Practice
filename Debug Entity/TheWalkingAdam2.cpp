#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    string input;
    vector<string> vec;
    for (int i = 0; i < T; i++) {
        cin >> input;
        vec.push_back(input);
    }

    for (string word: vec) {
            int m = 0;
        int n = 0;
        for (int k = 0; k < word.size(); k++) {
            if (word[k] == 'D') {
                cout<<k<<endl;
                break;
            }

         else if (word[k]!='D'){
             n++;
            }
        }
        if(n==word.size()) {
            cout << word.size() << endl;
        }
        }
}