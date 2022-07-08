/*
    This Code Made by: Mahmoud M Aziz
    Date: 8/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 main()
{
    Aziz();
    string s;
    cin >> s;
    if(s.size() > 1)
    {
        long long res[s.size() + 1];
        for(int i = 0; i < s.size() + 1; i++) res[i] = 1;
        for(int i = 0; i < s.size(); i++)
        {
            string tmp = s;
            if(tmp[i] != '0')
            {
                tmp[i]--;
                for(int j = i+1; j < s.size(); j++) tmp[j] = '9';
                for(int j = 0; j < s.size(); j++)
                {
                    if(tmp[j] != '0') res[i] *= (tmp[j]-'0');
                }
            }
        }
        for(int k = 0; k < s.size(); k++)
        {
            if(s[k] != '0') res[s.size()] *= (s[k]-'0');
        }
        sort(res, res+s.size()+1);
        cout << res[s.size()] << endl;
    }
    else cout << s << endl;
    return 0;
}
