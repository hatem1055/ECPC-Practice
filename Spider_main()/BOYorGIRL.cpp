/*
    Author: Nourhan El-sayed
    problem: https://codeforces.com/problemset/problem/236/A
*/
#include <iostream>

using namespace std;

int main()
{
    string s, s2;
    int n = 0;
    cin >> s;
    for(int i = 0 ; i < s.length(); i ++)
    {
        if(s2.find(s[i]) == string::npos)
        {
            s2 += s[i];
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
    return 0;
}
