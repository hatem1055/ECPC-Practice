// Code link --> https://codeforces.com/contest/1692/problem/B
// Author: Nada Mohammed

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n, num;
    cin >> t;
    while(t--) {
        cin >> n;
        set<int> numbers;
        cin.clear();
        for (int i = 0;i<n;i++){
            cin >>num;
            numbers.insert(num);
        }
        int size = numbers.size();
        if (n%2 != size%2)
            size--;
        cout << size << endl;
    }
    return 0;
}

