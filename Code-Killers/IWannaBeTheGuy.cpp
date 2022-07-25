#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// vector <bool> arr;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, p, q;
    cin >> n;
    bool arr[n];
    memset(arr, false, sizeof(arr));
    cin >> p;
    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        arr[x-1] = true;
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        arr[x-1] = true;
    }
    if(all_of(arr, arr+n, [](bool i){return i;})){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!"; 
    }
    return 0;
}