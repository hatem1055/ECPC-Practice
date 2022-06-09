// created by kareem sakkary
// last change : 9/6/2022
// link : https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> W{0};
        int counter = 0;
        for(char c : s){
            if(c=='W')
                counter++;
            W.push_back(counter);
        }

        int res=n;
        for (int i = k; i <= n; i++) {
            res = min(res, W[i] - W[i - k]);
        }
        cout << res << endl;

    }


    return 0;
}