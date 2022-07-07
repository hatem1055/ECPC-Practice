// Abdelrhman
// link : https://codeforces.com/contest/71/problem/A
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
int main()
{
    int num,y=0;
    cin >> num ;
    if ( num <= 100 && num >= 1)
    {
        int y = 0;
        string s;
        for(int i=0 ; i < num ; i++)
        {
            y =0;
            cin >> s;
            if (s.length() > 10)
            {
                for (int x = 0 ; x < s.length(); x++)
                {
                    y += 1;
                }
                cout << s[0] << y-2 << s[s.length()-1] << endl;
            }
            else
            {
                cout << s << endl;
            }
        }

    }
}
