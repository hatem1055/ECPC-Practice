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
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long mini = LONG_LONG_MAX;
        if(n%3==0){
            cout << n/3 << endl;
            continue;
        }
        else if(n == 1){
            cout << 2 << endl;
            continue;
        }
        if((n-2)%3==0){
            mini = min(mini, (n-2)/3 + 1);
        }
        if(n%2==0){
            mini = min(mini, n/2);
        }
        if((n-1)%3==0){
            mini = min(mini, (n-1)/3 + 1);
        }
        cout << mini << endl;
    }
    return 0;
}