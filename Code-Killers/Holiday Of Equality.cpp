#include <iostream>
#include <algorithm>
using namespace std;

int main (void)
{
    int n,i,max;

    while (cin >> n)
    {
        int arr[n],sum = 0;

        for (i=0; i<n; i++)
            cin >> arr[i];

        sort (arr,arr+i);

        max = arr[n-1];

        for (i=0; i<n-1; i++)
            sum += abs (max - arr[i]);

        cout << sum << endl;
    }

    return 0;
}
