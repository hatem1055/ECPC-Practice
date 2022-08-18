#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,c=0;
    string s;
    vector<char> test;
    cin >> n;
    cin >> s;
    for(int i=0;i < s.size();i++){
        if(s[i]==s[i+1]){
            test.push_back(s[i]);
        }
    }
    cout << test.size();
}
