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

    int n;
    cin >> n;
    bool check = true;
    string mat[n];
    for(int i = 0; i < n; i++) cin >> mat[i];
    int a = mat[0][0], b = mat[0][1];
    if(a == b)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j || i + j == n - 1)
            {
                if(mat[i][j] != a)
                {
                    check = false;
                    break;
                }
            }
            else
            {
                if(mat[i][j] != b)
                {
                    check = false;
                    break;
                }
            }
        }
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
