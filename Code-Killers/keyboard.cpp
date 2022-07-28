#include <iostream>

using namespace std;

int main(){
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin >> ch;
    string str;
    cin >> str;
    switch (ch)
    {
    case 'R':
        for(char cha : str){
            int i = keys.find(cha);
            cout << keys[i-1];
        }
        break;
    
    case 'L':
        for(char cha : str){
            int i = keys.find(cha);
            cout << keys[i+1];
        }
        break;

    default:
        break;
    }
    return 0; 
}