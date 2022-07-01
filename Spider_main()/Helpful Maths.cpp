// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[100],x=0;
    string s="";
    cin >> s;
    for (int i = 0; i < s.length() ; i ++)
    {
        if(isdigit(s[i]))
        {
            arr[x] = s[i]-'0';
            x++;
        }
    }
    sort(arr,arr+x);
    for (int i=0 ; i < x ; i++)
    {
        cout << arr[i];
        if (i == x-1 )
        {
            break;
        }else
        {
            cout<<"+";
        }
    }
}

