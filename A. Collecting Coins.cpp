//https://codeforces.com/problemset/problem/1294/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> ans;
    long long c ;
    cin >> c ;
    while(c--){
        long long arr[3] , n , max = 0, diff=0;
        for(int i = 0 ; i < 3 ; i++){
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
        }
        
        cin >> n ;
        for(int i = 0 ; i< 3 ; i++){
            diff += (max - arr[i]);
        }
        if (diff <= n ){
            n -= diff ;
            if (n % 3 == 0){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
        }
        else {
            ans.push_back("NO");
        }
    }
    for(string a : ans){
        cout << a << endl  ;
    }
}
