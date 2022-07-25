#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n;
    cin >> k;
    long double h = double(n)/2;
    long long half = ceil(h);
    if(k <= half){
        cout << (k*2)-1;
    }
    else{
        cout << (k-half)*2;
    }
    return 0;
}