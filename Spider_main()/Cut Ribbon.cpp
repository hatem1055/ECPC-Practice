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

    int n, a, b, c, num = 0;
    cin >> n >> a >> b >> c;
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            int currlen = a*i + b*j;
            int rem = n - currlen;
            if(rem < 0 || rem % c != 0) continue;
            int k = rem/c;
            num = max(num, i+j+k);
        }
    }
    cout << num << endl;
    return 0;
}
