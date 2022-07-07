/*
    This Code Made by: Mahmoud M Aziz
    Date: 5/7/20222
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sum = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'A')
        {
            int bf = 0, af = 0;
            for(int j = 0; j < i; j++)
            {
                if(str[j] == 'Q') bf++;
            }
            for(int k = i + 1; k < str.size(); k++)
            {
                if(str[k] == 'Q') af++;
            }
            sum += bf*af;
        }
    }
    cout << sum << endl;
    return 0;
}
