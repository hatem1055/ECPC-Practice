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
    string str;
    cin >> str;
    long long cnt = 0;
    while(str.length() != 1){
        unsigned long long sum = 0;
        for(int i = 0; i < str.length(); i++){
            sum+= str[i]-'0';
        }
        str = to_string(sum);
        cnt++;
    }
    cout << cnt;
    return 0;
}