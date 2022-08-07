#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>

using namespace std;

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
    vector<int> v (n);
    vector<int> v2 (n, 1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++){
            if(v[j] >= v[j+1]){
                v2[i]++;
            }
            else{
                break;
            }
        }
        for(int j = i; j > 0; j--){
            if(v[j] >= v[j-1]){
                v2[i]++;
            }
            else{
                break;
            }
        }
    }
    cout << *max_element(v2.begin(), v2.end());
    return 0;
}