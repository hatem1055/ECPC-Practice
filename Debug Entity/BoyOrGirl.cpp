#include<iostream>
using namespace std;

int main() {
    string username,s2;
    int n;
    cin >> username;
    if (username.size() > 100) {
        cin >> username;
    }
for(int i= 0; i<username.size();i++){
    if(s2.find(username[i]) == string::npos)
    {
        s2 += username[i];
    }
}
    n = s2.length();
    if (n%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}