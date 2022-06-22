// created by kareem sakkary
// last change : 22/6/2022
// link : https://codeforces.com/contest/1675/problem/B
#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int c = 0;
        bool done = true;
        for (int i = n-1; i > 0; i--) {
            while (a[i] <= a[i - 1] && a[i-1]!=0) {
                a[i-1] = a[i-1] / 2;
                c++;
            }
        }

        for(int i = 0 ; i < n-1 ; i++){
            if(a[i]==a[i+1]){
                done = false;
            }
        }
        if(done) cout << c << endl;
        else cout << -1 << endl;

    }

        return  0;
}