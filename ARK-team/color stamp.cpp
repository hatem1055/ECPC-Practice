//https://codeforces.com/contest/1669/problem/D
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag=true;
        int r_c=0,b_c=0;
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='R')r_c++;
            if(s[i]=='B')b_c++;
            if(s[i]=='W'){
                if(r_c > 0 || b_c > 0){
                    if(r_c==0 || b_c==0){
                        flag = false;
                    }
                }
                r_c = 0;
                b_c = 0;
            }
        }
        if(r_c > 0 || b_c > 0){
                if(r_c==0 ||b_c==0){
                    flag = false;
                }
            }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;

}
