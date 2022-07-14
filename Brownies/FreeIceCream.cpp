// Problem Link:https://codeforces.com/contest/686/problem/A
//Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    long long n, x, kids = 0;
    cin >> n >> x;
    for(int i = 0;i<n;i++){
        char s;
        int k;
        cin >> s >> k;
        if(s == '+')
            x += k;
        else if(s == '-'){
            if(k > x)
                kids++;
            else
                x -= k;
        }
    }
    cout << x << ' ' << kids;
}