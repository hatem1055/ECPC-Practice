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
    string teams[n];
    for(int i = 0; i < n; i++) cin >> teams[i];
    sort(teams, teams+n);
    string a = teams[0], b = teams[n-1];
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(teams[i] == a) c1++;
        else c2++;
    }
    if(c1 > c2) cout << a << endl;
    else cout << b << endl;
    return 0;
}
