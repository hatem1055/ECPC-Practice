// created by kareem sakkary
// last change : 4/7/2022
// link : https://codeforces.com/contest/1216/problem/C

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct rect{
    ll x1 , y1 , x2 , y2;
};
int main()
{

    rect rects[3];
    for(int i  = 0 ; i < 3; i++) {
        cin >> rects[i].x1 >> rects[i].y1 >> rects[i].x2 >> rects[i].y2;
    }
    ll in_A1=0,in_A2=0,in_A3=0;
    ll A1 = (rects[0].x2-rects[0].x1)*(rects[0].y2-rects[0].y1);
    if(!((rects[0].x2<rects[1].x1 || rects[1].x2<rects[0].x1)||(rects[0].y2<rects[1].y1 || rects[1].y2<rects[0].y1)))
        in_A1 = max((min(rects[0].x2,rects[1].x2)-max(rects[0].x1,rects[1].x1))*(min(rects[0].y2,rects[1].y2)-max(rects[0].y1,rects[1].y1)),(ll)0);
    if(!((rects[0].x2<rects[2].x1 || rects[2].x2<rects[0].x1)||(rects[0].y2<rects[2].y1 || rects[2].y2<rects[0].y1)))
        in_A2 = max((min(rects[0].x2,rects[2].x2)-max(rects[0].x1,rects[2].x1))*(min(rects[0].y2,rects[2].y2)-max(rects[0].y1,rects[2].y1)),(ll)0);
    rect sm_rects[2];
    for(int i=0;i<2;i++) {
        ll xs[] = {rects[0].x1, rects[0].x2, rects[i+1].x1, rects[i+1].x2};
        sort(xs, xs + 4);
        sm_rects[i].x1 = xs[1];
        sm_rects[i].x2 = xs[2];
        ll ys[] = {rects[0].y1, rects[0].y2, rects[i+1].y1, rects[i+1].y2};
        sort(ys, ys + 4);
        sm_rects[i].y1 = ys[1];
        sm_rects[i].y2 = ys[2];
    }
    if(!((sm_rects[0].x2<sm_rects[1].x1 || sm_rects[1].x2<sm_rects[0].x1)||(sm_rects[0].y2<sm_rects[1].y1 || sm_rects[1].y2<sm_rects[0].y1)))
        in_A3 = max((min(sm_rects[1].x2,sm_rects[0].x2)-max(sm_rects[1].x1,sm_rects[0].x1))*(min(sm_rects[1].y2,sm_rects[0].y2)-max(sm_rects[1].y1,sm_rects[0].y1)),(ll)0);
    if(in_A1+in_A2-in_A3>=A1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;

}