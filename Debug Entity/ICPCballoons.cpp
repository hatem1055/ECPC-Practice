#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t < 0 || t > 100) {
        cin >> t;
    }
    for (int i = 0; i < t; i++) {
        int m = 0, n;
        string s;
        cin >> n;
        cin >> s;
        vector<char> vec;
        for (char i: s) {
            vec.push_back(i);
            int cnt = count(vec.begin(), vec.end(), i);
            if (cnt == 1) {
                m += 2;
            } else {
                m += 1;
            }
        }
        cout<<m<<endl;
    }
}