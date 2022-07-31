#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    /*vector<char> vec = {'A', 'E', 'I', 'O', 'U', 'Y'};
    string s;
    cin >> s;
    for(int i=0;i < s.size();i++){
        s[i] = toupper(s[i]);
    }
    for(int i=s.size();i >0;i--){
        if(s[i] == '?' || s[i] == ' '){
            continue;
        }
        if(find(vec.begin(),vec.end(),s[i])==vec.end()){
            cout << "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }
    }*/
    string s;
    getline(cin,s);
    for(int i = s.size();i >=0;i--){
        char c = tolower(s[i]);
        if(!(c >= 'a' && c <= 'z')){
            continue;
        }
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
            cout << "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }
    }
}
