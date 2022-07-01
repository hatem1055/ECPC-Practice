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

    int n, t;
    stringstream ss;
    string s;
    cin >> n >> t;
    if(n == 1 && t == 10)
    {
        cout << -1 << endl;
    }
    else if(t < 10)
    {
        ss << t;
        ss << setw(n-1) << setfill('0') << "";
        ss >> s;
    }
    else
    {
        ss << t;
        ss << setw(n-2) << setfill('0') << "";
        ss >> s;
    }
    cout << s << endl;
    return 0;
}
