#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main(){
    DedSec
    const int MAX = 100001;
    long long count[MAX] = {0};
    long long dp[MAX] = {0};
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int number : nums)
        count[number]++;
     dp[0] = 0;
     dp[1] = count[1];
     for(int i=2;i<MAX;i++){
         dp[i] = max(dp[i-1],dp[i-2]+(count[i]*i));
     }
     cout<<dp[MAX-1];
 
    return 0;
}
 
