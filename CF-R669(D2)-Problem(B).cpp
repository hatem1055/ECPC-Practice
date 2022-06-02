#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int GCD(int n1,int n2){
    while (n2>0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

int main()
{
    int t{0};
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int>answers;
        sort(nums.begin(), nums.end(),greater<>());
        answers.push_back(nums[0]);
        vector<int>dp{};
        dp.push_back(answers[0]);
        for(int i=0;i<n;i++) {
            int max = -1;
            int rp  = 1;
            int pos = 0;
            while (rp<nums.size()){
                int res = GCD(dp[i],nums[rp]);
                if(res>=max){
                    max = res;
                    pos = rp;
                }
                rp++;
                if(rp==nums.size()){
                    dp.push_back(max);
                    answers.push_back(nums[pos]);
                    nums.erase(nums.begin()+pos);
                }
            }
        }
        for(int numb : answers){
            cout<<numb<<" ";
        }
        cout<<endl;
    }
    return 0;
}
