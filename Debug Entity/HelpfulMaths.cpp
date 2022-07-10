#include<iostream>
#include<string>
#include <vector>

using namespace std;

int main() {
    string calculation;
    vector<char> vec;
    cin >> calculation;
    if (calculation.size() == 1) {
        cout << calculation;
    } else {
        for (char i: calculation) {
            if (i == '1') {
                vec.push_back('1');
                vec.push_back('+');
            }
        }
        for (char i: calculation) {
            if (i == '2') {
                vec.push_back('2');
                vec.push_back('+');
            }
        }
        for (char i: calculation) {
            if (i == '3') {
                vec.push_back('3');
                vec.push_back('+');
            }
        }
        if(vec[vec.size()-1]=='+') {
            vec.pop_back();
        }
    }
    for(char x : vec){
        cout<<x;
    }
}