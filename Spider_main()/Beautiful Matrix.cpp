// Author : Abdelrhman
// Link : https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    for(int i = 1 ; i <= 5 ; ++i)
        for (int y = 1 ; y <= 5 ; ++y)
        {
            cin >> n;
            if ( n == 1)
            {
                cout << abs(y-3) + abs(i - 3) << endl;
            }
        }
}
