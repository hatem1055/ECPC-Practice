#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int up =0 ,low=0;
    cin >> s;
    for(int i=0; i < s.size();i++){
        if(isupper(s[i])){
            up++;
        }
        else{
            low++;
        }
    }
    if(low >= up){
        for_each(s.begin(), s.end(), [](char & c){
            c = tolower(c);

        });
        }
    else{
        for_each(s.begin(), s.end(), [](char & c){
            c = toupper(c);

        });
    }
    cout << s << endl;
}

