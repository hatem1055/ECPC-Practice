// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string first, second ;
    int Fsum=0,Ssum=0;
    cin >> first >> second;
    for(int i = 0 ; i < first.length() ; i++)
    {
        first[i] = (tolower(first[i]));
    }
    for(int i = 0 ; i < second.length() ; i++)
    {
        second[i] = (tolower(second[i]));
    }
    if (first < second)
        cout << "-1";
    else if (first > second)
        cout << "1";
    else
        cout << "0";
    return 0;
}

