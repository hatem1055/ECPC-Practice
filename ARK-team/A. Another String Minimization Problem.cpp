//https://codeforces.com/contest/1706/problem/A
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
#define fr(n) for(int i = 0 ; i < n ;i++)
#define kareemS ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
 
 
int main()
{
    kareemS
    int t;
    cin >>t;
    while(t--){
        int m ,n;
        cin >> n >> m;
        int a[n];
        fr(n)cin >> a[i];
        string s(m,'B');
        fr(n){
            if(s[min(a[i]-1,m-a[i])] != 'A')
                s[min(a[i]-1,m-a[i])] = 'A';
            else
                s[max(a[i]-1,m-a[i])] = 'A';
        }
        cout << s << "\n";
    }
    return 0;
 
}