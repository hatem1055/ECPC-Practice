//https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std ;

vector <int> uni ;
bool find (int num );

int main(){    
    for( int  i = 0 ; i < 4 ; i ++ ){
        int x ;
        cin >> x;
        if (! find(x) ){
            uni.push_back(x);
        }    
    }
    cout << 4 - uni.size() ;
}


bool find (int num ){
    for (int i = 0 ; i < uni.size() ; i ++){
        if (num == uni[i] ){
            return true ;
        }
    }
    return false ;
}
