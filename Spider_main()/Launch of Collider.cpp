/*
    This Code Made by: Mahmoud M Aziz
    Date: 4/7/20222
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n;

    cin >> n >> s;
    long long arr[n], tmp = 1e9;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == 'R' && s[i+1] == 'L')
            tmp = min(tmp, (arr[i+1]-arr[i])/2);
    }
    if(tmp == 1e9) cout << -1 << endl;
    else cout << tmp << endl;
    return 0;
}
