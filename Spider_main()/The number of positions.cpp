/*
    This Code Made by: Mahmoud M Aziz
    Date: 7/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 main()
{
    Aziz();
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n-a, b+1) << endl;
    return 0;
}
