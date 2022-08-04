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
     ll n,sum =0;
     cin>>n;
     for(int i=0;i<n;i++){
         int k;cin>>k;
         if(k>sum)
             sum = k;
     }
     cout<<sum<<endl;






    }














    // alpha[97,122]
    // x y         a[i]==x    a[i]=y   a[










