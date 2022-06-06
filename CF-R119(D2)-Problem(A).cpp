#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    vector<int>vals{};
    vals.push_back(a);
    vals.push_back(b);
    vals.push_back(c);
    sort(vals.begin(),vals.end());
    int smallest = vals[0];
    for(int i=smallest;i<n+1;i++){
        vector<int>comparison{};
        for(int j=0;j<3;j++){
            if(i-vals[j]<0){
                continue;
            }
            if(dp[i-vals[j]]==-1){
                continue;
            }
            dp[i] = 1 + dp[i-vals[j]];
            comparison.push_back(dp[i]);
        }
        if(!comparison.empty()){
            dp[i] = *max_element(comparison.begin(),comparison.end());
        }
    }
    cout<<dp[n]<<endl;
 
    return 0;
}
