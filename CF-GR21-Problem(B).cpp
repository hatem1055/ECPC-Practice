#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t{0};
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int pointer = 0;
        int counter = 0;
        while (pointer<n){
            while (nums[pointer]==0 && pointer<n){
                pointer++;
            }
            if(pointer<n){
                while (nums[pointer]!=0 && pointer<n){
                    pointer++;
                }
                counter++;
            }
        }
        cout<<min(2,counter)<<endl;
    }
    return 0;
 
}
