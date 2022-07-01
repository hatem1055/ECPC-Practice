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

    int n;
    bool check = true;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = n-1; i >= 0; i--)
    {
        cin >> arr1[i] >> arr2[i];
        if(arr1[i] != arr2[i]) check = false;
    }

    if(check)
    {
        sort(arr2, arr2+n);
        for(int i = 0; i < n; i++)
        {
            if(arr1[i] != arr2[i])
            {
                cout << "unrated" << endl;
                return 0;
            }
        }
        cout << "maybe" << endl;
    }
    else
    {
        cout << "rated" << endl;
    }
    return 0;
}
