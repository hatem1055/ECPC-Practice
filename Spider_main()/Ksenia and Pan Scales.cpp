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

    string s1,s2, v;
    getline(cin, s1, '\|');
    getline(cin, s2, '\n');
    getline(cin, v);

    while(s1.size() != s2.size())
    {
        if(s1.size() > s2.size()) s2 += v[0];
        else s1 += v[0];
        v.replace(0,1,"");
        if(v.size() == 0 && s1.size() != s2.size())
        {
            cout << "Impossible" << endl;
            return 0;
        }
    }
    if((int)v.size() % 2 != 0) cout << "Impossible" << endl;
    else
    {
        for(int i = 0; i < v.size()/2; i++)
        {
            s1 += v[i];
            s2 += v[i+v.size()/2];
        }
        cout << s1 << "|" << s2 << endl;
    }
    return 0;
}
