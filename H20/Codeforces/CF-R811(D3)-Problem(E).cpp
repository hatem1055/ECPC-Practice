#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    map<int,int>freq{};
    int biggestNumber = 0;
    bool divisible = false;
    bool notDivisible = false;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
        if(nums[i]%10!=0){
            while (nums[i]%10!=6&&nums[i]%10!=0||nums[i]<10)nums[i]+=nums[i]%10;
        }
        if(nums[i]%10==0) divisible = true;
        else notDivisible = true;
        biggestNumber = max(biggestNumber,nums[i]);
        freq[nums[i]]++;
    }
    if(divisible&&notDivisible){
        cout<<"No"<<endl;
        return;
    }
    if(divisible&&!notDivisible){
        if(freq[nums[0]]!=n){
            cout<<"No"<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        int check = (biggestNumber-nums[i])%20;
        if(check!=0 && check!=6 && check!=8 && check !=12){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int main(){
    DedSec
    int t;
   cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
