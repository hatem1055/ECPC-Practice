\\link : https://codeforces.com/contest/1624/problem/A
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll max = 0,min=10e9;
        for(int i = 0 ; i< n; i++){
            ll temp ;
            cin >> temp;
            if(temp>max)max = temp;
            if(temp<min)min = temp;
        }
        cout << max-min << endl;
    }
    return 0;

}
