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

    int n, m;
    cin >> n >> m;
    for(int i = n+1; ;i++)
    {
        int counter = 0;
        for(int j = 1; j <= sqrt(i); j++)
        {
            if(i % j == 0) counter++;
        }
        if(counter == 1)
        {
            if(i == m) cout << "YES" << endl;
            else cout << "NO" << endl;

            break;
        }
    }
    return 0;
}
