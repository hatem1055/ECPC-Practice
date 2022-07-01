/*
    This Code Made by: Mahmoud M Aziz
    Date: 30/6/20222
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char d;
    string alpha[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    string txt;
    cin >> d;

    cin >> txt;
    for(char ch: txt)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(ch == alpha[i][j])
                {
                    if(d == 'R') cout << alpha[i][j-1];
                    else cout << alpha[i][j+1];
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}
