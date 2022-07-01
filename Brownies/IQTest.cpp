// Problem link: https://codeforces.com/problemset/problem/25/A
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, index = 0;
    cin >> n;
    vector <int> numbers;
    vector <int> mod;
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
        int temp = numbers[i] % 2;
        mod.push_back(temp);
    }
    for (int i = 0; i < mod.size(); i++){
        if(count(mod.begin(), mod.end(), mod[i]) == 1)
            index = i + 1;
    }
    cout << index << endl;
}