// Abdelrhman
// Link : https://codeforces.com/problemset/problem/136/A

#include <iostream>

using namespace std;

int main()
{
    int n , x;
    cin >> n;
    int arr[100];
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}
