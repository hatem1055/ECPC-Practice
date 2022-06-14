// created by kareem sakkary
// last change : 15/6/2022
// link : https://codeforces.com/contest/1692/problem/F
#include <bits/stdc++.h>
using namespace std;


int main() {
    int q ;
    cin >> q;
    while(q--){
        int n  ;
        cin >> n ;
        int a[n];
        map <int,int> m,m2;
        for(int i = 0; i < n;i++)
        {
            cin >> a[i];
            m[a[i]%10]++;
        }
        bool flag = false;
        int i[3];
        for(i[0] = 0 ; i[0] <= 9;i[0]++){
            for(i[1]= 0;i[1]<=9;i[1]++){
                for(i[2]=0;i[2]<=9;i[2]++){
                    int sum = 0;
                    for(int ic : i){
                        sum+=ic;
                    }
                    if(sum == 3||sum == 13||sum == 23){
                        int c =0;
                        for(int ic : i){
                            if(m[ic]>0){
                                c++;
                                m2[ic]++;
                                if(m[ic]<m2[ic]){c--;}
                            }
                        }
                        if(c==3){
                            flag = true;
                        }
                        for(int ic : i){
                            m2[ic]=0;
                        }
                    }
                }
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}