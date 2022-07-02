/*
    This Code Made by: Mahmoud M Aziz
    Date: 2/7/20222
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long l, r;
    cin >> l >> r;
    if(l%2!=0) l++;

    if(r-l <= 1) cout << -1 << endl;
    else cout << l << " " << l+1 << " " << l+2 << endl;
    return 0;
}
