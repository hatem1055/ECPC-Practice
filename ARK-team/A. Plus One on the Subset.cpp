//https://codeforces.com/contest/1624/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t ;
    cin >> t ;
    while(t--){
        ll n , x;
        vector <ll> nums;
        cin >> n ;
        for(int i = 0 ; i < n ; i++){
            cin >> x ;
            nums.push_back(x);
        }
        
        sort(nums.begin(), nums.end());
        cout << nums[n-1] - nums[0] << endl;
    }
}
