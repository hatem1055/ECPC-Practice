/*
    This Code Made by: Mahmoud M Aziz
    Date: 5/7/20222
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, y;
    long long sum = 0, k;
    cin >> n >> k;
    while(n--)
    {
        cin >> x >> y;
        sum += (y-x+1);
    }
    cout << ceil(sum*1.00/k)*k-sum << endl;
    return 0;
}
