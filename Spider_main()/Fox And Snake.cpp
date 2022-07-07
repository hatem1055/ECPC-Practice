// Abdelrhman
// link : https://codeforces.com/problemset/problem/510/A
#include <iostream>

using namespace std;
int main()
{
    int n,m,h;
    cin >> n >> m;
    for (int i = 1; i <= n ; i+=2)
    {
        for (int y = 0 ; y < m ; y++)
        {
            cout << '#' ;
        }
        cout << endl;
        if ( i == n )
        {
            continue;
        }
        h++;
        if (h % 2 == 1)
        {
            for (int x = 0 ; x < m-1 ; x++)
            {
                cout << '.' ;
            }
            cout << "#";
        }
        else
        {
            cout << "#";
            for (int x = 0 ; x < m-1 ; x++)
            {
                cout << '.' ;
            }
        }
        cout << endl;
    }

}
