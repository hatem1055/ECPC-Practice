#include <bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     ll n,sum =0,temp =0;
     vector<pair<ll,pair<ll,ll>>>num;
     cin>>n;
     for(int i=0;i<n;i++){
         ll a,b;
         cin>>a>>b;
         num.push_back({a-b, make_pair(a,b)});
     }
     sort(num.rbegin(),num.rend());
     for(int i=0;i<num.size();i++){
         if(num[i].second.first>temp){
             sum += (num[i].second.first-temp);
             temp = num[i].second.first;
         }
             temp-=num[i].second.second;
     }
     cout<<sum<<endl;







    }














    // alpha[97,122]
    // x y         a[i]==x    a[i]=y   a[










