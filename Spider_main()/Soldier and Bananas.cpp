// Abdelrhman
// link : https://codeforces.com/problemset/problem/546/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k , n, w  , sum = 0;
    cin >> k >> n >> w;
    for (int i = 1 ; i <= w ; i ++)
    {
        sum += i*k;
    }
    int  x = sum - n ;
    cout << ((sum > n ) ? x : 0);

}
