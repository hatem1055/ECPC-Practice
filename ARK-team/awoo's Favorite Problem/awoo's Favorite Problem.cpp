// created by kareem sakkary
// last change : 12/6/2022
// link : https://codeforces.com/contest/1697/problem/C

#include <bits/stdc++.h>
using namespace std;


int main() {
    int q ;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t ;
        for(int i = 0 ; i < n; i++){

            if(s[i]!=t[i]){
                if(int(t[i])-int(s[i])!=1){
                    break;
                }
                int j =i+1;
                while(s[i]==s[j] && j<n-1)j++;
                if(t[i]!=s[j]) {
                    break;
                }else{
                    swap(s[i],s[j]);
                }
            }
        }
        if(s==t){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
    }
    return 0;
}