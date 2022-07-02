/*
    This Code Made by: Mahmoud M Aziz
    Date: 2/7/20222
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a;
    double n;
    cin >> t;
    while(t--)
    {
        cin >> a;
        n = 360.00/(180-a);
        if(n - (int)n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
