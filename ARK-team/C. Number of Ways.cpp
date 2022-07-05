//https://codeforces.com/contest/466/problem/C
#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long n , sum=0,  suf = 0, ans = 0 , pref=0 ;
    cin >> n ;
    long long * nums = new long long [n];
    long long * dp = new long long [n];
    for(long long  i = 0 ; i < n ; i++){
       cin >> nums[i];
       sum += nums[i];
    }
    if( sum % 3 != 0){
      cout << 0 ;
      return 0 ;
    }
    for(long long i = n-1 ; i >=0 ; i--){
        suf += nums[i];
        if (i < n-1)
            dp[i] = dp[i+1];
        else
            dp[i] = 0 ;
        if (suf == sum/3){
            dp[i] ++ ;
        }
    }
    for(int i = 0 ; i < n-2; i++){
        pref += nums[i];
        if(pref == sum / 3)
            ans += dp[i+2];

    }
cout << ans ;

}
