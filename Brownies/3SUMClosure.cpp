// Problem link: https://codeforces.com/contest/1698/problem/C
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

void yarab(){
    int size, num, pos = 0, neg = 0, zero = 0;
    vector <int> numbers;
    cin >> size;
    for(int i = 0;i<size;i++){
        cin >> num;
        if(num > 0) {
            numbers.push_back(num);
            pos++;
        }
        else if (num < 0) {
            numbers.push_back(num);
            neg++;
        }
        else if (num == 0){
            if (zero < 2) {
                numbers.push_back(num);
                zero++;
            }
        }
    }
    if (pos > 2 || neg > 2) {
        cout << "NO" << endl;
        return;
    }
    int n = numbers.size();
    for (int i = 0;i < n;i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                bool found = false;
                for(int l = 0;l < n;l++) {
                    if (numbers[i] + numbers[j] + numbers[k] == numbers[l])
                        found = true;
                }
                if (!found) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        yarab();
    }
}