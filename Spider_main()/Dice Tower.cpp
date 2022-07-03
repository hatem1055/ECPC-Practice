/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, f;
    bool check = true;
    cin >> n >> f;
    int s1[n], s2[n];
    for(int i = 0; i < n; i++)
    {
        cin >> s1[i] >> s2[i];
        if(s1[i] == f || s1[i] == 7-f || s2[i] == f || s2[i] == 7-f)
            check = false;
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
