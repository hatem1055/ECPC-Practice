/*
    This Code Made by: Mahmoud M Aziz
    Date: 4/7/20222
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i]-'0' >= 5)
        {
            s[i] = (9 - (s[i]-'0'))+'0';
        }
    }
    if(s[0]-'0' >= 5 && s[0]-'0' <= 8) s[0] = (9 - (s[0]-'0'))+'0';
    cout << s << endl;
    return 0;
}
