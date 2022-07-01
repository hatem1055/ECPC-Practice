/*
    This Code Made by: Mahmoud M Aziz
    Date: 1/7/20222
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c;
    bool check = false;
    cin >> r >> c;
    char image[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> image[i][j];
            if(image[i][j] != 'W' && image[i][j] != 'B' && image[i][j] != 'G')
                check = true;
        }
    }
    if(check) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}
