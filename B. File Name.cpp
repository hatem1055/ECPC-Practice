//https://codeforces.com/problemset/problem/978/B

#include <bits/stdc++.h>
using namespace std ;
int main(){
    int len , c = 0 , ans = 0; 
    bool flag =1 ;
    cin >> len ;
    string name ;
    cin >> name ;
    for (int i = 0 ; i < len ; i ++){
        if (name[i] == 'x'){
            c++;
        }
        else{
            c = 0;
        }
        if (c >=  3 ){
            ans += 1 ;
            
        }
    }
    cout << ans ;
}
