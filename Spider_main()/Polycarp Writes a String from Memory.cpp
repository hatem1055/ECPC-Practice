/*
    This Code Made by: Mahmoud M Aziz
    Date: 11/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
inline bool check(char* s, char ch)
{
    for(int i = 0; i < 3; i++)
    {
        if(s[i] == ch) return true;
    }
    return false;
}
int main()
{
    Aziz();
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        char letters[] = {'A', 'A', 'A'};
        int k = 0, c = 0;
        for(int i = 0; i < str.size();)
        {
            if(!check(letters, str[i]))
            {
                letters[k] = str[i];
                k++;
            }
            if(k < 3 && i == str.size()-1)
            {
                c++;
                break;
            }
            i++;
            if(k == 3)
            {
                while(check(letters, str[i])) {i++;}
                k = 0;
                letters[0] = letters[1] = letters[2] = 'A';
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
