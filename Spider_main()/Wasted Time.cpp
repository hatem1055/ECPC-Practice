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
    int n, k;
    cin >> n >> k;
    int x[n], y[n];
    long double sum = 0;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for(int i = 0; i < n-1; i++)
    {
        sum += sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2));
    }
    cout << fixed << setprecision(9) << (sum/50)*k << endl;
    return 0;
}
