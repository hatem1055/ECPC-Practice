//https://codeforces.com/problemset/problem/96/A
#include <iostream>
using namespace std;
int main() {
    string s;
    int c;

    cin>>s;
    for(int i =0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            c++;
            if(c>=7){
                cout<<"YES";
                break;
            }
        }else{
            c = 1;
        }
    }
    if(c <7) {
        cout << "NO";
    }
    return 0;
}
