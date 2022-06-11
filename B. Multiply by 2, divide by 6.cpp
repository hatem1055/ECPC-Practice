//Link : https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std ;
int main(){
    int c ;
    cin >> c ;
    vector <int> ans;
    while(c--){
        int num , move =0; 
        cin >> num;
        if(num == 1 ){
           ans.push_back(0); 
        }
        else if (num % 3 != 0){
            ans.push_back(-1);
        }
        else{
            while(num != 1){
                if (num % 3 != 0 ){
                   move = -1 ;
                   break; 
                }
                else {
                    if(num % 6 == 0){
                        num /= 6;
                        move++ ;
                    }
                    else {
                        num *= 2 ;
                        move++;
                    }
                }
            }
            ans.push_back(move);

        }
    }
    for (int m : ans){
        cout << m << endl ;
    }
}
