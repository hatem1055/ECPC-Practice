#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{0};
    cin>>n;
    vector<int>nums(n);
    vector<int>indexes{};
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int lp = 0;
    int rp = 1;
    while (rp<n){
        if(nums[lp]>nums[rp]){
            while (nums[lp]>nums[rp]&&rp<n){
                rp++;
            }
            indexes.push_back(lp+1);
            indexes.push_back(rp);
            int start = lp;
            int end = rp-1;
            while (start<end){
                swap(nums[start],nums[end]);
                start++;
                end--;
            }
            break;
        }else{
            lp++;
            rp++;
        }
    }
    bool error = false;
    lp = 0;
    rp = 1;
    while (rp<n){
        if(nums[rp]<nums[lp]){
            error = true;
            break;
        }else{
            lp++;
            rp++;
        }
    }
    if(error){
        cout<<"no"<<endl;
    }else {
        cout << "yes" << endl;
        if (indexes.empty()) {
            cout << 1 << " " << 1 << endl;
        } else {

            cout << indexes[0] << " " << indexes[1] << endl;
        }
    }
    return 0;
}
