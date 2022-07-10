/*
    This Code Made by: Mahmoud M Aziz
    Date: 10/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 main()
{
    Aziz();
    int n, index = 1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0) cout << arr[i]/2 << endl;
        else
        {
            cout << (arr[i]+index)/2 << endl;
            index *= -1;
        }
    }
    return 0;
}
