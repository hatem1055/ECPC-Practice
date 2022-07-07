#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
   int n,m,f;
   vector<int>v;
   cin>>n>>m;
   for(int i=0;i<m;i++){
       cin>>f;
       v.push_back(f);
   }
   sort(v.begin(),v.end());
   int min = v[n-1]-v[0];
   for(int i=1;i<=m-n;i++){
       if(v[i+n-1]-v[i]<min)
           min = v[i+n-1]-v[i];
   }
   cout<<min;


}








