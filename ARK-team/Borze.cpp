//https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std ;

int main(){
    string num, result= "" ;
    cin >> num ;
    int c = 0,i = 0 ;

    while ( c != num.size() ){
        string x = "";
        int p =0 ;
         while (i < num.size()){
             c++;
             p++;
           
            if (num[i] == '.' && p == 1 ){
                 x = num[i] ;
                 i++; 
                 break ;                 
             }
             else if (p==2){
                 x += num[i] ;
                 i++; 
                 break;
             }
              else  {
                 x += num[i] ;
                 i++; 
             }       
        }
      
        if ( x == "." ){
            result += '0';
        }
        else if (x == "--"){
            result += '2';
        }
        else if (x == "-.") {
            result += '1';
        }
      
    }
cout << result ;
   
}
