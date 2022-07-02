/*
    Author: Nourhan El-sayed
    problem: https://codeforces.com/problemset/problem/228/A
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4], arr2[4]={0}, shoe = 0;
    for (int i =0; i<4 ;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = i+1; j < 4 ; j++)
        {
            if (arr[i] == arr[j])
            {
                arr2[i]++;
            }
        }
    }
    int n = 1;
    shoe = arr2[0];
    while (n < 4)
    {
        if (arr2[n] > shoe)
        {
            shoe = arr2[n];
        }
        n++;
    }

    cout << shoe;
    return 0;
}
