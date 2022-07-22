// Abdelrhman
// Link : https://codeforces.com/problemset/problem/677/A

#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    for(int i = 0 ; i < str1.length() ; i++)
    {
        if (str2[i] == str1[i])
        {
            cout << str1[i];
        }
        else
            cout << "1";
    }
}
