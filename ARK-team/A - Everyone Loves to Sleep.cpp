#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;
    while(t--){
        int n , H,M;
        cin >> n >> H >> M;
        int diff_H=10e6,diff_M=10e6;
        for(int i = 0 ; i<n;i++){
            int h , m;
            cin >> h >> m;
            int dm = m-M;
            if(dm<0) {
                dm+=60;
                h--;
            }
            int dh = h-H;
            if(dh<0){
                dh+=24;
            }
            if(dh<diff_H){
                diff_H = dh;
                diff_M = dm;
            }
            if(dh == diff_H ){
                if(dm < diff_M){
                    diff_M = dm;
                }
            }
        }
        cout << diff_H <<" "<<diff_M <<'\n';
    }
}
