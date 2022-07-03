/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long x, y, a[5] = {0}, b[5] = {0};
    cin >> x >> y;
    for(int i = 1; i <= x; i++)
        a[i%5]++;

    for(int i = 1; i <= y; i++)
        b[i%5]++;
    cout << a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1] << endl;
    return 0;
}
