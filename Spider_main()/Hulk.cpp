// Abdelrhman
// Link : https://codeforces.com/problemset/problem/705/A

#include <iostream>

using namespace std;

#define ll long long
#define lp(i,n,t) for(int i = n ; i <= t ; i++)
#define testcase() int i; cin >> i;

int main()
{
    testcase()
    {
        lp(x,1,i)
        {
            if ( x == i )
            {
                if (x % 2 == 0 )
                    cout << "I love it";
                else
                    cout << "I hate it";
                continue;
            }
                if (x % 2 == 0 )
                    cout << "I love that ";
                else
                    cout << "I hate that ";

        }
    }
}
