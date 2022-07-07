#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.size(); i++) {
        s1[i] = tolower(s1[i]);
    }
    for (int i = 0; i < s2.size(); i++) {
        s2[i] = tolower(s2[i]);
    }
    int res = s1.compare(s2);
    if (res == 0)
        cout << "0" << endl;
    else if(res < 0)
        cout << "-1";
    else
        cout<<"1";
}

