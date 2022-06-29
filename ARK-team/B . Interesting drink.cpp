//https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n , c, num , ans; 
    cin >> n ;
   int * arr = new int [n];
   for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
   sort(arr, arr+n);
   cin >> c ;
   while(c --)
   {
      cin >> num ;
      ans = upper_bound(arr, arr+n , num ) - arr;
      cout << ans << endl ;

   }
}
