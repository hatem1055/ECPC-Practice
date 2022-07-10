// Abdelrhman
// link : https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    char ch;
    int anton = 0,danik = 0;
    cin >> y;
    while(y--)
    {
        cin >> ch;
    if ( ch == 'A')
            anton+=1;
    else if ( ch == 'D')
            danik+=1;
    }

    if( anton < danik)
        cout << "Danik";
    else if ( anton > danik)
        cout << "Anton";
    else
        cout << "Friendship";
}
