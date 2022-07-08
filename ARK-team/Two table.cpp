// created by kareem sakkary
// last change : 8/7/2022
// link : https://codeforces.com/contest/1555/problem/B

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        ll table_W , table_H;
        cin >> table_W >> table_H;
        ll x1,y1,x2,y2,h,w;
        cin >>x1 >>y1>>x2>>y2;
        cin >> w >> h;
        if(x2-x1+w >table_W&&y2-y1+h >table_H) {
            cout << "-1\n";
            continue;
        }
        ll dist = 10e9;
        if(x2-x1+w <=table_W){
            dist = min(dist,max((ll)0,w-x1));
            dist = min(dist,max((ll)0,w-(table_W-x2)));
        }
        if(y2-y1+h <=table_H){
            dist = min(dist,max((ll)0,h-y1));
            dist = min(dist,max((ll)0,h-(table_H-y2)));
        }
       cout << dist << '\n';

    }
    return 0;

}