// Problem link: https://codeforces.com/contest/1676/problem/C
// Author: Nada Mohammed
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m;
        string word;
        vector <string> words;
        vector <int> diff;
        cin >> n >> m;
        for(int i = 0;i<n;i++){
            cin >> word;
            words.push_back(word);
        }
        for (int i = 0;i<n;i++) {
            for(int j = i+1;j<n;j++){
                int difference = 0;
                for(int x = 0;x<m;x++){
                    difference += abs(words[i][x] - words[j][x]);
                }
                diff.push_back(difference);
            }
        }
        int min = *min_element(diff.begin(), diff.end());
        cout << min << endl;
    }
}