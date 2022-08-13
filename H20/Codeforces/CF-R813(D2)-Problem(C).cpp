/**
████████▄     ▄████████ ████████▄     ▄████████    ▄████████  ▄████████
███   ▀███   ███    ███ ███   ▀███   ███    ███   ███    ███ ███    ███
███    ███   ███    █▀  ███    ███   ███    █▀    ███    █▀  ███    █▀
███    ███  ▄███▄▄▄     ███    ███   ███         ▄███▄▄▄     ███
███    ███ ▀▀███▀▀▀     ███    ███ ▀███████████ ▀▀███▀▀▀     ███
███    ███   ███    █▄  ███    ███          ███   ███    █▄  ███    █▄
███   ▄███   ███    ███ ███   ▄███    ▄█    ███   ███    ███ ███    ███
████████▀    ██████████ ████████▀   ▄████████▀    ██████████ ████████▀

 */
#include <bits/stdc++.h>
#define DedSec ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>nums(n);
    map<int,int>isZero{};
    map<int,priority_queue<int>>position{};
    for(int i=0;i<n;i++){ cin>>nums[i];position[nums[i]].push(i);}
    int operations = 0;
    bool start = false;
    int i=n-2;
    for(;i>=0;i--) {
        int a = nums[i];
        if (isZero[nums[i]]) a = 0;
        int b = nums[i + 1];
        if (isZero[nums[i + 1]]) b = 0;
        if (a > b&&!start) {
            isZero[a] = 1;
            operations++;
            start = true;
            int test = position[a].top();
            if (test > i) i = test;
        }else{
            if(start){
                if(a!=0){
                    isZero[a]=1;
                    if(position[a].top()>i) i =position[a].top();
                    operations++;
                }
            }
        }
    }
    cout<<operations<<endl;
}

int main() {
    DedSec;
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}
