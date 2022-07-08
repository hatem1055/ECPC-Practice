// Abdelrhman
// link : https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int inside = 0,outside = 0,counter = 0;
    int n,a,b;
    cin >> n;
    int capacity[n];
    for(int i = 0 ; i < n; i ++)
    {
        cin >> a >> b;
        outside += abs( a);
        inside = inside - (a - b);
        capacity[counter] = inside;
        counter++;
    }
    sort(capacity,capacity+n);
    reverse(capacity,capacity+n);
    cout << capacity[0] ;
}
