#include <bits/stdc++.h>
using namespace std;

int main(){
    int os {0};
    cin >> os;
    vector<string> strings{};
    for(int i = 0;i < os;i++){
        string s;
        cin >> s;
        strings.push_back(s);
    }
    for(auto s : strings){
        string o {};
        for(int i = 0;i < s.size();i += 2){
            o.push_back(s[i]);
        }
        o.push_back(s[s.size() - 1]);
        cout << o << endl;
    }
}