// created by kareem sakkary
// last change : 3/6/2022
// link : https://codeforces.com/contest/1688/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        long long x;
        cin >> x;
        int binX[120];
        int binY[120];
        for(int i = 0 ; i < 120;i++){
         binX[i]=0;
         binY[i]=0;
        }
        for(int i=0; x>0; i++)
        {
            binX[i]=x%2;
            x= x/2;
        }
        int c=0;
        for(int i = 0 ; i < 120;i++){
            if(binX[i]==1)
                c++;
        }
        if(c==1){
            bool done = true , done1 = true;
            for(int i = 0 ; i < 120;i++){
                if(binX[i]==0 && done){
                    binY[i]=1;
                    done = false;
                }
                if(binX[i]==1 && done1){
                    binY[i]=1;
                    done1 = false;
                }
                if(!done && !done1)
                    break;
            }
        }else{
            for(int i = 0 ; i < 120;i++){
             if(binX[i]==1 ){
                    binY[i]=1;
                 break;
                }
            }
        }
        long long y =0;
        for(int i =0 ; i< 120 ; i++){
            y += binY[i]*pow(2,i);
        }

        cout << y << endl;
    }

    return 0;
}