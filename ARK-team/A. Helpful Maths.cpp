//https://codeforces.com/contest/339/problem/A
//created by : Rana Essam
//last edit : 6/7/2022
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    vector <int> nums;
    for(int i = 0 ; i < str.size() ; i += 2)
    {
        nums.push_back(str[i]-'0');
    }
    sort(nums.begin() , nums.end());
    if(nums.size() == 1)
    {
        cout << nums[0];
    }
    else
    {
    for(int i = 0 ; i < nums.size() ; i++ )
    {
        if( i != nums.size() -1 )
        {
            cout << nums[i] << '+';
        }
        else
        {
            cout << nums[i];
        }

    }
 }
}