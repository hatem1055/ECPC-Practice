// created by kareem sakkary
// last change : 5/6/2022
// link : https://codeforces.com/contest/1688/problem/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;
        long long a[n];
        for(int i =0 ; i < n ; i++){
            cin >> a[i];
        }
        int odd=0 , even=0;
        for(int i = 0 ; i< n ; i++){
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        if(odd){
            cout << even << endl;
        }else{
            int mn=800;
            for(int i = 0 ; i<n ; i++)
                mn =  min(mn , __builtin_ffs(a[i])-1);
            cout << mn+even-1 << endl;
        }
        }
    return 0;
}