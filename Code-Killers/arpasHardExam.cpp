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
    long long n;
    cin >> n;
    if(n == 0){
        cout << 1;
    }
    else{
        long long x = n % 4;
        if(x == 1)cout << 8;
        else if(x==2)cout << 4;
        else if(x==3) cout << 2;
        else cout << 6;
    }

    return 0;
}