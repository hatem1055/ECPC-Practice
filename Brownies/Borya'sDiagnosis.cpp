// Problem Link: https://codeforces.com/contest/879/problem/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
#define NadaM ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    NadaM
    int n, min = 0;
    cin >> n;
    vector <int> days;
    while(n--) {
        int s, d;
        cin >> s >> d;
        for(int i = 0;i>=0;i++){
            int x  = s + i*d;
            if(x > min){
                days.push_back(x);
                min = x;
                break;
            }
        }
    }
    cout << *max_element(days.begin(),days.end()) << endl;
}