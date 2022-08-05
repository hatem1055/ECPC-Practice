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
    int n, last = 4126;
    cin >> n;
    bool inc = true;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(x != y){
            cout << "rated";
            return 0;
        }
        else if(x > last){
            inc = false;
        }
        last = x;
    }
    if(inc){
        cout << "maybe";
    }
    else{
        cout << "unrated";
    }
    return 0;
}