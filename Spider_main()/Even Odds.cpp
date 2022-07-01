/*
    This Code Made by: Mahmoud M Aziz
    Date: 30/6/20222
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, k, tmp;
    cin >> n >> k;
    if(k <= ceil(n/2.00))
    {
        tmp = 1;
        tmp += 2*(k-1);
    }
    else
    {
        tmp = 2;
        tmp += 2*(k-1-ceil(n/2.00));
    }
    cout << tmp << endl;
    return 0;
}
