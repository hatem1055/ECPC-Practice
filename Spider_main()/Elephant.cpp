// Abdelrhman
// Link : https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    while (n >= 5)
    {
        x = n / 5 ;
        n = n - (x*5);
    }
    int y = n/4;
    n = n-(y*4);
    int j = n/3;
    n = n-(j*3);
    int k = n/2;
    n = n-(k*2);
    int b = n/1;
    n = n-(b*1);

    cout << x+b+y+k+j;

}
