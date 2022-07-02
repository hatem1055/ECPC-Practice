/*
    This Code Made by: Mahmoud M Aziz
    Date: 2/7/20222
*/

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long double d, h, v, e;
    cin >> d >> h >> v >> e;
    long double area = PI*pow(0.5*d,2);
    if(v/area <= e) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << fixed  << setprecision(12) << h/((v/area)-e) << endl;
    }
    return 0;
}
