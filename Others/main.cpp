#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int n;
   cin >> n;
   int arr1[n],arr2[n];
   for(int i=0;i<n;i++){
       cin >> arr1[i];
       arr2[i] = arr1[i];
   }
   sort(arr2,arr2+n);
   for(int i=0;i<n;i++){
       int x,y,l,m,h;
       if(i == 0){
           l = arr1[i] - arr2[1];
           if(l < 0) l *= -1;
       }
       else if(i == n-1){
           l =arr1[i] - arr2[n-2];
           if(l < 0) l *= -1;
       }
       else{
           m = arr1[i]-arr2[i-1];
           if(m < 0) m *= -1;
           h = arr1[i]-arr2[i+1];
           if(h < 0) h *= -1;
           l = min(m,h);
       }
       cout << l << " ";
       x = arr1[i] - arr2[0];
       if(x == 0) x = arr1[i] - arr2[1];
       y = arr1[i] - arr2[n-1];
       if(y == 0) y = arr1[i] - arr2[n-2];
       if(x < 0) x *= -1;
       if(y < 0) y *= -1;
       cout << max(x,y) << endl;
   }
    return 0;
}
