// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main()
{
    int n, p, v, t, s=0;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            s += 1;
        }
    }
    cout << s << endl;
    return 0;
}

