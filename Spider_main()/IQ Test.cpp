/*
    This Code Made by: Mahmoud M Aziz
    Date: 5/7/20222
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s[4];
    for(int i = 0; i < 4; i++) cin >> s[i];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int c1 = 0, c2 = 0;
            for(int x = i; x <= i+1; x++)
            {
                for(int y = j; y <= j+1; y++)
                {
                    if(s[x][y] == '.') c1++;
                    else c2++;
                }
            }
            if(abs(c1-c2) == 2 || abs(c1-c2) == 4)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
