#include <iostream>
#include<cmath>
#include <algorithm>
#include<set>
#include<string>
#include <string.h>
using namespace std;





int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int people = 0;
        if (b > a)
        {
            people++;
        }
        if (c > a)
        {
            people++;
        }
        if (d > a)
        {
            people++;
        }
        cout << people << endl;
    }
}


