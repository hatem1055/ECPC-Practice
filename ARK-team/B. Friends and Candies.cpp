//https://codeforces.com/problemset/problem/1538/B
//created by : Rana Essam
//last edit : 16/7/2022
#include <bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll t ;
    cin >> t ;
    while(t--){
        ll n;
        cin >> n ;
        vector <ll> arr ;
        for(ll i =0 ; i < n ; i++){
            ll x ;
            cin >> x ;
            arr.push_back(x);
        }
        ll sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum % n != 0){
            cout << -1 << endl ;
        }
        else{
            sort(arr.begin(), arr.end());

            ll i = n-1, temp = sum / n, ans = 0;
            while(arr[i] > temp){
                ans++;
                i--;
            }
            cout << ans << endl ;
        }

    }
}