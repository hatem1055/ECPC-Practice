// created by kareem sakkary
// last change : 11/6/2022
// link : https://codeforces.com/contest/1678/problem/A
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--){
        int n , k;
        cin>>n;
        int a[n];
        for(int i =0 ; i< n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        bool two_equal = false;
        int c_zeros=(a[0]==0);
        for(int i =1 ; i < n ; i++){
            if(a[i]==0){
                c_zeros++;
            }
            if(a[i]==a[i-1]){
                two_equal = true;
            }
        }
        if(two_equal){
            cout << n-c_zeros<<endl;
        }else{
            if(c_zeros==0)
                cout << n+1<<endl;
            else
                cout << n-c_zeros<<endl;

        }
    }
    return 0;
}