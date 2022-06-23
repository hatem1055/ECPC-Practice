//https://codeforces.com/problemset/problem/510/A
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x , y ;
    bool flag =1;
    cin >> x >> y ;
    for(int i = 0 ; i < x ; i++){
        int x = 0 ;
        for(int j = 0 ; j < y ; j ++){
            if(i % 2 == 0){
                cout << "#";
            }
            else if( !flag){   
                  if (j == 0 )
                {
                    cout << "#";
                }
                else{
                    cout << ".";
                }
              }        
            else {               
                 if (j == y-1 )
                {
                    cout << "#";
                }
                else{
                    cout << ".";                
                }
            }
        }
        if(i %2 != 0 ){
            flag = !flag; 
        }       
        cout << endl ;
    }
}
