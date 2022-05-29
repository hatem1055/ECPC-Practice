#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n , c;
    int m , median , l=0, u=0 ;
    cin >> n >> m ;
     vector <int> arr(n);
    
  for (int i = 0 ; i < n ; i++){
      int x ; 
      cin >> x ; 
      if (x < m){
          l++;
      }
      else {
          u++;
      }
  }

  if (l >= u){
      cout << 0 ;
  }
  else {
      cout << u-l;
  }
    // sort(arr.begin(), arr.end() );

    // if ( n % 2 == 0){
    //     median = arr[(n-1)/2] ;
    // }
    // else {
    //     median = arr[n/2];
    // }
    

    // if (median == m){
    //     cout << 1 ;
    // }
    // else if (median < m ){
    //     cout << 0 ;
    // }
    // else {
        
    // }

}