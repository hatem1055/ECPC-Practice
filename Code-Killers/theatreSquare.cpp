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
    long double n, m, a;
    cin >> n >> m >> a;
    long long h = ceil(n/a), w = ceil(m/a);
    cout <<  h* w;
    return 0;
}