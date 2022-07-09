/*
    This Code Made by: Mahmoud M Aziz
    Date: 9/7/20222
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void Aziz()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 main()
{
    Aziz();
    int n, k, c = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]+=k;
        if(arr[i] <= 5) c++;
    }
    cout << c/3 << endl;
    return 0;
}
