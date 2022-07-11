//https://codeforces.com/contest/1433/problem/A
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string n ;
        cin >> n;
        int x = (int(n[0])-'0'-1)*10;
        int l = n.length();
        while(l>0){
            x+=l;
            l--;
        }
        cout << x << endl;
    }
    return 0;

}
