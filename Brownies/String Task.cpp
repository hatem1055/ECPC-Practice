#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    vector <char> u;
    cin>>s;
    for(int k =0;k<s.size();k++){
    s[k] = tolower(s[k]);}

    for(int i=0 ;i<s.size(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o'&& s[i] != 'u' && s[i] != 'y' ){
            u.push_back(s[i]);
        }}
    for(int j =0;j<u.size();j++){
        cout<<"."<<u[j];
    }

    return 0;
}
