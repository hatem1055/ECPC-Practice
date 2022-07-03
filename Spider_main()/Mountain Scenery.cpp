/*
    This Code Made by: Mahmoud M Aziz
    Date: 3/7/20222
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
    int arr[2*n+1];
    for(int i = 0; i < 2*n+1; i++) cin >> arr[i];
    for(int i = 1; i < 2*n; i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            if(k)
            {
                if(arr[i]-1 > arr[i-1] && arr[i]-1 > arr[i+1])
                {
                    arr[i]--;
                    k--;
                }
            }
            else
                break;
        }
    }
    for(int i = 0; i < 2*n+1; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
