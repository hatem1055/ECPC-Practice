// Problem Link: https://codeforces.com/problemset/problem/266/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    int n, ans = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0;i<n-1;i++){
        if(s[i] == s[i+1])
            ans++;
    }
    cout << ans << endl;
}