#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int good = 0;
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        string s = to_string(x);
        vector<bool> arr (k+1);
        for(char ch : s){
            arr[ch-'0'] = true;
        }
        if(all_of(arr.begin(), arr.end(), [](bool i){return i;})){
            good++;
        }
    }
    cout << good;
    return 0;
};