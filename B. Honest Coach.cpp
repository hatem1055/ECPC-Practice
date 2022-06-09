//Available at https: //codeforces.com/problemset/problem/1360/B
//written by: Rana Essam
//last edit: 9/6/2022

#include <bits/stdc++.h>
using namespace std ;

int main(){
 vector < int > result ;
   int c ;
  cin >> c ;
  while (c--){
      vector < int > players ;
      vector < int > dif ;
      int n ;
      cin >> n ; 
      while (n--){
          int x ; 
          cin >> x ;
          players.push_back(x);
      }
      sort(players.begin(), players.end());
      for (int i = 0 ; i < players.size() ; i ++){
          if (i != players.size() -1)
          dif.push_back(players[i+1]-players[i]);
      }
      sort(dif.begin(), dif.end() );
      result.push_back(dif[0]);
  }

  for (int r : result){
      cout << r << endl ;
  }

}
