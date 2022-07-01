/*
    This Code Made by: Mahmoud M Aziz
    Date: 28/6/20222
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
    int num[n+1] = {0};
    bool check_num[n+1] = {0};
    for(int i = 1; i <= n; i++) cin >> num[i];

    int c = n;
    for(int i = 1; i <= n; i++)
    {
        check_num[num[i]] = true;

        while(check_num[c])
        {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }

    return 0;
}
