// Abdelrhman
// Link : https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0 ; i < str.length() ; i++)
    {
            if (str[i] == '-')
            {
                if (str[i+1] == '.')
                {
                    cout << "1";
                    i++;
                }
                else if (str[i+1] == '-')
                {
                    cout << "2";
                    i++;
                }
            }
            else if (str[i] == '.')
            {
                cout << "0";
            }

    }
}
