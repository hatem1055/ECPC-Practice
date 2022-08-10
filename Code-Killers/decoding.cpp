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
    string s;
    cin >> s;
    char str[n];
    if(n%2 == 1){
        for(int i = 0; i < n; i++){
            if(i == 0){
                str[(n/2)] = s[i];
                continue;
            }
            if(i%2==1){
                str[(n/2)-((i/2)+1)] = s[i];
            }
            else{
                str[(n/2)+(i/2)] = s[i];
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(i == 0){
                str[(n/2)-1] = s[i];
                continue;
            }
            if(i%2==0){
                str[(n/2)-((i/2)+1)] = s[i];
            }
            else{
                str[(n/2)+(i/2)] = s[i];
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << str[i];
    }
    return 0;
}