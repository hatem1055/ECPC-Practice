// Problem link: https://codeforces.com/contest/1692/problem/F
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, num;
        string found = "NO";
        cin >> n;
        vector <int> numbers;
        int freq[10] = {};
        for (int i = 0;i<n;i++){
            cin >> num;
            freq[num % 10]++;
            if(freq[num % 10] <= 3) {
                numbers.push_back(num % 10);
            }
        }
        for (int i = 0;i<numbers.size();i++) {
            for (int j = i + 1;j<numbers.size();j++){
                for (int k = j + 1;k<numbers.size();k++){
                    if ((numbers[i] + numbers [j] + numbers[k]) % 10 == 3){
                        found = "YES";
                        break;
                    }
                }
            }
        }
        cout << found << endl;
    }
}