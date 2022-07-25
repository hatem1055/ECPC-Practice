#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> all;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    // char arr[n][n];
    // all = vector<bool> (n*n);
    char ch1, ch2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0){
                cin >> ch1;
            }
            else if(i == 0 && j == 1){
                cin >> ch2;
                if(ch1 == ch2){
                    cout << "NO";
                    return 0;
                }
            }
            else{
                char ch;
                cin >> ch;
                if(i == j || j == (n-i-1)){
                    all.push_back(ch == ch1);
                }
                else{
                    all.push_back(ch == ch2);
                }
            }
        }
    }
    if(all_of(all.begin(), all.end(), [](bool i){return i;})){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}