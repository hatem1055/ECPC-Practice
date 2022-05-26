
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t{0};
    long long n{0};
    bool error = false;
    vector<long long>nums{};
    vector<long long>result{};
    cin>>t;
    while (t--){
        nums.clear();
        result.clear();
        error = false;
        cin>>n;
        long long temp;
        for (int i = 0; i <n; ++i) {
            cin>>temp;
            nums.push_back(temp);
        }
        if(n%2!=0) {
            cout << "NO" << endl;
            continue;
        }
        sort(nums.begin(),nums.end());
        bool swap = false;
        long long prev = -1;
        long long first{0},second{0};
        for (int i = 0; i <nums.size()/2 ; ++i) {
            first = nums[i];
            second = nums[nums.size()/2 + i];
            if(first==second){
                error = true;
                cout<<"NO"<<endl;
                break;
            }else{
                result.push_back(first);
                result.push_back(second);
            }
        }
        bool inc = true;
        for (int i = 1; i < result.size(); ++i) {
            if(inc){
                if(result[i]<=result[i-1]) {
                    error = true;
                    cout << "NO" << endl;
                    break;
                }
            } else{
                if(result[i]>=result[i-1]){
                    error = true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            inc = !inc;
        }
        if(!error){
            cout << "YES" << endl;
            for (long long num: result) {
                cout << num << " ";
            }
            cout << endl;
            }
        }


    return 0;
}
