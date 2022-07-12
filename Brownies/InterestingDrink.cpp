// Problem Link: https://codeforces.com/problemset/problem/706/B
// Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    int n, q;
    cin >> n;
    int shops [n];
    for (int i = 0;i<n;i++){
        cin >> shops[i];
    }
    sort(shops,shops + n);
    cin >> q;
    while(q--){
        int m;
        cin >> m;
        cout << upper_bound(shops,shops + n, m) - shops << endl;
    }
}