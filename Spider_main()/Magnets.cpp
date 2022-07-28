// Abdelrhman
// Link : https://codeforces.com/problemset/problem/344/A

#include <iostream>

using namespace std;

#define ll long long
#define lp(i,n,t) for(int i = n ; i <= t ; i++)
#define testcase() int i; cin >> i;

int main()
{
    int sa;
    testcase()
    {
        string arr[i];
        lp(x,0,i-1)
        {
            cin >> arr[x];
        }
        lp(x,0,i)
        {
            if (x == i)
                continue;
            if (arr[x] != arr[x+1])
            {
                sa += 1;
            }
        }
        cout << sa;
    }


}
