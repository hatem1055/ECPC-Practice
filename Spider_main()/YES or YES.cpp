// Abdelrhman
// link : https://codeforces.com/contest/1703/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    int x;
    cin >> x;
    while (x--)
    {
        cin >> k;
        for (int i = 0 ; i < k.size() ; i++)
        {
            k[i] = toupper(k[i]);
        }
        if (k == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}

