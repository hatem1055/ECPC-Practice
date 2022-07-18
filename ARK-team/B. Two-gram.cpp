//https://codeforces.com/problemset/problem/977/B

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int l ;
    string str, ans, s = "";
    map<string, int> map;
    cin >> l ;
    cin >> str;
    for(int i = 0 ; i < l-1 ; i = i+2){
         s = s+ str[i] + str[i+1];
        map[s]++ ;
        s = "";
    }
    int max = 0 ;
  for (const auto &it: map){
        if((it.second ) > max ){
            max = it.second ;
            ans = it.first ;
            
        }
    }
    cout << ans ;

    return 0;
}
