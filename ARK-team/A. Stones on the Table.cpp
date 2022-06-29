//https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0 ;
    string colors;
    cin >> n >> colors ;
    for(int i = 0 ; i < n ; i ++){
        if (colors[i] == colors[i+1]){
            ans++;
        }
    }
    cout << ans ;
}
