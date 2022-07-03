/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

int r1, r2, c1, c2, d1, d2;

bool check(int a, int b, int c, int d)
{
    return ((a+b==r1)&&(c+d==r2)&&(b+c==d2)&&(a+d==d1)&&(a+c==c1)&&(b+d==c2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for(int a1 = 1; a1 < 10; a1++)
    {
        for(int a2 = 1; a2 < 10; a2++)
        {
            if(a1 == a2) continue;
            for(int a3 = 1; a3 < 10; a3++)
            {
                if(a1 == a3 || a2 == a3) continue;
                for(int a4 = 1; a4 < 10; a4++)
                {
                    if(a1 == a4 || a2 == a4 || a3 == a4) continue;
                    if(check(a1,a2,a3,a4))
                    {
                        cout << a1 << " " << a2 << endl;
                        cout << a3 << " " << a4 << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
