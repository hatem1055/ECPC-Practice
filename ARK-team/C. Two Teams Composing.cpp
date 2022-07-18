//https://codeforces.com/problemset/problem/1335/C
//created by : Rana Essam
//last edit : 18/7/2022
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t ;
    cin >> t;
    while(t--){
        ll n, x, team2=1, uni  , team1;
        map <ll, ll> nums;
        set <ll> t1;
        cin >> n ;
        uni = n ;
        for(ll i = 0 ; i < n ; i++){
            cin >> x ;
            nums[x] ++;
            t1.insert(x);
        }
       
        for(const auto &it: nums){
            if(it.second > team2){
                team2 = it.second ;
            }
           
        }
         team1 = t1.size();
      if(team1 > team2) {
            cout<<team2<<endl;
        }
        else if(team1 < team2) {
            cout<<team1<<endl;
        }
        else{
            cout<<team1-1<<endl;
        }
    
        
        
    }
}