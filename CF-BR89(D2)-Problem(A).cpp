#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<char>vowels = {'A','E','I','O','U','Y'};
    string text{};
    cin>>text;
    string result = "";
    bool isVowel = false;
    for(int i=0;i<text.size();i++){
        isVowel = false;;
        for(int j=0;j<6;j++){
            if(char(toupper(text[i]))==vowels[j]){
                isVowel = true;
                break;
            }
        }
        if(!isVowel){
            result.push_back('.');
            result.push_back(tolower(text[i]));

        }
    }
    cout<<result<<endl;

    return 0;
}
