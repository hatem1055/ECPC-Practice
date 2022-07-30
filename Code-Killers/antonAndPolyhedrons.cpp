#include <iostream>
#include <bits/stdc++.h>    
#include <math.h>
#include <algorithm>
#include <map>

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string, int> m {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    int n;
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        sum+= m[str];
    }
    cout << sum;
    return 0;
}