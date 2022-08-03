#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int nex(int n){
    for(int i = n+1; i <= 50; i++){
        bool bo = true;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                bo = false;
                break;
            }
        }
        if(bo){
            return i;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int next = nex(n);
    if(m == next){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}