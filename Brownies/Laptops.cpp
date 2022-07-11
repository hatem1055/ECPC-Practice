// Problem link: https://codeforces.com/problemset/problem/456/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    int n;
    cin >> n;
    bool happyAlex = false;
    while(n--){
        int p ,q;
        cin >> p >> q;
        if(p < q)
            happyAlex = true;
    }
    if(happyAlex)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}