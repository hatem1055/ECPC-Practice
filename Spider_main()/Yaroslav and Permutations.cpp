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

    int n;
    cin >> n;
    int arr[n], num[1001] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        num[arr[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(num[arr[i]] > ceil(n*1.00/2))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
