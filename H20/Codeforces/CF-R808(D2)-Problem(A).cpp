#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
 
int main(){
    DedSec
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        bool bad = false;
        for(int i=1;i<n;i++){
            if(nums[i]%nums[0]!=0){
                bad = true;
                break;
            }
        }
        if(bad){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
