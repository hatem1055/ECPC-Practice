// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/1512/A

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s=0,a;
    cin >> s;
    for(int x = 0 ; x < s ; x++)
    {
        cin >> a;
        int arr[a] = {};
        for(int i = 0 ; i < a ; i++)
        {
            cin >> arr[i];
        }
        for(int x = 0 ; x < a ; x++)
        {
            int checked = 0;
            for (int i = 0 ; i < a ; i++)
            {
                if(arr[x] != arr[i])
                {
                    checked += 1;
                    if (checked > 1)
                    {
                        cout << x+1 << endl;
                        break;
                    }
                }
            }
        }

    }
}

